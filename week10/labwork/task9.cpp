#include <iostream>
using namespace std;

int checkoddish(int number);
main()
{
    int number;
    cout << "Enter the number ";
    cin >> number;
    checkoddish(number);
}
int checkoddish(int number)
{
    int sum = 0;
    for (int i = number; i != 0; i /= 10)
    {
       int num = i % 10;
        sum = sum + num;
    }
   if (sum %2==1 ){
    cout<<"Nummber is odd ";
   }
   else{
    cout<<"Number is even";
   }
    
}