#include<iostream>
using namespace std;
int main(){
    int ch;
    cout<<"enter a number : ";
    cin>>ch;
    int ascii = (int) ch;
    if(ascii>=65 || ascii<=97){
        cout<<"upper case letter";
    }
        else{
            cout<<"not alphabet";
        }
    
}