#include<iostream>
using namespace std;
main ( ){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int sum= 0 ;
    while (num >= 0 ){
        sum = sum + num;
        cout << "Enter the number : ";
        cin >> num;
    }
    cout<<"Sum is : "<<sum;
    

}