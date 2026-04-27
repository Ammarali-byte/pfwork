#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter how many numbers you want to store ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i +1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<" In accending order/n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<endl;
    }
}