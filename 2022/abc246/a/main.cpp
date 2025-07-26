#include <bits/stdc++.h>
using namespace std;
int main() {
  int x[3],y[3],xa,ya;
  for (int i=0; i<3; i++) cin>>x[i]>>y[i];
  if (x[0] == x[1]) xa = x[2];
  if (x[0] == x[2]) xa = x[1];
  if (x[1] == x[2]) xa = x[0];
  if (y[0] == y[1]) ya = y[2];
  if (y[0] == y[2]) ya = y[1];
  if (y[1] == y[2]) ya = y[0];
  cout<<xa<<' '<<ya<<endl;
  return 0;
}
