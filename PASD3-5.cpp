#include <iostream>
using namespace std;

// ================= STRUCT NODE =================
struct celNode {
    string caNama;
    int caUmur;
    celNode* celNext;
};

// ================= STACK =================
celNode* celTop = NULL;

// ================= PUSH =================
void celPush(string caNama, int caUmur) {
    celNode* caBaru = new celNode;
    caBaru->caNama = caNama;
    caBaru->caUmur = caUmur;
    caBaru->celNext = celTop;
    celTop = caBaru;
}

// ================= TAMPIL (VERTIKAL) =================
void celTampil() {
    celNode* caBantu = celTop;
    while (caBantu != NULL) {
        cout << "Nama & Umur : "
             << caBantu->caNama << " - "
             << caBantu->caUmur << endl;
        caBantu = caBantu->celNext;
    }
}

// ================= TAMPIL (HORIZONTAL) =================
void celTampilHorizontal() {
    celNode* caBantu = celTop;
    while (caBantu != NULL) {
        cout << caBantu->caNama << " --"
             << caBantu->caUmur << "   ";
        caBantu = caBantu->celNext;
    }
    cout << endl;
}

// ================= HAPUS DATA TERTENTU =================
void celHapusTertentu(string caNama, int caUmur) {
    celNode *caBantu = celTop, *caPrev = NULL;

    while (caBantu != NULL) {
        if (caBantu->caNama == caNama && caBantu->caUmur == caUmur) {
            if (caPrev == NULL) {
                celTop = caBantu->celNext;
            } else {
                caPrev->celNext = caBantu->celNext;
            }
            delete caBantu;
            break;
        }
        caPrev = caBantu;
        caBantu = caBantu->celNext;
    }
}

// ================= MAIN =================
int main() {

    // PUSH DATA
    celPush("Nathan", 22);
    celPush("Celine", 66);
    celPush("Kean", 28);
    celPush("Zoe", 63);
    celPush("Sky", 10);

    // ===== SEBELUM HAPUS =====
    celTampil();

    cout << "=============================================" << endl;

    // ===== HAPUS ZOE =====
    celHapusTertentu("Zoe", 63);

    // ===== SETELAH HAPUS =====
    cout << "Nama : ";
    celTampilHorizontal();

    cout << "=============================================" << endl;

    // ===== OUTPUT AKHIR =====
    celTampilHorizontal();

    return 0;
}