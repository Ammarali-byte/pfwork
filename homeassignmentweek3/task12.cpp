#include<iostream>
using namespace std;
int main(){
    int n,w,h,number;
    cout<<"Number of square meter you can paint : ";
    cin>>n;
    cout<<"width of the single wall (in meters)";
    cin>>w;
    cout<<"height of a single wall (in meters )";
    cin>>h;
    number=n/(w*h);
    cout<<"Number of walls you can paint :"<<number;

}