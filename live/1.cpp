#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string a; string b;
    cout << "Введите имя" << endl;
    cin >> a;
    cout << "Введите фамилию" << endl;
    cin >> b;

    string c = string(a) + " " + string(b);
    cout << c << endl;

}