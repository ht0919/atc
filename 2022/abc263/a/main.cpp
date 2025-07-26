#include <bits/stdc++.h>
using namespace std;
int main() {
  std::map<int, int> mp;
  for (int i=0; i<5; i++) {
    int n; cin>>n;
    auto itr = mp.find(n);
    if(itr != mp.end() ) {
      mp[n] = mp[n] + 1;
    } else {
      mp[n] = 1;
    }
  }
  string ans;
  if (mp.size() == 2) {
    auto itr = mp.begin();
    int a = itr->second; ++itr;
    int b = itr->second;
    if ((a==2 && b==3)||(a==3 && b==2)) {
      ans="Yes";
    } else {
      ans="No";
    }
  } else {
      ans="No";
  }
  cout<<ans<<endl;
  return 0;
}