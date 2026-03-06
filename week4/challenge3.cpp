#include<iostream>
using namespace std ;
int main(){
    string word1 , word2 ;
    cout << "Please enter your first word  :  ";
    cin >> word1 ;
    cout << " Please enter your second word : ";
    cin >> word2 ;
    if( word1  == word2 ){
        cout << " Yes , both  words are same ";
    }
     else{
        cout << "NO , the words are different ";
     }
}