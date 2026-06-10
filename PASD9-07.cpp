#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct Node
{
    char INFO;
    Node *Left;
    Node *Right;
    Node *Link;
};

typedef Node Simpul;

Simpul *Root, *ca, *cel, *ris, *LastCurrent, *LastKiri;

const int kiri = 0;
const int kanan = 1;

int n, Flag, FlagHabis, Level;
char A[26] =
{
    'A','B','C','D','E','F','G','H','I','J','K','L',
    'M','N','O','P','Q','R','S','T','U','V','W','X',
    'Y','Z'
};

void Inisialisasi()
{
    Root = NULL;
}

void BuatSimpul(char item)
{
    ca = new Simpul;

    if(ca != NULL)
    {
        ca->INFO = item;
        ca->Left = NULL;
        ca->Right = NULL;
        ca->Link = NULL;
    }
    else
    {
        cout << "Memory Penuh" << endl;
        exit(1);
    }
}

void BuatSimpulAkar()
{
    if(Root == NULL)
    {
        Root = ca;
        LastCurrent = Root;
        LastKiri = Root;
        Flag = kiri;
        Level = 0;
        n = 1;
        FlagHabis = 1;
    }
    else
    {
        cout << "Pohon Sudah Ada" << endl;
        exit(1);
    }
}

void TambahSimpul()
{
    if(Root != NULL)
    {
        n = n + 1;

        if(FlagHabis == 1)
        {
            FlagHabis = 0;
            ris = ca;
            LastCurrent->Left = ca;
            Flag = kanan;
            Level = Level + 1;
        }
        else
        {
            if(Flag == kiri)
            {
                Flag = kanan;
                LastCurrent->Left = ca;
                ris->Link = ca;
                ris = ca;
            }
            else
            {
                LastCurrent->Right = ca;
                ris->Link = ca;

                Flag = kiri;

                if(n == (pow(2, Level + 1) - 1))
                {
                    FlagHabis = 1;
                    LastCurrent = LastKiri->Left;
                    LastKiri = LastKiri->Left;
                }
            }
        }
    }
}

void BacaUrutNomor()
{
    int i, j;
    Simpul *Q[129], *cel;

    i = 1;
    j = 1;

    Q[i] = Root;

    while(Q[i] != NULL)
    {
        cel = Q[i];

        cout << cel->INFO << " ";
        
        if(cel->Left != NULL)
        {
            j++;
            Q[j] = cel->Left;
        }

        if(cel->Right != NULL)
        {
            j++;
            Q[j] = cel->Right;
        }

        i++;
    }

    cout << endl;
}

int main()
{
    Inisialisasi();

    BuatSimpul(A[0]);
    BuatSimpulAkar();

    for(int i = 1; i < 10; i++)
    {
        BuatSimpul(A[i]);
        TambahSimpul();
    }

    cout << "Tampilan Binary Tree :" << endl;
    BacaUrutNomor();

    return 0;
}