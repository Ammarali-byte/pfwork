#include <iostream>
using namespace std;

int sumOfAllSubarrays(int arr[], int n)
{
    int totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i] * (i + 1) * (n - i);
    }

    return totalSum;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << sumOfAllSubarrays(arr, n);

    return 0;
}