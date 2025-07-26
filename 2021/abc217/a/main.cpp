#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,T,ans="Yes"; cin>>S>>T;
  if (S.compare(T)>0) ans="No";
  cout<<ans<<endl;
  return 0;
}