#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int value = 20;
    const int max = 25;

    do 
        sum += value++;
    while (value <= max);

    cout << sum << endl;
}