#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string caData;
    Node *next;
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    void tambahBelakang(string caData)
    {
        Node *baru = new Node();
        baru->caData = caData;
        baru->next = NULL;

        if (front == NULL)
        {
            front = baru;
            rear = baru;
        }
        else
        {
            rear->next = baru;
            rear = baru;
        }
    }

    void tambahSetelah(string caCari, string caDataBaru)
    {
        Node *bantu = front;

        while (bantu != NULL)
        {
            if (bantu->caData == caCari)
            {
                Node *baru = new Node();

                baru->caData = caDataBaru;
                baru->next = bantu->next;

                bantu->next = baru;

                if (bantu == rear)
                {
                    rear = baru;
                }

                return;
            }

            bantu = bantu->next;
        }
    }

    void tampil()
    {
        Node *bantu = front;

        cout << endl;
        cout << "ISI ANTRIAN OS" << endl;
        cout << "==========================" << endl;

        while (bantu != NULL)
        {
            cout << bantu->caData << endl;
            bantu = bantu->next;
        }

        cout << "==========================" << endl;
    }
};

int main()
{
    Queue saQueue;

    saQueue.tambahBelakang("Maemo");
    saQueue.tambahBelakang("Symbian");
    saQueue.tambahBelakang("Mac");
    saQueue.tambahBelakang("Windows");
    saQueue.tambahBelakang("Iphone");

    cout << "Data Awal : ";
    saQueue.tampil();

    // a
    saQueue.tambahSetelah("Iphone", "Iphone 5");

    // b
    saQueue.tambahSetelah("Windows", "Windows Phone");

    // c
    saQueue.tambahSetelah("Mac", "SnowLeopard");

    // d
    saQueue.tambahSetelah("Symbian", "Symbian Belle");

    // e
    saQueue.tambahBelakang("Maemo 4");

    cout << endl;
    cout << "Data Setelah Ditambahkan : ";
    saQueue.tampil();

    return 0;
}