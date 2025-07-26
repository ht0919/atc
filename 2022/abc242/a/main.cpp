#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B,C,X; cin>>A>>B>>C>>X;
  double ans;
  if (X <= A) {
    ans = 1.0;
  } else if (X > B) {
    ans = 0.0;
  } else {
    ans = (double)C / (B - A);
  }
  printf("%.12lf\n",ans);
  return 0;
}