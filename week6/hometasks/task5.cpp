#include<iostream>
using namespace std;
main ( ){
    int n ;
    cout<<"Enter number of customers  : ";
    cin>>n ;
    string name[n];
    cout<<"Enter "<<n<<" names of customers : ";
    
    for ( int i = 0 ; i < n ; i++ ){
        cin>>name[i];

    }
    char c;
    cout<<"Enter character : ";
    cin>>c;
    int count = 0 ;
    for ( int i = 0 ; i < n ; i++ ){
        if ( name[i][0] == c ){
            count++;
        }
    }
    cout<<"Total names starting with "<<c<<" are : "<<count;

}