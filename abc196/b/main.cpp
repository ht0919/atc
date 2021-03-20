#include <bits/stdc++.h>
using namespace std;
int main() {
  string X;cin>>X;
  int ans = X.find(".");
  if (ans == std::string::npos)
    cout<<X<<endl;
  else
    cout<<X.substr(0,ans)<<endl;
  return 0;
}