#include <bits/stdc++.h>
using namespace std;
int main() {
  long long s,y=1;
  int x=0;
  cin>>s;
  while (y<=s) {
    y *= 2;
    x++;
  }
  x--;
  cout<<x<<endl;
  return 0;
}