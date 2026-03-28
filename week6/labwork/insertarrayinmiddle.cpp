#include<iostream>
using namespace std;
main ( ){
    int n;
    cout<<"Enter the number of element for first array ( must be two ) : ";
    cin>>n;
    int arr1[n];
    cout<<"Enter two elements for the first array , one per line "<<endl;
    for ( int i = 0 ; i < 2 ; i++ ){
        cin>>arr1[i];
    }
    
    int m ;
    cout<<"Enter the number of element for second array  : ";
    cin>>m;
    int arr2[m];
    cout<<"Enter the  element for second array , one per line ;"<<endl;
    for ( int i = 0 ; i < m ;i++ ){
        cin>>arr2[i];
        
    }
    cout<<"Resulting array is : [ "<<arr1[0];
    for (int i = 0 ; i <m ; i++){
        cout<<"  "<< arr2[i];
    }
    cout<<" "<<arr1[1]<<" ]"<< endl;
    
    


}