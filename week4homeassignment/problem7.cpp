#include<iostream>
using namespace std;
int main (){
    string figure ;
    float length , width ,area , radius ,base , height  ;
    float pi = 3.1428;
    cout<<" Enter the shape name : ";
    cin>>figure;
    if ( figure =="Square" ){
        cout<<"Enter length  ";
        cin >> length;
        area = length * length ;
    }
    if( figure == "Rectangle" ){
        cout<<"Enter length  ";
        cin >> length;
        cout<<"Enter width  ";
        cin >> width ;
        area = length * width ;
    }
    if ( figure == "Circle" ){
        cout<<"Enter radius  ";
        cin >> radius ;
        area = pi * (radius * radius ) ;
    }
    if ( figure == "Triangle" ){
        cout<<"Enter base : ";
        cin >> base ;
        cout<<"Enter height : ";
        cin >> height ;
        area = ( base * height )* 1/2 ;
        }
    cout<<"The area is :  "<<area;
} 