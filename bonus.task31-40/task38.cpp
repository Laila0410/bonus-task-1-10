#include <iostream>
#include <string>
using namespace std;
int main(){
    string text;
    getline(cin, text);
    char letter='h';
    int first_ind=text.find(letter);
    int last_ind=text.rfind(letter); 
    if( first_ind !=-1 && last_ind !=-1 && first_ind!=last_ind){
        text.erase(first_ind, last_ind-first_ind+1);
    }
    cout<<text;
    return 0;
}