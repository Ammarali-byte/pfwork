#include <iostream>
using namespace std;
float tax(float price, char code);
main()
{
    int vehicleprice;
    char vehicletype;
    cout << "Enter vehicle type(M/E/S/V/T) ";
    cin >> vehicletype;
    cout << "Enetr vehicle price :";
    cin >> vehicleprice;
    float totalamount = tax(vehicleprice,vehicletype) + vehicleprice;
    cout<<"The final price on electric vehicle after tax is $ "<<totalamount;
}
float tax(float price, char code)
{
    float taxamount;
    if (code == 'M')
    {
        taxamount = price * 6 / 100;
    }
    else if (code == 'E')
    {
        taxamount = price * 8 / 100;
    }
    else if (code == 'S')
    {
        taxamount = price * 10 / 100;
    }
    else if (code == 'V')
    {
        taxamount = price * 12 / 100;
    }
    else if (code == 'T')
    {
        taxamount = price * 15 / 100;
    }
    return taxamount;
}
