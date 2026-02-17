#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st side : ";
    cin>>a;
    cout<<"enter 2nd side :";
    cin>>b;
    cout<<"enter 3rd side :";
    cin>>c;
    if((a+b>c) && (a+c>b) && (b+c>a)){
        cout<<"valid triangle ";
        } 
        else{
            cout<<"not valid triangle";
        }

    
}