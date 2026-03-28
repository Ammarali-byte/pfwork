#include<iostream>
using namespace std;
int main(){
    float changeof[4];
    cout<<"Enter num of quarters: ";
    cin>>changeof[0];
    cout<<"Enter num of dimes: ";
    cin>>changeof[1];
    cout<<"Enter num of nickels: ";
    cin>>changeof[2];
    cout<<"Enter num of pennies: ";
    cin>>changeof[3];
    cout<<endl;
    float total = changeof[0] * 0.25 + changeof[1] * 0.10 + changeof[2] * 0.05 + changeof[3] * 0.01;
    float totalamount=0;
    cout<<"Enter the total amount due: ";
    cin>>totalamount;
    if(totalamount<=total){
        cout<<"Can you pay the amount? : YES";
    }
    else{
        cout<<"Can you pay the amount? : NO";
    }
    
    

}
    