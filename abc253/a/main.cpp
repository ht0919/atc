#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c; cin>>a>>b>>c;
  if ((b >= a && b <= c) || (b >= c && b <= a))
    cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;
  return 0;
}