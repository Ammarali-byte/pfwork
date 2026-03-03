#include<iostream>
using namespace std;
int main (){
    char going;
    cout<<"Are you going with us (press Y for yes and N for no) ";
    cin>>going;
    if ( going == 'Y'){
        cout<<"You are going with us ";
    }
    if ( going == 'N'){
        cout<<"You are not going with us";
    }
}