#include<stdio.h>
#include<iostream>
#include<stdlib.h> //untuk library fungsi malloc
#include<string.h> 
using namespace std;
void BUAT_SIMPUL(int X);
void AWAL();
void CETAK();
void INSERTKANAN();
struct Node //Deklarasi struktur simpul {
	int INFO;
	struct Node *LINK; };
typedef struct Node Simpul;
Simpul *P, *FIRST, *LAST, *Q; //menyiapkan pointer2 yg dapat menunjuk ke simpul
int X;
int main() {
	int A[7] - {22,28,7,11,66,63,10}; //Data yang disimpan kedlm INFO
	int I;
	FIRST = NULL; //Inisialisasi Linked List
	I=0;
	X=A[I];
	BUAT_SIMPUL(X);
	AWAL(); 	//Menyiapkan simpul awal
	for(I=1; I<=6; I++) //Menambahkan 8 simpul baru dan insert kanan agar terbentuk Linked List
	X=A[I];
	BUAT_SIMPUL(X);
	INSERTKANAN(); }
cout << "Nilai Sebelum Dilakukaan Insert Kanan : ";
CETAK();
X = 100;
BUAT_SIMPUL