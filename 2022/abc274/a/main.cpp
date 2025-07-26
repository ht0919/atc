#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B; cin>>A>>B;
  double ans = round(((double)B / A) * 10000) / 10000;
  printf("%.3f\n",ans);
  return 0;
}