#include<iostream>
using namespace std;
int main()
{
    float a ;
    float b ;
    float c ; 
    float d ;
    cout<<"enter matric marks : ";
    cin>> a ;
    cout<<" enter fsc marks : ";
    cin>> b ;
    cout<<"enter ecat marks : ";
    cin>> c ;
    d = (a/1100*17)+(b/1200*50) +(c/400*33);
    cout<< "aggregate is : "<<d<<" %" ; 

}