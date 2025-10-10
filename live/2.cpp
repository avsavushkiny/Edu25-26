#include <iostream>
using namespace std;

int main()
{
    for (;;)
    {
        cout << "выберите первое число" << endl;
        int c{};
        cin >> b;
        cout << "выберите второе число" << endl;
        int b{};
        cin >> c;
        cout << "выберите математическое действие" << endl;
        char a{};
        cin >> a;

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
            cout << "вы выбрали не математическое действие" << endl;
            break;
        }
        
    }
}
