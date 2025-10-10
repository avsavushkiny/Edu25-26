#include <iostream>
using namespace std;

int main()
{
    for (;;)
    {
        char simvol;
        cout << "enter simvol:\n";
        cin >> simvol;

        switch (simvol)
        {
        case '+':
            cout << "Вы выбрали сложение\n";
            break;

        case '-':
            cout << "Вы выбрали вычитание\n";
            break;

        case '*':
            cout << "Вы выбрали умножение\n";
            break;

        case '/':
            cout << "Вы выбрали деление\n";
            break;

        default:
            cout << "Вы выбрали не тот символ" << endl;
        }
    }


    return 0;
}