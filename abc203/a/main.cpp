#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c,ans=0;  cin>>a>>b>>c;
  if (a == b) ans=c;
  else if (a == c) ans=b;
  else if (b == c) ans=a;
  cout<<ans<<endl;
  return 0;
}
