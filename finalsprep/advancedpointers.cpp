// #include <iostream>
// using namespace std;

// void fun(int *p)
// {
//     *p += 5;
// }

// int main()
// {
//     int x = 10;

//     fun(&x);

//     cout << x;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 5, b = 10;
//     int *p1 = &a, *p2 = &b;
//     *p1 =  *p1 + *p2;
//     *p2 = *p1 - *p2;
//     *p1 = *p1 - *p2;
//     cout << a << " " << b;
// }

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *ptr = &arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        int index = i * 3 + (2 - i);
        if (*(ptr + index) % 2 != 0)
        {
            cout << *(ptr + index) << " ";
        }
    }
}
