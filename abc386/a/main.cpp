#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> A={0,0,0,0};
  for (int i=0; i<4; i++) cin>>A[i];
  sort(A.begin(), A.end());
  string ans="No";

  // 4枚が同じ
  if (A[0]==A[1]&&A[1]==A[2]&&A[2]==A[3]) {
    ans="No";
  } else {
    // 前3枚が同じ
    if (A[0]==A[1]&&A[1]==A[2]) ans="Yes";
    // 2枚と2枚が同じ
    if (A[0]==A[1]&&A[2]==A[3]) ans="Yes";
    // 後3枚が同じ
    if (A[1]==A[2]&&A[2]==A[3]) ans="Yes";
  }

  cout<<ans<<endl;
  return 0;
}