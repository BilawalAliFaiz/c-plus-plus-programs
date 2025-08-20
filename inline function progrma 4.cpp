#include <iostream>
using namespace std;

inline float cube(float x) {
    return x * x * x;
}

int main() {
    cout << "Cube of 3.0 = " << cube(3.0) << endl;
    cout << "Cube of 4.5 = " << cube(4.5) << endl;
    return 0;
}

