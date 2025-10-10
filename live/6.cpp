#include <iostream>
using namespace std;

int main()
{
    for (;;)
    {
        char a{};
        cout << "выберите символ" << endl;

        cin >> a;
        switch (a)
        {
        case '+':
            cout << "сложение" << endl;
            break;
        case '-':
            cout << "вычетание" << endl;
            break;
        case '*':
            cout << "умножение" << endl;
            break;
        case '/':
            cout << "деление" << endl;
            break;
        default:
            cout << "не то" << endl;
        }
    }
}