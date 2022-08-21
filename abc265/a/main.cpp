#include <bits/stdc++.h>
using namespace std;
int main() {
  int X,Y,N,ans; cin>>X>>Y>>N;
  ans =  (N / 3) * Y;
  ans += (N % 3) * X;
  if (ans > N * X) ans = N * X;
  cout<<ans<<endl;
  return 0;
}
