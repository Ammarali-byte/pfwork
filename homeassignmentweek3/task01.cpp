#include<iostream>
using namespace std;
int main(){
    int n,internalangles;
    cout<<"Enter the number of sides of polygon:";
    cin>>n;
    internalangles=(n-2)*180;
    cout<<"the total numbers of internal angles of a"<<n<<"-sided polygon is : "<<internalangles;
}