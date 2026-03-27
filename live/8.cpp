#include <iostream>
#include <set>
#include <sstream>
using namespace std;

int main() 
{
    set <int> scores;
    scores.insert(85);
    scores.insert(92);
    scores.insert(78);
    scores.insert(92);
    scores.insert(85);
    scores.insert(67);
    scores.insert(95);

    for (int score : scores)
    {
        cout << score << endl;
    }
    

    cout << "Самый низкий балл: " << *scores.begin() << endl;
    cout << "Самый высокий балл: " << *scores.rbegin() << endl;

    return 0;
}