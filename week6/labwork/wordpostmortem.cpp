#include <iostream>
using namespace std;

int main() {
    char word[100];  
    cout << "Enter a word: ";
    cin >> word; 

    int i = 0;
    while (word[i] != '\0') {  
        cout << word[i] << " is at position " << i << endl;
        i = i + 1;  
    }

    return 0;
}
