#include<iostream>
using namespace std;
main ( ){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    if ( n <= 0 ){
        cout<<"Invalid input , Number of elements must be greater than 0 ";
        return 0 ;

    }
    int arr[n];
    cout<<"Enter "<<n<<"  number of arrays ,one per line: ";
    for ( int i = 0 ; i < n ; i++ ){
    cin>>arr[i];
    }
    cout<<"numbers in reverse order : ";
    for (int i = n - 1 ;  i >= 0 ; i--  ){
        cout<<arr[i]<<"  ";

    }
    cout<<endl;
    return 0 ;
}