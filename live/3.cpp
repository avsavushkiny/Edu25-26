#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int days = 7;
    double temperatures[days];

    cout << "Введите температуру за 7 дней" << endl;
    for (int i = 0; i < days; i++)
    {
        cin >> temperatures[i];
    }
    int min = 0;
    int max = 0;
    int cold_days = 0;

    for (int i = 0; i < days; i++)
    {
        if (temperatures[i] <= 5)
        {
            cold_days++;
        }
        if (temperatures[i] > max)
        {
            max = temperatures[i];
        }
    }

    min = max;
    for (int i = 0; i < days; i++)
    {
        if (temperatures[i] < min)
        {
            min = temperatures[i];
        }
    }

    cout << "Кол-во совсем холодных дней: " << cold_days << endl;
    cout << "Максимальная температура: " << max << endl;
    cout << "Минимальная температура: " << min << endl;

    return 0;
}
