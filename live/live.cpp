#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char arr[10] = {65, 65, 65, 61, 63};

    cout << sizeof(arr) << endl;
    cout << sizeof(arr)/sizeof(arr[0]) << endl;

    cout << "arr" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}