#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> vec={0,0,0,0,0};
  for (int i=0; i<5; i++) cin>>vec[i];
  string ans="No";
  for (int i=0; i<4; i++) {
    swap(vec[i], vec[i+1]);
    int j=0;
    for (; j<5; j++) {
      if (vec[j]!=j+1) break;
    }
    swap(vec[i+1], vec[i]);
    if (j==5) {
      ans="Yes";
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}