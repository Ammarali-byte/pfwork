#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of chords: ";
    cin>>n;
    int num[n];
    cout<<"Enter "<<n<<" numbers"<<endl;
    for ( int i = 0 ; i < n ; i++ ){
        cin>>num[i];
    }
    int evencount = 0 ;
    for ( int i = 0 ; i < n ; i++ ){
        if ( num[i]%2 == true ){
            evencount++;
        }
    }
    cout<<"Total even numbers : "<<evencount;
}