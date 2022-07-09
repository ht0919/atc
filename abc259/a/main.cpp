#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,M,X,T,D;
  cin>>N>>M>>X>>T>>D;
  int height=T;
  for (int i=N; i>=0; i--) {
    if (i<X)  height -= D;
    if (i==M) break;
  }
  cout<<height<<endl;
  return 0;
}