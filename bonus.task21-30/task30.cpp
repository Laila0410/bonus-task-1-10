#include <iostream>
#include <string>
using namespace std;
int main(){
    string word;
    cin>>word;
    cout<<word[2]<<endl;
    cout<<word[word.length()-2]<<endl;
    cout<<word.substr(0, 5)<<endl;
    cout<<word.substr(0, word.length()-2)<<endl;
    for (int i=0; i<word.length(); i+=2){
        cout<<word[i];
    }
    cout<<endl;
    for (int i=1; i<word.length(); i+=2){
        cout<< word[i];
    }
    cout<<endl;
    for (int i=word.length()-1; i>=0; i--){
        cout<<word[i];
    }
    cout<<endl;
    for (int i=word.length()-1; i>=0; i-=2){
        cout<<word[i];
    }
    cout<<endl;
    cout<<word.length()<<endl;
    return 0;
}