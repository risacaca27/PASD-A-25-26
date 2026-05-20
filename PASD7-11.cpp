#include <iostream>
using namespace std;

struct Bubble
{
    int ca[5];
};

int main()
{
    Bubble cel;

    cel.ca[0] = 23;
    cel.ca[1] = 98;
    cel.ca[2] = 34;
    cel.ca[3] = 1008;
    cel.ca[4] = 89;

    int sa, ris, x;

    cout << "================================" << endl;
    cout << "      PROGRAM BUBBLE SORT      " << endl;
    cout << "        DESCENDING ORDER       " << endl;
    cout << "================================" << endl;

    cout << "Data Sebelum Sorting : " << endl;
    
    for(sa = 0; sa < 5; sa++)
    {
        cout << cel.ca[sa] << " ";
    }

    cout << endl;
    cout << endl;

    for(sa = 0; sa < 5 - 1; sa++)
    {
        for(ris = 0; ris < 5 - 1 - sa; ris++)
        {
            if(cel.ca[ris] < cel.ca[ris + 1])
            {
                x = cel.ca[ris];
                cel.ca[ris] = cel.ca[ris + 1];
                cel.ca[ris + 1] = x;
            }
        }
    }

    cout << "Data Sesudah Sorting Descending : " << endl;

    for(sa = 0; sa < 5; sa++)
    {
        cout << cel.ca[sa] << " ";
    }

    cout << endl;
    cout << "================================" << endl;
    cout << "         TERIMA KASIH          " << endl;
    cout << "================================" << endl;

    return 0;
}