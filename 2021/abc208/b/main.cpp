#include <bits/stdc++.h>
using namespace std;
int fac[11];
int facctorial(int k){
    int sum=1;
    for (int i=1; i<=k; ++i) sum*=i;
    return sum;
}
int main() {
  for (int i=1; i<=10; i++) fac[i]=facctorial(i);
  int P,ans=0; cin>>P;
  int i=10;
  for (int i=10; i>0; i--) {
    while (P>=fac[i]) {
      P -= fac[i];
      ans++;
    }
  }
  cout<<ans<<endl;
  return 0;
}