#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int number = 42; // data

    ofstream outFile("data.bin", ios::binary);
    if (outFile.is_open())
    {
        outFile.write(reinterpret_cast<char *>(&number), sizeof(number));
        outFile.close();
    }

    ofstream outFile2("data.txt");
    if (outFile2.is_open())
    {
        outFile2 << number;
        outFile2.close();
    }

    return 0;
}