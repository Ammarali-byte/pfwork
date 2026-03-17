#include<iostream>
using namespace std;
int main(){
  float n;
  int  n1 = 0 , n2 = 0 , n3 = 0 , n4 = 0 , n5 = 0 ;
  float p1 = 0 , p2 = 0, p3 = 0 ,  p4 = 0 , p5 = 0 ;


  cout<<"Enter Number count: ";
  cin>>n;

for ( int i = 1 ; i <= n ; i++ ){
    cout<<"Enter number : ";
    int num ; cin >> num ;
     
    if ( num < 200 ){
        n1++;
    }
    else if ( num <= 200 && num <= 399 ){
        n2++;
    }
    else if ( num >= 400 && num <= 599 ){
        n3++;
    }
    else if ( num >= 600 && num <= 799 ){
        n4++;
    }
    else if ( num >= 800 ){
        n5++;
    }
    
    }
    p1 = (n1 / n) * 100 ;
    p2 = (n2 / n) * 100 ;
    p3 = (n3 / n) * 100 ;
    p4 = (n4 / n) * 100 ;
    p5 = (n5 / n) * 100 ;

    cout << p1 << "%" <<endl ;
    cout << p2 << "%" <<endl ;
    cout << p3 << "%" <<endl ;
    cout << p4 << "%" <<endl ;
    cout << p5 << "%" <<endl ;
}