#include <iostream>
using namespace std;
void even(int arr[], int );
main()
{
    int n;
    cout << "Enter the  length of array ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter areay elements ";
        cin >> arr[i];
    }
    even(arr, n);

}
void even(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = 1;
        while (j != arr[i])
        {
            if (j != 1 && j != arr[i])
            {
                if (arr[i] % 2 != 0)
                {
                    arr[i] = 0;
                }
            }
            j++;
        }
    }
    cout<<"--- Output-----\n";
    for (int i = 0 ; i < n ; i++ )
    {
        cout<<arr[i]<<" ";
    }
}