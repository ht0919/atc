#include <bits/stdc++.h>
using namespace std;
int main() {
  string tbl1="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string tbl2="";
  int N,X; cin>>N>>X;
  for (int i=0; tbl2.length()<X; i++) {
    for (int j=0; j<N; j++) {
      tbl2 += tbl1[i];
    }
  }
  cout<<tbl2[X-1]<<endl;
  return 0;
}
