#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    
    vector<int> number_v = {2, 5, 87, 3, 2, 0};
    set<int> number = {2, 5, 87, 3, 4, 0};

    number_v.erase(2);
    return 0;
}

