#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    for (int i=a; i<=b; i++){
        int root=pow(i, 0.5);
        if (root*root==i){
            cout<<i<<" ";
        }
    }
    return 0;
}