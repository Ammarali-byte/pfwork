#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int num[n];
    cout<<"Enter "<<n<<" number, : "<<endl;
    for(int i = 0 ; i < n ; i++ ){
        cin>>num[i];

    }
    int largest = num[0];
    int smallest = num[0];
    for ( int i = 0 ; i < n ; i++ ){
        if (num[i] > largest ){
            largest = num[i];
        }
    }
    for ( int i = 0 ; i < n ; i++ ){
        if (num[i] < smallest ){
            smallest = num[i];
        }
    }
    cout<<"Largest number = "<<largest<<endl;
    cout<<"Smallest number = "<<smallest;



    }
