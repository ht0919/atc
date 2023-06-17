#include <bits/stdc++.h>
using namespace std;
int main() {
  char A;
  unsigned long long int ans = 0;
  for (int i=0; i<64; i++) {
    cin>>A;
    if (A=='1') ans += roundl(pow(2,i));
  }
  printf("%llu\n",ans);
  return 0;
}