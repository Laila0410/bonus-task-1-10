#include <iostream>
#include <string>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    int count=1; 
    for(int i=0; i<text.size(); ++i){
        if ((text[i]==' ') and text[i+1] != ' ')
        count+=1;
    }
    cout<<count;
}