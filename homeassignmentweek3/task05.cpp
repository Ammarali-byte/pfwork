#include<iostream>
using namespace std;
int main(){
    string name ;
    float weight ,days;
    cout<<"Enter the name of the person ";
    cin>>name;
    cout<<"Enter the target weight loss in kilograms :";
    cin>>weight;
    days=weight*15;
    cout<<name<<" will need "<<days<<" to lose "<<weight<<"kg of weight by folllowing the doctor's suggestion";
    
}