#include <iostream>             // Fungsi destructor ialah untuk mencegah terjadinya kebocoran memori
#include <string>

using std::cout;
using std::cin;
using std::endl;

class User {
    public:
        std::string data;

        // Constructor
        User(const char* data) {
            User::data = data;
            cout << "data user " << User::data << " dibuat" << endl;
        }

        // Destructor
        ~User() {
            cout << "data user " << User::data << " dihapus" << endl;
        }
};

void userStackPtr(User* &userPtr) {
    User stackUser = User("stack1");
    userPtr = &stackUser;
}

void userHeapPtr(User* &userPtr) {
    User* heapUser = new User("heap3");
    userPtr = heapUser;
}

User crtUserStack() {
    User stackUSer = User("stack2");
    return stackUSer;
}

User* crtUserHeap() {
    User* heapUser = new User("heap4");
    return heapUser;
}

int main() {
    // Object stack
    cout << "Data Stack" << endl;
    {
        User stackUser = User("stack");
    } // data stack dalam bracket akan otomatis terhapus

    cout << "\nData Heap" << endl;
    { // data heap tidak akan terhapus otomatis walaupun didalam bracket
        User* heapUser1 = new User("heap1");
    }

    {
        User* heapUser2 = new User("heap2");
        delete heapUser2;  // Cara menghapus data pada heap yaitu dengan menggunakan perintah delete
    }

    // Simulasi memory leak
    cout << "\nMemory Leak" << endl;
    User* userLeak1;
    userStackPtr(userLeak1);  // Memory free
    cout << (*userLeak1).data << endl << endl;  // Nilai kosong (akan mengeksekusi nilai random/error)

    // !-- Leak pada heap memory
    User* userLeak2;
    userHeapPtr(userLeak2);
    cout << userLeak2->data << endl; // Memory leak (bocor)
    userLeak2->data = "bocor!";
    cout << userLeak2->data << endl;
    delete userLeak2; // Memory free

    // Return object
    cout << "\nReturn Object" << endl;
    
    User userReturnStack = crtUserStack(); // Memory leak
    cout << userReturnStack.data << endl;  // Data ini tidak akan langsung dihapus

    // Cara menghapusnya dapat menggunakan bracket kosong atau membiarkannya sampai program berakhir
    // penggunaan perintah delete tidak akan bisa

    User* userReturnHeap = crtUserHeap();
    cout << userReturnHeap->data << endl;
    delete userReturnHeap; // data pada memory heap akan dihapus

    return 0;
}

/*  Conclusion

    tiap menggunakan heap harus dilanjutkan perintah delete
    contoh:
        Class* object = new object("input");
        delete object;

    dan untuk data stack, cukup mengakalinya dengan membuat bracket kosong atau tempatkan pada function
    data stack hanya bersifat sementara dan akan otomatis terhapus saat program berakhir
    contoh:
        {
            Class object("input");
        }

*/