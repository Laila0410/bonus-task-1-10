#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a ;
    cin>>a;
    int sum=0, min=0, pol=0;
    int num;
    for (int i=0; i<a; i++){
        cin>>num;
        if (num==0){
            sum+=1;
        } else if (num>0){
            pol+=1;
        }else{
            min+=1;
        }
    }
    cout<<sum<<" "<< pol<<" "<< min;
    return 0;
}