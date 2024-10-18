#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a,b, t;
  cin>>a>>b;
  t= a*b;
  int k=  (t%109 +109)%109;
  cout<<k;
}