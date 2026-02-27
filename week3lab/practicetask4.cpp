#include<iostream>
using namespace std;
int main(){
    float imposters,players,chance;
    cout<<"Enter imposters: ";
    cin>>imposters;
    cout<<"Enter players ";
    cin>>players;
    chance=(imposters/players)*100;
    cout<<"chance ="<<chance;
}