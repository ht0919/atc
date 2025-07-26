#include <bits/stdc++.h>
using namespace std;
int main() {
  int x,y,z; cin>>x>>y;
  if (x==y) {
    z=x;
  } else {
    if (x+y==1) z=2;
    else if (x+y==2) z=1;
    else z=0; //(x+y==3)
  }
  cout<<z<<endl;
  return 0;
}