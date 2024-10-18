#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h> 
#include <string.h>
using namespace std;
int main(){
    string text;
    cin>>text;
    char letter='f';   
    int first_ind=text.find_first_of(letter);
    
    int last_ind=text.rfind(letter);
    if (first_ind==-1){
        exit(0);
    }
    if (last_ind== first_ind){
        cout<< first_ind;
    }else if (last_ind!= first_ind){
        cout<<first_ind<<' '<<last_ind;

    }

}