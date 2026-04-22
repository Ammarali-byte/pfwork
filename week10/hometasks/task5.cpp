#include <iostream>
using namespace std;
float calculateSalary(float base, int score, int experience);
main()
{
    int base, score, years;
    cout << "Enter base , score and experience in years ";
    cin >> base;
    cin >> score;
    cin >> years;
    float salary = calculateSalary(base, score, years);
    cout <<"Final salary "<< salary;
}
float calculateSalary(float base, int score, int experience)
{
    float bonus , additional = 0;

    if (score >= 90)
    {
        bonus = base * 0.20;
    }
    else if (score < 90 && score >= 75)
    {
        bonus = base * 0.10;
    }
    else
    {
        bonus = base * 0.05;
    }
    if (experience >= 5)
    {
        additional = base * 0.05;
    }

    float salary = bonus + base + additional;
    return salary;
}