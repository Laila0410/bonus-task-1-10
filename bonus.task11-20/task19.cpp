#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, c, d;
    cin>>a>>b;
    cin>>c>>d;
    if (abs(a-c) == abs(b-d)){
        cout<<"Yes";
    } else if(a==c or b==d){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
    return 0;
}