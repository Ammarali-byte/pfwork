#include <iostream>
using namespace std;
main()
{

    int n;
    cout << "How many numnbers you want to enter ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> arr[i];
    }
    int first = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            first = arr[i];
        }
    }
    int second = arr[0];
    cout << "the first highest number is " << first<<endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }
    cout << "the second highest number is " << second << endl;
    int third = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > third && arr[i] < second)
        {
            third = arr[i];
        }
    }
    cout << "the third highest number is " << third << endl;
}