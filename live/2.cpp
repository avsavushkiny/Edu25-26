#include <iostream>
#include <cstring>
using namespace std;

int ROT{};

int main()
{
    while (true)
    {
        cout << "Enter secret word" << endl;
        char a[10] = "";
        cin >> a;
        if (a == "stop") break;

        cout << "Enter ROT" << endl;
        cin >> ROT;
        if (ROT == 0) break;

        for (int i = 0; i < strlen(a); i++)
        {
            cout << char(a[i] - ROT);
        }
        cout << endl;
    }
    
    return 0;
}