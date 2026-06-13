#include<iostream>
using namespace std;

// pointer declaration etc
// main ( )
// {
//     int a = 10 ;
//     int *p = &a ;
//     cout << "Value of a is : " << a << endl;
//     cout << "address of a is : " << &a << endl;
//     cout << "Value of a is : " << *p << endl;
//     cout << "adress of a is : " << p << endl;
// }

// pass by reference 
// main ( )
// {
//     int a = 10 ;
//     int *p = &a;
//     *p = 40;
//     cout<<a;

// }


// Generic pointer 
// main ( )
// {
//     int a = 10 ;
//     void *p = &a;
//     cout<<(int*)p;
// }


// pointers and arrrays
main ( )
{
    int arr[5]={1,2,3,4,5};
    int *p = arr;
    int *s = &arr[5];
    cout<<p<<endl;
    cout<<s;

}