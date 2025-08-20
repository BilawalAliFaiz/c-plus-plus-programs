#include <iostream>
using namespace std;

inline int multiply(int a, int b = 2) {
    return a * b;
}

int main() {
    cout << "5 * 2 = " << multiply(5) << endl;
    cout << "5 * 3 = " << multiply(5, 3) << endl;
    return 0;
}

