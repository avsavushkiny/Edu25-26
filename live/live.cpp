#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
        string s = "Hello";
        char c1 = s[0];
        char c2 = s.at(1);
        char first = s.front();
        char last = s.back();

        s.append(" World");
        s.insert(5, " beautiful");
        s.replace(6, 9, "wonderful");
        s.erase(5,11);
        s.push_back('!');
        s.pop_back();
        s.clear();

        cout << s << endl;

    return 0;
    }