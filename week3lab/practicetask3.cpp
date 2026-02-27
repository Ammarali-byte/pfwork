#include<iostream>
using namespace std;
int main(){
    int minutes,fps,frames;
    cout<<"Enter minutes :";
    cin>>minutes;
    cout<<"Enter fps :";
    cin>>fps;
    frames=minutes*60*fps;
    cout<<"Total Frames: "<<frames;
}