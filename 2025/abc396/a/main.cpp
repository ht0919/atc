#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,A,B,cnt=0; cin >> N;
  string ans="No";
  cin>>B;
  for (int i = 1; i < N; i++) {
    cin>>A;
    if(A==B) cnt++;
    else cnt=0;
    if(cnt==2) {
      ans="Yes";
      break;
    }
    B=A;
  }
  cout<<ans<<endl;
  return 0;
}