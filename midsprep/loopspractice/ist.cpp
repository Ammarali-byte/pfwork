#include <iostream>
using namespace std;
main()
{
    int num, count = 0;
    cout << "ENter the number : ";

    cin >> num;
    for (int i = num; i > 0; i = i / 10)
    {
        count = count + 1;
        num = num % 10;
    }
    cout<<"total digits  = "<<count;
}