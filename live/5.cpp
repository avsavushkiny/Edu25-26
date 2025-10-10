#include <iostream>
using namespace std;

int main()
{
    for (;;)
    {
        char asd{};
        cout << "Выберите аримфетическое действие: " << endl;
        cin >> asd;
        

        switch (asd)
        {
        case '+':
            cout << "Вы выбрали сложение" << endl;
            break;
        case '-':
            cout << "Вы выбрали вычитание" << endl;
            break;
        case '*':
            cout << "Вы выбрали умножение" << endl;
            break;
        case '/':
            cout << "Вы выбрали деление" << endl;
            break;
        default:
            cout << "Вы выбрали не арифметическое действие " << endl;
            break;
        }
    }
    return 0;
}
