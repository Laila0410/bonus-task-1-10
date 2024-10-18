#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b=0;
    cin>>a;
    for (int i=1; i<=a; i++){
        if (a%i==0){
            b+=1;
        }
    }
    cout<<b;
    return 0;
}