#include<iostream>
using namespace std ;
main ( ){
    string word;
    cout<<"Enter the word : ";
    cin>>word;
    char letter;
    cout<<"Enter the letter : ";
    cin>>letter;
    bool found = false ;
    for ( int i = 0 ; i != '\0' ; i++ ){
        if( word[i]== letter ){
            found = true ;
            break;
        }
        
    }
    if (found==true )
    {cout<<"Letter is found in word ";
    }
    else {
        cout<< "Letter not found : ";
    }
}