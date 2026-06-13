#include<iostream>
using namespace std;
int sumSignificantNeighbors(int arr[], int size);
main ( )
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cout<<"Enter the element at position "<<i+1<<": ";
       cin>>arr[i];
    }
    int total = sumSignificantNeighbors(arr, n );
    cout<<total;
}
int sumSignificantNeighbors(int arr[], int size){
    int total = 0 ;
    for(int i  = 1 ; i< size-1; i++ )
    {
        if(arr[i-1] > arr[i] && arr[i+1] >arr[i] )
        {
            total = total +arr[i];
        }
    }
    return total;
}