#include <iostream>
using namespace std;

// Inline function
inline int add(int a, int b) {
    return a + b;
}

int main() {
    cout << "Sum of 3 and 7 = " << add(3, 7) << endl;
    cout << "Sum of 10 and 20 = " << add(10, 20) << endl;
    return 0;
}

