#include <iostream>
using namespace std;

int main()
{
    for (;;)
    {
        char a{};
        int b{};
        int c{};
        cout << "выберите символ и 2 числа" << endl;

        cin >> a;
        cin >> b;
        cin >> c;
        switch (a)
        {
        case '+':
            cout << b+c << endl;

            break;
        case '-':
            cout << b-c << endl;
            break;
        case '*':
            cout << b*c << endl;
            break;
        case '/':
            cout << b/c << endl;
            break;
        default:
            cout << "не то" << endl
        }
    }
}