#include<bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
  string ans="odd";
  long count_a = std::count(S.begin(), S.end(), 'o');
  if(count_a % 2 == 0) ans = "even";
  cout<<ans<<endl;
  return 0;
}