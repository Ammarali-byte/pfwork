#include<iostream>
using namespace std;
int main(){
    float vp,fp,earning;
    int kgofv,kgoff;
    cout<<"Enter vegetable price per kilogram (in coins): ";
    cin>>vp;
    cout<<"Enter fruit price per kilogram (in coin ) : ";\
    cin>>fp;
    cout<<"Enter total kilograms of vegetables : ";
    cin>>kgofv;
    cout<<"Enter total kilogram of fruits : ";
    cin>>kgoff;
    earning =(kgofv*vp) + (kgoff*fp);
    cout<<"total earning in rupees (Rps) : "<<earning;
}