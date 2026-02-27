#include<iostream>
using namespace std;
int main(){
    int n,width,height,wallspainted;
    cout<<"Enter paint area : ";
    cin>>n;
    cout<<"Enter width :";
    cin>>width;
    cout<<"Enter height : ";
    cin>>height;
    wallspainted=n/(width*height);
    cout<<"Walls painted : "<<wallspainted;

}