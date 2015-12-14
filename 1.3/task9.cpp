#include <iostream>
using namespace std;

int main() {
    int r, c, n;
    cin >> r >> c >> n;
    cout << r * n + c * n / 100 << " " << (c * n) % 100;
    return 0;
}