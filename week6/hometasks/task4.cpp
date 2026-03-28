#include<iostream>
using namespace std;
int main(){
    cout<<"Enter name of five students : "<<endl;
    string name[5];
    for ( int i = 0 ; i < 5 ; i++ ){
    cin>>name[i];
    }
    cout<<"Students names are : "<<endl;
    for ( int i = 0 ; i < 5 ; i++ ){
        cout<<name[i]<<endl;
    }

}