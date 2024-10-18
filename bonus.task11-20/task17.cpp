#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, c, d;
    cin>>a>>b;
    cin>>c>>d;
    if (a==c or b==d){
        cout<<"Yes";
    } else {
        cout<<"No";
    }
    return 0;
}