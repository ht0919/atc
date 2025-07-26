#include <bits/stdc++.h>
using namespace std;
int main() {
  int n=0,a[10];
  for (int i=0; i<10; i++) cin>>a[i];
  n = a[0];
  for (int i=0; i<1; i++) {
    n = a[n];
  }
  cout<<a[n]<<endl;
  return 0;
}