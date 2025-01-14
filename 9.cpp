#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    char alphabets[size];
    cout << "Enter ten alphabets: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> alphabets[i];
    }

    // Bubble Sort in descending order
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(alphabets[j] < alphabets[j + 1]) {
                // Swap alphabets[j] and alphabets[j + 1]
                char temp = alphabets[j];
                alphabets[j] = alphabets[j + 1];
                alphabets[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    for(int i = 0; i < size; i++) {
        cout << alphabets[i] << " ";
    }
    
    return 0;
}
