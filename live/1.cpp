#include <iostream>
#include <cstring>
using namespace std;

int ROT{};

int main()
{
    while (true)
    {
        cout << "Enter ROT: ";
        cin >> ROT;

        if (ROT == 0) break;

        cout << "Enter the word" << endl;
        char a[10] = "";
        cin >> a;

        if (a == "stop") break;

        for (int i = 0; i < strlen(a); i++)
        {
            cout << char(a[i] + ROT);
        }
        cout << endl;
    }

    return 0;
}