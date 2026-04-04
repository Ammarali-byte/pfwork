#include <iostream>
using namespace std;
main()
{
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    float n;
    cout << "Enter number count ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter number ";
        int num;
        cin >> num;
        if (num < 200)
        {
            n1++;
        }
        else if (num >= 200 && num < 400)
        {
            n2++;
        }
        else if (num >= 400 && num < 600)
        {
            n3++;
        }
        else if (num >= 600 && num < 800)
        {
            n4++;
        }
        else
        {
            n5++;
        }
    }
    p1 = (n1 / n )* 100;
    p2 = (n2 / n )* 100;
    p3 = (n3 / n )* 100;
    p4 = (n4 / n )* 100;
    p5 = (n5 / n) * 100;
    cout << "p1 = " << p1<<endl;
    cout << "p2 = " << p2<<endl;
    cout << "p3 = " << p3<<endl;
    cout << "p4 = " << p4<<endl;
    cout << "p5 = " << p5<<endl;
}