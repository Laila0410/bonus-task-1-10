#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, c, d;
    cin>>a>>b;
    cin>>c>>d;
    if (abs(a-c)<=1 == abs(b-d)<=1){
        cout<<"Yes";
    } 
    else{
        cout<<"No";
    }
    return 0;
}