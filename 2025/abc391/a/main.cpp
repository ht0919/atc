#include <bits/stdc++.h>
using namespace std;
int main() {
  map<string, string> direction;
  direction["N"] = "S";
  direction["E"] = "W";
  direction["W"] = "E";
  direction["S"] = "N";
  direction["NE"] = "SW";
  direction["NW"] = "SE";
  direction["SE"] = "NW";
  direction["SW"] = "NE";
  string D; cin>>D;
  cout<<direction[D]<<endl;
  return 0;
}