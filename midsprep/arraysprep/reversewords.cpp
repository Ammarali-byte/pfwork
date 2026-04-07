#include<iostream>
using namespace std;
main ( ){
    char word[100];
    cout<<"Enter the word : ";
    cin>>word;
    int length = 0 ;
    while (word[length] != '\0'){
        length++;
    }
    

    for(int i = length - 1 ; i >= 0 ; i--){
        cout<<word[i]<<" ";
    }
}