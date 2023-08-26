#include <iostream>

using namespace std;


void printItems(int n) {
    // here loop runs from 0 to n
    // thats why its time complexity is O(n)
    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }
}


int main() { 

    printItems(10);

}

