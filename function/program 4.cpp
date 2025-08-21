#include <iostream>
using namespace std;

int maximum(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}

int main() {
    cout << "Maximum = " << maximum(10, 20) << endl;
    return 0;
}

