#include <bits/stdc++.h>
using namespace std;
int main() {
  long long int A,B,C; cin>>A>>B;
  C = A / B;
  if (A % B !=0) C++;
  cout<<C<<endl;
  return 0;
}