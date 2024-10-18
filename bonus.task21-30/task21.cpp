#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int i=a;
    while (i<=b ){
        if (a%2==0 and a<b){
            cout<<i<<" ";
        }
        i+=2;
    }
    return 0;
}