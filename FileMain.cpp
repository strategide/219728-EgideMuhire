#include <iostream>

using namespace std;


int main() {        
    void updateVariable();
    
    updateVariable();       // 1
    updateVariable();       // 2
    updateVariable();       // 3

    return 0;
}

void updateVariable() {
    static int counter;
    counter = counter + 1;

    cout << "counter = " << counter << endl;
}

