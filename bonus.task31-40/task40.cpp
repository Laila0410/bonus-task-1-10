#include <iostream>
#include <string>
using namespace std;
int main(){
    string text;
    getline(cin, text);
    char letter='h';
    int first_ind=text.find(letter);
    int last_ind=text.rfind(letter);
    if (first_ind!=-1 && last_ind!=-1 && first_ind!=last_ind){
        string between = text.substr(first_ind+1, last_ind -first_ind-1);
        string result= text.substr(0, first_ind+1) +between+ between + text.substr(last_ind);
        cout<<result;
    }
    return 0;
}