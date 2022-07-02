#include <bits/stdc++.h>
using namespace std;
int main() {
  int K; cin>>K;
  int hh = 21 + (K / 60);
  int mm = K % 60;
  printf("%02d:%02d\n",hh,mm);
  return 0;
}
