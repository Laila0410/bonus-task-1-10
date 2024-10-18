#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a ;
    int b;
    cin>>a;
    cin>>b;
    if (a>b){
        cout<<a;
    }else if(a==b) {
        cout<<"0";
    } else{
        cout<<b;
    }
    return 0;
}