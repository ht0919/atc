#include <bits/stdc++.h>
using namespace std;
int main() {
  int M,D,y,m,d; cin>>M>>D>>y>>m>>d;
  d++;
  if (d>D) {
    d = 1;
    m++;
    if (m>M) {
      m = 1;
      y++;
    }
  }
  printf("%d %d %d\n",y,m,d);
  return 0;
}