#include <iostream>

using namespace std;

int main() {
    int num = 12;
    const int max = 28;
    do 
        cout << num << (num == max ? ". " : ", ");
    while ((num += 2) <= max);
}