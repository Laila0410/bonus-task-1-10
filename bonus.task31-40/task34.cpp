#include <iostream>
#include <string>
using namespace std;
int main(){
    string word;
    cin>>word;
    int n=(word.length()+1)/2;
    string result=word.substr(n)+word.substr(0,n);
    cout<<result<<endl;
    return 0;
}