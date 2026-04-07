#include<iostream>
using namespace std;
main ( ){
    int sum = 0 ;
    float ave = 0 ;
    int n; 
    cout<<" OF How many numbers you want to find sum and average :  ";
    cin>>n;
    int num[n];
    for ( int i = 0 ; i < n ; i++){
        cout<<"Enter the number "<<i+1<<" : ";
        cin>>num[i];
    }
    for (int i = 0 ; i< n ; i++ ){
        sum = sum + num[i];
    }
    ave = sum/n;
    cout<<"The sum is : "<<sum<<endl;
    cout<<"The average is "<<ave;
}