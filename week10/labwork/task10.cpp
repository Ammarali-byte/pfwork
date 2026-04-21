#include <iostream>
using namespace std;
string timetravel(int hours, int minutes);
main()
{
    int minutes, hours;
    cout << "Enter hours :";
    cin >> hours;
    cout << "Enter minutes : ";
    cin >> minutes;
    cout << timetravel(hours, minutes);
}
string timetravel(int hours, int minutes)
{
    minutes = minutes + 15;
    if (minutes >= 60)
    {
        minutes = minutes - 60;
        hours = hours + 1;
    }
    if (hours >= 24 ){
        hours = 0;
    }
    return to_string(hours) + ":" + to_string(minutes);
}
