#include <iostream>
using namespace std;

void findMinMax(int a, int b, int &minVal, int &maxVal) {
    if(a > b) {
        maxVal = a;
        minVal = b;
    } else {
        maxVal = b;
        minVal = a;
    }
}

int main() {
    int x = 12, y = 8, minNum, maxNum;
    findMinMax(x, y, minNum, maxNum);
    cout << "Min = " << minNum << ", Max = " << maxNum << endl;
    return 0;
}

