#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter x";
    cin>>x;
    char op;
    cout<<"enter op";
    cin>>op;
    int y;
    cout<<"enter y";
    cin>>y;
    switch (op){
        case '+':
        cout<<x+y;
        break;
        case '-':
        cout<<x-y;
        break;
        case '*':
        cout<<x*y;
        break;
        case '/':
        cout<<x/y;
        break;
        default:
        cout<<"invalid operator";

    }
    
}
    