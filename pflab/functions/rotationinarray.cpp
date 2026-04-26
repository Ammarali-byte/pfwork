#include<iostream>
using namespace std;
main ( ){
    int arr[] = {1,2,3,4,5,6};
    
    cout<<"{";
    for (int i = 1 ; i < 6 ; i++ ){
        cout<<" "<<arr[i];
    }
    cout<<" "<<arr[0]<<"}";
}