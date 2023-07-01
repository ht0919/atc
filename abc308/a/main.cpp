#include <bits/stdc++.h>
using namespace std;
int main() {
  bool f=true;
  int S,T=-1;
  for (int i=0; i<8; i++) {
    cin>>S;
    if ((T>S) || (S<100||S>675) || (S%25!=0)) {
      f=false;
      break;
    }
    T=S;
  }
  if (f) cout<<"Yes"<<endl;
  else   cout<<"No" <<endl;
  return 0;
}