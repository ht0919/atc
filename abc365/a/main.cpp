#include <bits/stdc++.h>
using namespace std;
int main() {
  int year,ans=365; cin>>year;
  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
    ans++;
  }
  cout<<ans<<endl;
  return 0;
}