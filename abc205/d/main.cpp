#include<iostream>
using namespace std;
int N,Q;
long A[1<<17];
int main() {
	cin>>N>>Q;
	for (int i=1; i<=N; i++) cin>>A[i];
	A[N+1]=2e18;
	for(; Q-- ;) {
		long K; cin>>K;
		int l=0,r=N+2;
		while (r-l>1) {
			int mid=(l+r)/2;
			if (A[mid]-mid<K) l=mid;
			else r=mid;
		}
		K -= A[l]-l;
		cout<<A[l]+K<<endl;
	}
  return 0;
}