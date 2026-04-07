#include<iostream>
using namespace std;
main ( ){
    char word [100];
    cout<<" enter the string ";
     cin>>word;

    int i = 0;
    while(word[i] != '\0' ){
        cout<<word[i]<<" is found at position "<<i<<endl;
        i++;
    }


    
}