#include <iostream>
#include <cmath>
using namespace std;
float deter(float a, float b, float c);
main()
{
    float a, b, c, solution;
    cout << "Enter the value of a  ";
    cin >> a;
    cout << "Enter the value of b  ";
    cin >> b;
    cout << "Enter the value of c  ";
    cin >> c;
    cout << deter(a , b, c );
}
float deter(float a, float b, float c)
{
    double determinant = (b * b) - (4 * a * c);
    float root1, root2, root;
    if (determinant > 0)
    {
       double root1 = (-b + sqrt(determinant)) / 2 * a;
       double root2 = (-b - sqrt(determinant)) / 2 * a;
        cout << "two real and distinct roots are : x= " << root1 << " and x= " << root2;
    }
    else if (determinant < 0)
    {
       double root1 = (-b / 2 * a + sqrt(determinant)) / 2 * a;
       double root2 = (-b / 2 * a - sqrt(determinant)) / 2 * a;
        cout << " x = " << root1 << " and x= " << root2;
    }
    else if (determinant = 0)
    {
        float root = -b / 2 * a;
        cout << "The only root is :" << root;
    }
    return root1, root2, root;
}