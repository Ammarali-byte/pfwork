#include<iostream>
using namespace std;
int main (){
    int cp ;
    int sp;
    cout<<"enter  cost price : ";
    cin>>cp;
    cout<<"enter selling price : ";
    cin>>sp;
    if (sp>cp){
        cout<<"profit is : ";
        cout<<sp-cp;
    }
        if (cp>sp){
            cout<<"loss is : ";
            cout<<cp-sp;
        }
        if (cp==sp){
            cout<<"no profit no loss";
        }
        
    
}