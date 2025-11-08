#include <iostream>
using namespace std;

char a[] = "hello";

int main()
{
    for (int i = 0; i < 6; i++)
    {
        cout << (int)a[i] << endl;
    }

    int ROT1 = 1;

    for (int i = 0; i < 6; i++)
    {
        cout << (int)a[i] + ROT1 << endl;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << char(a[i] + ROT1) << endl;
    }

    return 0;
}