#include<iostream>
using namespace std;
main ( ){
    int n ;
    cout<<"Enter the number of product : ";
    cin>>n;
    string productName[n];
    float price[n];
    float total[n];
    int  quantity[n];
    for(int i=0;i<n;i++){
        cout<<"Enter name of product "<<i+1<<" : ";
        cin>>productName[i];
        cout<<"Enter price of "<<productName[i]<<" : $";
        cin>>price[i];
        cout<<"Enter quantity of "<<productName[i]<<" : ";
        cin>>quantity[i];
        cout<<endl;
        total[i]=price[i]*quantity[i];
    }
    cout<<endl;
     cout<<endl;
    cout<<"Product Inventory Report"<<endl;
    cout<<"------------------------"<<endl;
    for(int i=0;i<n;i++){
        cout<<productName[i]<<": $"<<price[i]<<", "<<quantity[i]<<" in stock, Total value: $"<<total[i]<<endl;
    }
}