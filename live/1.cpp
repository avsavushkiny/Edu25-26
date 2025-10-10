#include <iostream>
using namespace std;

int main()
{
    for (;;)
    {
        char a;
        cout << "Введите символ" << endl;
        cin >> a;

        switch (a)
        {
        case '+':
            cout << " Вы выбрали символ +" << endl;
            break;
        case '-':
            cout << " Вы выбрали символ -" << endl;
            break;
        case '*':
            cout << " Вы выбрали символ *" << endl;
            break;
        case '/':
            cout << " Вы выбрали символ /" << endl;
            break;
        default:
            cout << "Нет такого" << endl;
        }
    }
    return 0;
}