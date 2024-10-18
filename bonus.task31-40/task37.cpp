#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    getline(cin, a);
    for (int i=0; i<a.length(); i++){
        if (a[i]=='1'){
            a.replace(i, 1, "one");
            i+=2;

        }
    }
    cout<<a;
    return 0;
}