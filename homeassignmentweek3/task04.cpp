#include<iostream>
using namespace std;
int main(){
    float icount,pcount,impositer;
    cout<<"Enter impositer count :";
    cin>>icount;
    cout<<"Enter player count : ";
    cin>>pcount;
    impositer=(icount/pcount)*100;
    cout<<"Chance of being an impositer : "<<impositer<<"%";
    
}