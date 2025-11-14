#include<iostream>
#include<cstring>
using namespace std;


int main()
{
   string name, family;
   cout << "Enter name and family: " << endl;
   cin >> name;
   cin >> family; 
   string fullname = string(name) + " " + string(family);
   
   cout << fullname << endl;
   return 0;
}


