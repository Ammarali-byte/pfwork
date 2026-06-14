#include <iostream>
using namespace std;
string reversearr(string arr);
main()
{
    string word;
    cout<<"Enter the string ";
    cin>>word;
    string reversed;

    reversed = reversearr(word);
    cout<<reversed;
}
string reversearr(string arr)
{
    int i = 0;
    int j = arr.length() - 1;
    while (i < j)
    {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return arr;
}