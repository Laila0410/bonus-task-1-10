#include <iostream>
using namespace std;
int main() {
    float a, b;
    cin >> a >> b;
    float t = a - (a / b) * b;
    cout << t;
}
