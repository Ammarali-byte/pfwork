#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter student's name : ";
    cin>>name;
    float matricmarks ;
    float fscmarks ;
    float ecatmarks ; 
    float aggregate ;
    cout<<"enter matric marks(out of 1100) : ";
    cin>> matricmarks;
    cout<<" enter intermediate  marks(out of 550) : ";
    cin>> fscmarks ;
    cout<<"enter ecat marks(out of 400) : ";
    cin>> ecatmarks ;
    aggregate = (matricmarks/1100*10)+(fscmarks/550*40) +(ecatmarks/400*50);
    cout<< "aggregate is : "<<aggregate<<" %" ; 

}