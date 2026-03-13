#include<iostream>
using namespace std ;
main(){
    int n ,count = 0;
    cout<<"Enter the number : ";
    cin>>n;
    for (int i = n ; i > 0 ; i = i/10) {
        count = count + 1;
    }
    cout<<"Total numbers of digits : "<<count;
    
}