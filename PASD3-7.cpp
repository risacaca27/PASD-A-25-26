#include <iostream>
using namespace std;

// Struktur node
struct cel {
    string data;
    cel* next;
};

// Stack (top)
cel* ca = NULL;

// Fungsi push (tambah data ke atas)
void push(string isi) {
    cel* baru = new cel;
    baru->data = isi;
    baru->next = ca;
    ca = baru;
}

// Fungsi pop (hapus data teratas)
void pop() {
    if (ca == NULL) {
        cout << "Stack kosong!" << endl;
    } else {
        cel* hapus = ca;
        ca = ca->next;
        delete hapus;
    }
}

// Fungsi tampil stack
void tampil() {
    cel* bantu = ca;
    cout << "Isi Stack:" << endl;
    while (bantu != NULL) {
        cout << bantu->data << endl;
        bantu = bantu->next;
    }
    cout << endl;
}

int main() {

    // Data awal (sesuai gambar, dari bawah ke atas)
    push("Iphone");
    push("Windows");
    push("Mac");
    push("Symbian");
    push("Maemo");

    cout << "Stack awal:" << endl;
    tampil();

    // a. Masukkan "Iphone 5" di atas "Iphone"
    // Cara: ambil semua sampai ketemu "Iphone", lalu push ulang
    pop(); // Maemo
    pop(); // Symbian
    pop(); // Mac
    pop(); // Windows

    push("Iphone 5");
    push("Windows");
    push("Mac");
    push("Symbian");
    push("Maemo");

    cout << "Setelah tambah Iphone 5:" << endl;
    tampil();

    // b. Tambahkan "Windows Phone" di atas "Windows"
    pop(); // Maemo
    pop(); // Symbian
    pop(); // Mac

    push("Windows Phone");
    push("Mac");
    push("Symbian");
    push("Maemo");

    cout << "Setelah tambah Windows Phone:" << endl;
    tampil();

    // c. Tambahkan "SnowLeopard" setelah "Mac"
    pop(); // Maemo
    pop(); // Symbian

    push("SnowLeopard");
    push("Symbian");
    push("Maemo");

    cout << "Setelah tambah SnowLeopard:" << endl;
    tampil();

    // d. Tambahkan "Symbian Belle" setelah "Symbian"
    pop(); // Maemo

    push("Symbian Belle");
    push("Maemo");

    cout << "Setelah tambah Symbian Belle:" << endl;
    tampil();

    // e. Tambahkan "Maemo 4" paling bawah tanpa hapus semua
    // trik: kosongkan sementara lalu isi lagi
    string temp[20];
    int i = 0;

    while (ca != NULL) {
        temp[i] = ca->data;
        pop();
        i++;
    }

    push("Maemo 4");

    for (int j = i - 1; j >= 0; j--) {
        push(temp[j]);
    }

    cout << "Setelah tambah Maemo 4 di bawah:" << endl;
    tampil();

    return 0;
}