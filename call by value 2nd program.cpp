#include <iostream>
using namespace std;

void square(int n) {
    n = n * n;
    cout << "Inside function, square = " << n << endl;
}

int main() {
    int num = 5;
    square(num);
    cout << "In main, num = " << num << endl;  // Original value not changed
    return 0;
}

