#include <iostream>

using namespace std;

int main() {
    int twoDArray[3][4] {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for (auto& i : twoDArray) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}