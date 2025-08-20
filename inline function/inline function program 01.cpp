#include <iostream>
using namespace std;

// Inline function
inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 5 = " << square(5) << endl;
    cout << "Square of 9 = " << square(9) << endl;
    return 0;
}

