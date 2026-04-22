#include <iostream>
using namespace std;
void projectTimeCalculation(int hours, int days, int workers);
main()
{
    int hours, days, workers;
    cout << "Enter needed hours ";
    cin >> hours;
    cout << "Enter number of days of firm ";
    cin >> days;
    cout << "Enter number of workers ";
    cin >> workers;
    projectTimeCalculation(hours, days, workers);
}
void projectTimeCalculation(int hours, int days, int workers)
{
    float day =  days * 0.9 ;

    int totalhours = day * workers * 10;

    if (totalhours >= hours)
    {
        int hoursleft = totalhours - hours;
        cout << "YES " << hoursleft << " hours left";
    }
    else
    {
        int hoursneeded = hours - totalhours;
        cout << "NOT enough " << hoursneeded << " hours needed";
    }
}