#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; std::cin>>N;
  int A[N];
  for (int i=0; i<N; i++) std::cin>>A[i];
  int sum=0;
  for (int i=N/2; i<N; i++) sum+=A[i];
  cout<<sum<<endl;
  return 0;
}
