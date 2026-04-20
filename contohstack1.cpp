//Deklarasi struktur data nilai MK
typedef struct {
	string npm;
	sring nama_mhs;
	double nilai;
}	NilaiMK;

//Deklarasi struktur elemen
typedef struct elm *alamatelm;
typedef struct elm {
	NilaiMK Kontainer;
	alamatelm next;
}	elemen;

//Deklarasi struktur stack
typedef struct {
	eleemen* top;
}	stack;

//Deklarasi fungsi membuat stack kosong 
int isKosong(stack *S) {
	(*S).top = NULL;
}

//5.Deklarasi funggsi membuat stack kosong 
int isKosong(stack S) {
	bool hasil = false;
	
	if(S.top == NULL) {
	hasil = true;
	}
	return hasil;
}

//6.Deklarasi fungsi menghitung jumlah elemen stack
int jmlElemen(stack S) {
	int hasil = 0;
	
	if(Stop != NULL) {
	//Kondidi Stack Tidak Kosong
	elemen *bantu;
	//inisialisasi
	bantu = S.top;
	
	while(bantu != NULL) {
		hasil = hasil + 1;
		//interasi
		bantu = bantu -> next;
		}
	}
	return hasil;
	
//7.Deklarasi fungasi memasukkan elemen ke dalam stack
void push(string npm, string nama_mhs, double nilai, stack *S) {
	elemen *info;
	info = new elemen;
	info -> Kontainer.npm = npm;
	info -> Kontainer.nama_mhs = nama_mhs;
	info -> Kontainer.nilai = nilai;
	
	if((*S).top == NULL) {
		cout << "Stack Penuh" << endl;
		//jika stack kosonng
		info -> next = NULL;
		}
	else {
		//jika stack tidak kosong
		info -> next = (*S).top;
		}
	(*S).top = info;
	info = NULL;
}
//8.Deklarasi fungsi me ngeluarkan elemen keluar stack
void Pop(stack *S) {
	if((*S).top != NULL) {
	//jika list bukan stack kosong
	elemen *hapus = (*S).top;
	
	if(jmlElemen(*S) == 1) {
		//jika stack tidak kosong
		(*S).top = NULL;
		}
	else {
		(*S).top = (*S).top -> next;
	}
	hapus -> next = NULL;
	delete hapus
	}
	else {
		cout << "Stack Kosong" << endl;
		}
	}
//9.Deklarasi fungsi menampilkan isi stack
void CteakStack(stack S)
{
	if(S.top != NULL)
	{
		cout << = "MENAMPILKAN STACK" << endl;
		elemen *bantu = S.top;
		int i = 1;
		while(bantu != NULL)
		{
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "Elemen ke 		: " << i << endl;
			cout << "Nomor Pokok Mahasiswa : " << bantu -> Kontainer.npm << endl;
			cout << "Nama Mahasiswa : " << bantu -> kontainer.nama_mhs << endl;
			cout << "Nilai Mahasiswa : " << bantu -> kontainer.nilsi << endl;
		//iterasi
		bantu = bantu -> next;
		i - i + 1;
		}
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
	else
		{
			cout << "Stack Kosong" << endl;
		}
		
//Menu Utama
int main() {
	stack S;
	
	buatSTkosong(&S);
	CetakStack(S);
	cout << endl;
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	push("45232100666", "Budi", 88,75, &S);
	push("45232100777", "Susi", 78,85, &S);
	push("45232100888", "Nuri", 98,65, &S);
	push("45232100999", "Bimo", 68,55, &S);
	push("45232100555", "Arif", 78,85, &S);
	push("45232100444", "Rido", 98,65, &S);
	push("45232100222", "Ella", 68,55, &S);
	CetakStack(S);
	cout << "========================" << endl;
	cout << endl;
	cout << endl;
	Pop(&S);
	CetakStack(S);
	cout << endl;
	cout << endl;
	Pop(&S);
	CetakStack(S);
	cout << "========================" << endl;
	return 0;
}