#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin>>N;
  for (int i=0; i<N; i++) {
    long long int A,B;
    cin>>A>>B;
    A+=B;
    cout<<A<<endl;
  }
  return 0;
}