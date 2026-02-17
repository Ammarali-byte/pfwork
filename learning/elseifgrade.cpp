#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter grade : ";
    cin>>x;
    if (x>91)  cout<<"excellent";
    else if(x>71) cout<<"very good ";
    else if (x>51) cout<<"can do better";
    else {
        cout<<"average";
    }
}