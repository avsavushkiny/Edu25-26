#include <iostream>
#include <string>
using namespace std;

int e{};

int main()
{
    string a;
    cout << "Напишите предложение" << endl;
    cin >> a;
    e = a.size();
    cout << e << endl;

    return 0;
}
