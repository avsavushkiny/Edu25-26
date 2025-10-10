#include <iostream>
#include <string>
using namespace std;

int main()
{
    char text1[18] = " World"; // c style
    char text2[] = "hello";    //0 1 2 3 4

    for (int i = 6; i < 18; i++)
    {
        text1[i] = text2[i - 6];
        cout << text1[i];
    }

    cout << endl;

    string t1 = "hello"; string t2 = "world";
    string t3 = t1 + t2;
    cout << t3 << endl;

    return 0;
}