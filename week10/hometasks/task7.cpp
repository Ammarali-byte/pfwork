#include <iostream>
using namespace std;
float calculateBalance(float balance, int years);
main()
{
    float balance, years;
    cout << "Enter balance and years ";
    cin >> balance;
    cin >> years;
    cout<<"Updated balance "<<calculateBalance(balance,  years);
}
float calculateBalance(float balance, int years)
{
    float interest, extra = 0 ;
    if (balance < 10000)
    {
        interest = balance * 0.05;
    }
    if (balance > 10000 && balance <= 50000)
    {
        interest = balance * 0.07;
    }
    if (balance > 50000)
    {
        interest = balance * 0.10;
    }
    if (years >= 3)
    {
        extra = balance * 0.02;
    }
    float total_interest = interest + extra;
    float updatedbalance = balance + total_interest;
    return updatedbalance;
}