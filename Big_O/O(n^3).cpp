#include <iostream>

using namespace std;


void printItems(int n) {
    // this loop runs from 0 to n
    for (int i = 0; i < n; i++) {
        // And this loop runs form 0 to n each time first loop runs making it n^2 times
        for (int j = 0; j < n; j++) {
            // And this loop runs each time second loop start again makeing the whole time complexity n^3
            // So time complexity for this function is n^3
            for (int k = 0; k < n; k++) {
                cout << i << j << k << endl;
            }
        }
    }
}


int main() { 

    printItems(10);

}
