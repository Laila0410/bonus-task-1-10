#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a;
    cin>>a;
    int t;
    t= a%2;
    switch(t){
        case 1:
        cout<<a+1;
        break;
        case 0:
        cout<<a+2;
        break;
     }
}