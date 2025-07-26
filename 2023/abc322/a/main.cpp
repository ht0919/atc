#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; string S; cin>>N>>S;
  int p = S.find("ABC");
  if (p == -1) {
      cout<<-1<<endl;
  } else {
      cout<<p+1<<endl;
  }
  return 0;
}