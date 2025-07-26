#include<iostream>
using namespace std;
int N;
int cA[1<<17];
int B[1<<17];
int main() {
	cin>>N;
	for (int i=0; i<N; i++) {
		int a;cin>>a;
		cA[a]++;
	}
	for (int i=0; i<N; i++) cin>>B[i];
	long ans=0;
	for (int i=0; i<N; i++) {
		int c;cin>>c;
		ans+=cA[B[c-1]];
	}
	cout<<ans<<endl;
  return 0;
}