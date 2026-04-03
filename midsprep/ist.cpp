#include<iostream>
using namespace std;
main( ){
    // char choice ;
    // cout<<"ENter your choice : ";
    // cin>>choice;
    // while (choice != 'n' && choice != 'N'){
    //     cout<<"OURS mids are starting from tuesday \n";
    //     cout << "ENter your choice : \n";
    //     cin >> choice;
    //}
    int sum = 0 ;
    for( int i = 1 ; i <= 5 ; i++ ){
        sum = sum + i ;
    }
    cout <<"sum is : "<<sum;
}