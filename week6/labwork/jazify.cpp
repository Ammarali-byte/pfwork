#include<iostream>
using namespace std;
main ( ){
    int n;
    cout<<"Enter the number of chords : ";
    cin>>n 
    string chord[n];
    cout<<"Enter "<<n <<" chord , one per line : "<<endl;
    for ( int i = 0 ; i < n ; i++ ){
        cin>>chord[i];

    }
    cout<<"Result: [ ";
    for(int i = 0 ; i < n ; i++ ){
        string s = chords[i];
        if(s [s.length()-1]!='7'){
            s=s+'7';
        }
    
        cout<<s<<", ";
    }
    cout<<"]";
}