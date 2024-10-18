#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, t=0;
    cin>>a;
    while (a>0){
        t+=a%10;
        a/=10;
    }
    cout<<t;
}