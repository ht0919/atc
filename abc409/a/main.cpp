#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; string T,A,ans="No";
  cin>>N>>T>>A;  
  for (int i=0; i<N; i++) {
    if (T[i]=='o' && A[i]=='o') {
      ans = "Yes";
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}