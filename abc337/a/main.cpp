#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin>>N;
  int x,y,X=0,Y=0;
  for (int i=0; i<N; i++) {
    cin>>x>>y;
    X+=x;
    Y+=y;
  }
  if (X==Y) {
    cout<<"Draw"<<endl;
  } else {
    if (X>Y) cout<<"Takahashi"<<endl;
    else cout<<"Aoki"<<endl;
  }
  return 0;
}
