#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string ca[] =
    {
        "Jeruk",
        "Apel",
        "Mangga",
        "Anggur",
        "Melon"
    };

    int cel = 5;

    sort(ca, ca + cel);

    cout << "HASIL PENGURUTAN MENGGUNAKAN BTREE" << endl;
    cout << "==================================" << endl;
    cout << endl;

    for(int ris = 0; ris < cel; ris++)
    {
        cout << ca[ris] << endl;
    }

    return 0;
}