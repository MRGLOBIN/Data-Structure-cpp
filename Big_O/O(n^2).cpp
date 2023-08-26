#include <iostream>

using namespace std;


void printItems(int n) {
    // this loop runs from 0 to n
    for (int i = 0; i < n; i++) {
        // And this loop runs form 0 to n each time first loop runs making it n^2 times
        // thus causing the function time complexity to be O(n^2)
        for (int j = 0; j < n; j++) {
            cout << i << j << endl;
        }
    }
}


int main() { 

    printItems(10);

} 