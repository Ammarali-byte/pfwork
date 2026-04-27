#include <iostream>
using namespace std;
void mergearr(int arr1[], int n1, int arr2[], int n2, int mergedarray[]);
 main()
{
    int n1, n2;

    cout << "Enter the length of array 1 ";
    cin >> n1;

    int arr1[n1];
    cout << "Enter the elements of 1st array ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the length of array 2 ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter the elements of 2nd array ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    int n = n1 + n2;
    int mergedarray[n];
    mergearr(arr1, n1, arr2, n2, mergedarray);
    for (int i = 0; i < n; i++)
    {
        cout << mergedarray[i];
    }
    return 0;
}

void mergearr(int arr1[], int n1, int arr2[], int n2, int mergedarray[])
{
    for (int i = 0; i < n1; i++)
    {
        mergedarray[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        mergedarray[n1 + i] = arr2[i];
    }
}