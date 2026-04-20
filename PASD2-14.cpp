#include <iostream>
#include <iomanip>
using namespace std;

class StackOS {
public:
    string saData[100];
    int caTop;

    void init() {
        caTop = -1;
    }

    bool isEmpty() {
        return caTop == -1;
    }

    void push(string saNilai) {
        caTop++;
        saData[caTop] = saNilai;
    }

    string pop() {
        string saTemp = saData[caTop];
        caTop--;
        return saTemp;
    }

    void tampilKotak() {
        cout << endl;
        cout << "=================================" << endl;
        for (int i = caTop; i >= 0; i--) {
            cout << "| " << setw(29) << left << saData[i] << "|" << endl;
            cout << "---------------------------------" << endl;
        }
    }
};

int main() {
    StackOS s, bantu;
    s.init();
    bantu.init();

    // Data awal
    s.push("Iphone");
    s.push("Windows");
    s.push("Mac");
    s.push("Symbian");
    s.push("Maemo");

    cout << "Data awal:" << endl;
    s.tampilKotak();

    // a
    while (!s.isEmpty()) {
        string temp = s.pop();
        if (temp == "Iphone") {
            s.push(temp);
            s.push("Iphone 5");
            break;
        }
        bantu.push(temp);
    }
    while (!bantu.isEmpty()) s.push(bantu.pop());

    // b
    while (!s.isEmpty()) {
        string temp = s.pop();
        if (temp == "Windows") {
            s.push(temp);
            s.push("Windows Phone");
            break;
        }
        bantu.push(temp);
    }
    while (!bantu.isEmpty()) s.push(bantu.pop());

    // c
    while (!s.isEmpty()) {
        string temp = s.pop();
        if (temp == "Mac") {
            s.push(temp);
            s.push("SnowLeopard");
            break;
        }
        bantu.push(temp);
    }
    while (!bantu.isEmpty()) s.push(bantu.pop());

    // d
    while (!s.isEmpty()) {
        string temp = s.pop();
        if (temp == "Symbian") {
            s.push(temp);
            s.push("Symbian Belle");
            break;
        }
        bantu.push(temp);
    }
    while (!bantu.isEmpty()) s.push(bantu.pop());

    // e
    while (!s.isEmpty()) {
        bantu.push(s.pop());
    }
    s.push("Maemo 4");
    while (!bantu.isEmpty()) {
        s.push(bantu.pop());
    }

    cout << endl;
    cout << "Hasil akhir:" << endl;
    s.tampilKotak();

    return 0;
}