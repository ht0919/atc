#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  vector<pair<long,long>>x(n);
  for(int i=0;i<n;i++){
    long a,b;
    cin>>a>>b;
    x[i]={a,b};
  }
  sort(x.begin(),x.end());
  long s=k;
  for(auto[a,b]:x){
      if(s<a)break;
      s+=b;
  }
  cout<<s<<endl;
}