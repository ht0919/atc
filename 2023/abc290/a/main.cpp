#include <bits/stdc++.h>
using namespace std;
int main() {
      int M,N,ans=0; cin>>N>>M;
      int A[N]; for (int i=0; i<N; i++) cin>>A[i];
      int B[N]; for (int i=0; i<M; i++) cin>>B[i];
      for (int i=0; i<M; i++) ans += A[B[i]-1];
      cout<<ans<<endl;
      return 0;
}