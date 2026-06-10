#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node *left;
    Node *right;
};

void preorder(Node *ca)
{
    if (ca != NULL)
    {
        cout << ca->data << " ";
        preorder(ca->left);
        preorder(ca->right);
    }
}

int main()
{
    Node *ca, *cel, *ris;

    // Membuat tree awal
    ca = new Node{'A', NULL, NULL};
    cel = new Node{'F', NULL, NULL};
    ris = new Node{'D', NULL, NULL};

    ca->left = cel;
    ca->right = ris;

    cel->left = new Node{'B', NULL, NULL};
    cel->right = new Node{'E', NULL, NULL};

    ris->left = new Node{'B', NULL, NULL};

    cout << "TREE AWAL : ";
    preorder(ca);
    cout << endl << endl;

    // a. Hapus E lalu masukkan M
    delete cel->right;
    cel->right = new Node{'M', NULL, NULL};

    cout << "a. Setelah E dihapus dan diganti M : ";
    preorder(ca);
    cout << endl;

    // b. Hapus B (di kiri D) lalu masukkan N
    delete ris->left;
    ris->left = new Node{'N', NULL, NULL};

    cout << "b. Setelah B dihapus dan diganti N : ";
    preorder(ca);
    cout << endl;

    // c. Hapus D lalu masukkan O
    ris->data = 'O';

    cout << "c. Setelah D dihapus dan diganti O : ";
    preorder(ca);
    cout << endl;

    // d. Hapus F lalu masukkan P
    cel->data = 'P';

    cout << "d. Setelah F dihapus dan diganti P : ";
    preorder(ca);
    cout << endl;

    return 0;
}