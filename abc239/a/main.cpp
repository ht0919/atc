#include <bits/stdc++.h>
using namespace std;
int main() {
  int H; cin>>H;
  long double x = 12800000 + H;
  x *= H;
  long double n = sqrtl(x);
  printf("%.6Lf\n",n);
  return 0;
}
