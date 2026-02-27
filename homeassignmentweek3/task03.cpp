#include<iostream>
using namespace std;
int main(){
    float initialvelocity,acceleration,time ,finalvelocity;
    cout<<"Enter Initial Velocity(m/s) :";
    cin>>initialvelocity;
    cout<<"Enter Acceleration(m/s^2) : ";
    cin>>acceleration;
    cout<<"Enter Time(s) : ";
    cin>>time;
    finalvelocity=(acceleration*time)+initialvelocity;
    cout<<"Final velocity (m/s):"<<finalvelocity;
    
}