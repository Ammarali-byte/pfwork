#include<iostream>
using namespace std;
int main(){
    int minutes,framespersecond,totalframes;
    cout<<"No of minutes:";
    cin>>minutes;
    cout<<"Frames per second :";
    cin >> framespersecond;
    totalframes=minutes * framespersecond * 60;
    cout<<"Total numbers f frames :"<<totalframes;
}