#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h> 
#include <string.h>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    char letter='f';   
    int first_ind=text.find_first_of(letter);
    int last_ind=text.rfind(letter);   
    if (first_ind==-1){
        cout<<-2;
    }
    if (last_ind== first_ind &&  first_ind!=-1){
        cout<< -1;
    }else if (last_ind+first_ind==2){
        cout<<last_ind<<' '<<last_ind;
    }
}