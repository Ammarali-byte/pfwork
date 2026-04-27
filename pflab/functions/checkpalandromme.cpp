#include <iostream>
using namespace std;
bool checkpalndrome(int arr[], int n);
main()
{
    int n;
    cout << "Enter the length of array ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(checkpalndrome(arr, n))
    {
        cout<<"Array is palandrome ";
    }
    else
    {
        cout<<"Array is not palandrome ";
    }
    

}
bool checkpalndrome(int arr[], int n)
{
    int first = 0;
    int last = n - 1;
    while (first < last)
    {
        if (arr[first] != arr[last])
        {
            return false;
        }
        first++;
        last--;
    }
    return true;
}