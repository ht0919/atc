#include <bits/stdc++.h>
using namespace std;
int main() {
  int A[4],ans=0;
  for (int i=0; i<4; i++) cin>>A[i];
  for (int i=0; i<4; i++) {
    for (int j=i+1; j<4; j++) {
      if (A[i]!=0 && A[i]==A[j]) {
        ans++;
        A[i]=0;
        A[j]=0;
      }
    } 
  }
  cout<<ans<<endl;
  return 0;
}
