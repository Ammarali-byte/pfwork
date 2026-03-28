#include<iostream>
using namespace std;
main ( ){
    int n ;
    cout<<"Enter the number of elements in array : ";
    cin>>n ;
    int num[n];
    cout<<"Enter "<<n <<" elements of the array : "<<endl;
    for ( int i = 0 ; i < n ; i++ ){
        cin>>num[i];
    }
    bool IsfoundEven = false;
    bool IsfoundOdd = false;
    for (int i = 0 ; i < n ; i = i + 2 ){
        if (num[i]%2 == 0 ){
            IsfoundEven = true ;
        }

    }
    for ( int i = 1 ; i < n ; i = i + 2 ){
        if ( num[i]%2 != 0){
            IsfoundOdd = true;
        }
    }
    if (IsfoundEven ==true && IsfoundOdd == true ){
        cout<<"The array is special ";
    }
    else {
        cout<<"The array is not special ";
    }

}