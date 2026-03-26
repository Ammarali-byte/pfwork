#include <iostream>
using namespace std;

int main() {
    char word[100];
    cout << "Enter a word: ";
    cin >> word;

    int length = 0;
    while (word[length] != '\0') {
        length = length + 1;
    }

    for (int i = length - 1; i >= 0; i = i - 1) {
        cout << word[i];
    }
    cout << endl;

    return 0;
}
