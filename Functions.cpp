#include <iostream>

using namespace std;

int add(int, int);

int main() {
    int result = add(1, 2);
    cout << "The sum is: " << result << endl;
    return 0;
}

int add(int a, int b) {
    return a + b;
}