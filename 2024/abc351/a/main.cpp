#include <bits/stdc++.h>
using namespace std;
int main() {
  int A=0,B=0,tmp;
  for (int i=0; i<9; i++) {
    cin>>tmp; A+=tmp;
  }
  for (int i=0; i<8; i++) {
    cin>>tmp; B+=tmp;
  }
  cout<<(A-B+1)<<endl;
  return 0;
}