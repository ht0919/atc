#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,X,A,sum=0; cin>>N>>X;
  for (int i=1; i<=N; i++) {
    cin>>A;
    if (i%2==0) A--;
    sum += A;
  }
  string ans="No";
  if (sum<=X) ans="Yes";
  cout<<ans<<endl;
  return 0;
}