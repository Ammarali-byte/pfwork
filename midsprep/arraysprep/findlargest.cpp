#include<iostream>
using namespace std;
main ( ){
    cout<<"enter number of elements : ";
    int n ;
    cin >>n;
    int num[n];
    cout<<"Enter the numbers\n";
    for (int i = 0 ; i < n ; i++ ){
        cin>>num[i];
    }
    int largest = num[0];
    for(int i = 0 ; i < n ; i++ )
    {
       if( num[i] > num[0]){
        largest = num[i];

       }
    }
    cout<<"Largets number is "<<largest;

}