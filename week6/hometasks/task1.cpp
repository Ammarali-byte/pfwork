#include<iostream>
using namespace std ;
main ( ){
    int n;
    cout<<"Enter number of elements :"<<endl;
    cin>>n;
    int num[n];

    cout<<"Enter "<<n<<" numbers ";
    for ( int i = 0 ; i < n ; i++ ){
        cin>>num[i];

    }
    int sum = 0 ;
    for ( int i = 0 ; i < n ; i++ ){
        sum = sum + num[i];
    }
    cout<<"Sum of all elements is : "<<sum;
}