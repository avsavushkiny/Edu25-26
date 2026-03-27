#include <iostream>
#include <fstream>
using namespace std;

void dangerousWrite()
{
    int* dynamicArray = new int[5]{1, 2, 3, 4, 5};

    ofstream file("dangerous.bin", ios::binary);

    if (file.is_open())
    {
        file.write(reinterpret_cast<char*>(&dynamicArray), sizeof(dynamicArray));
        file.close();
    }
    delete[] dynamicArray;
}

void safeWrite()
{
    int* dynamicArray = new int[5]{1, 2, 3, 4, 5};

    ofstream file("safe.bin", ios::binary);

    if(file.is_open())
    {
        file.write(reinterpret_cast<char*>(dynamicArray), 5 * sizeof(int));
        file.close();
    }
    delete[] dynamicArray;
}