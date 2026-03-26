#include <iostream>
using namespace std;

int main() {
    char word[100];
    cout << "Enter a word: ";
    cin >> word;

    int i = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') { 
            if (word[i] == 'z') {
                word[i] = 'a';  
            } 
            else {
                word[i] = word[i] + 1; 
            }
        }
        i = i + 1;
    }

    cout << "New word: " << word << endl;
    return 0;
}
