#include<iostream>
using namespace std;
int main(){
    int wins ,draws,loses ,points;
    wins=3+points;
    draws=1+ points;
    loses =points+0 ;
    cout<<"Enter the number of wins : ";
    cin>>wins;
    cout<<"Enter the number of draws : ";
    cin>>draws;
    cout<<"Enter the numbers of loses : ";
    cin>>loses;
    points=wins*3+draws*1+loses*0;
    cout<<"Pakistan has obtained "<<points<<"in asia cup tournments";
}