// Question no 1
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10;
//     int *p = &x;

//     *p = *p + 5;

//     cout << x;
// }

// Question no 2
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 5;
//     int *p = &a;

//     cout << *p + a;
// }

// Question no 3
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 8;
//     int *p = &x;

//     cout << (*p)++;
//     cout << x;
// }

// Question no 4
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10;
//     int *p = &x;

//     cout << ++(*p);
// }

// Question no 5
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 5;
//     int b = 10;

//     int *p = &a;
//     p = &b;

//     cout << *p;
// }

// Question no 6
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 30, 40};

//     int *p = arr;

//     cout << *(p + 2);
// }

// Question no 7
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {5, 10, 15, 20};

//     int *p = arr;

//     cout << *p++ << " ";
//     cout << *p;
// }

// Question no 8
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {2, 4, 6, 8};

//     int *p = arr;

//     cout << *(++p);
// }

// Question no 9
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};

//     int *p = arr;

//     cout << *(p + 1) + *(p + 3);
// }


// Question no 10
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 5;

//     int *p = &x;
//     int **q = &p;

//     cout << **q;
// }

// Question no 11
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 5;

//     int *p = &x;
//     int **q = &p;

//     **q = 20;

//     cout << x;
// }

// Question no 12
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 5;
//     int y = 10;

//     int *p = &x;
//     int **q = &p;

//     p = &y;

//     cout << **q;
// }


// Question no 13
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int b = 20;

//     int *p = &a;
//     int *q = &b;

//     *p = *q;

//     cout << a << " " << b;
// }


// Question no 14
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 30};

//     int *p = arr;

//     cout << *p + *(p + 1);
// }


// Question no 15
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4};

//     int *p = arr;

//     cout << *p++ + *p++;
// }


// Question no 16
// #include <iostream>
// using namespace std;

// void fun(int *p)
// {
//     *p = *p + 10;
// }

// int main()
// {
//     int x = 5;

//     fun(&x);

//     cout << x;
// }


// Question no 17
// #include <iostream>
// using namespace std;

// void fun(int *p)
// {
//     p++;
//     cout << *p;
// }

// int main()
// {
//     int arr[] = {10, 20, 30};

//     fun(arr);
// }


// Question no 18
// #include <iostream>
// using namespace std;

// void swap(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// int main()
// {
//     int x = 10;
//     int y = 20;

//     swap(&x, &y);

//     cout << x << " " << y;
// }


// Question no 19
#include <iostream>
using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 30, 40};

//     int *p = arr + 3;

//     cout << *(p - 2);
// }


// Question no 20
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};

//     int *p = arr;

//     p += 3;

//     cout << *p;
// }


// Question no 21
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {5, 10, 15, 20};

//     int *p = arr;

//     cout << *(p++) + *(++p);
// }


// Question no 22
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 5;

//     int *p = &x;
//     int **q = &p;

//     *p = 10;
//     **q = **q + 5;

//     cout << x;
// }


// Question no 23
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10};

//     int *p = arr + 4;

//     cout << *(p--) << " ";
//     cout << *p;
// }


// Question no 24
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};

//     int *p = arr;

//     cout << *(p + 4) - *(p + 1) + *(p + 2);
// }


// Question no 25
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 30, 40};

//     int *p = arr;
//     int *q = p + 2;

//     *p = *q;

//     q--;

//     cout << *p << " " << *q;
// }


// Question no 26
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10;

//     int *p = &x;
//     int **q = &p;

//     (*p)++;
//     (**q)++;

//     cout << x;
// }


// Question no 27

// Question no 28
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {5, 10, 15, 20, 25};

//     int *p = arr + 1;
//     int *q = arr + 3;

//     cout << *p + *q;
// }


// Question no 29
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 3, 5, 7};

//     int *p = arr;

//     p = p + 2;

//     cout << *(p - 1) + *p;
// }


// Question no 30
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int *p = arr;

    cout << *(p + 2) << " ";

    p += 2;

    cout << *(p - 1) << " ";

    cout << *(p + 1);
}