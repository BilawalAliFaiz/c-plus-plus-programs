#include <iostream>
using namespace std;

void factorial_Reference(int n, int &result) {
    result = 1;
    for(int i = 1; i <= n; i++)
        result *= i;
}

int main() {
    int num = 5, fact;
    factorial_Reference(num, fact);
    cout << "Factorial of " << num << " = " << fact << endl; // result changed
    cout<<"original number ="<<num;
    return 0;
}

