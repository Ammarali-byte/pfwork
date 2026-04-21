#include <iostream>
using namespace std;
string numtotext(int number);
main()
{
    int number;
    cout << "Enter Number :";
    cin >> number;
    string text = numtotext(number);
    cout << text;
}
string numtotext(int number)
{
    string ones[] = {" ", " one", " two", " three", " four", " five", " six", " seven", " eight", " nine"};
    string teens[] = {" ", "eleven", "twelleve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = { " " ,"ten ", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (number <= 9)
    {
        return ones[number];
    }
    else if (number > 10 && number < 20)
    {
        return teens[number - 10];
    }
    if (number > 20 && number <= 99)
    {
        int ten = number / 10;
        int unit = number % 10;

        return tens[ten] + ones[unit];

        //return ones[number%10];
    }
}