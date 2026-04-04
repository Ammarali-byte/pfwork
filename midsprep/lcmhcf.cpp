#include <iostream>
using namespace std;
main()
{
    int n1, n2;
    int lcm, hcf;
    cout << "Enter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;
    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    lcm = (n1 * n2) / hcf;
    cout << "The hcf of " << n1 << " " << n2 << " is = " << hcf<<endl;
    cout << "The LCM  of " << n1 << " " << n2 << " is = " << lcm;
}