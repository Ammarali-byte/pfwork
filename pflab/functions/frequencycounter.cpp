#include <iostream>
using namespace std;
int frequencycounter(int arr[], int n, int number);
main()
{
    int n, number;
    cout << "Enter array length ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number whose frequency you want to find  ";
    cin >> number;
    int frequency = frequencycounter(arr,n,number);
    cout << frequency;
}
int frequencycounter(int arr[], int n, int number)
{
    int frequency = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            frequency++;
        }
    }
    return frequency;
}