#include <iostream>
using namespace std;

int main() {
    int n = 2;
    int a, b, c;
    cin >> a >> b >> c;
    int sa = (a + n - 1) / n;
    int sb = (b + n - 1) / n;
    int sc = (c + n - 1) / n;
    cout << sa + sb + sc;
    return 0;
}