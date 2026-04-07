#include<iostream>
using namespace std;
main ( ){
    cout<<"How many numbers you want to  enter the arrays : ";
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cout<<"Enter number "<<i + 1 <<" : ";
        cin>>arr[i];

    }
    for (int i = 0 ; i < n ; i++ ){
        cout<<arr[i]<<" ";
    }

}