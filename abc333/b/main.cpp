#include <bits/stdc++.h>
using namespace std;
int main() {
  std::map<std::string, int> tbl;
  tbl["AB"]=1;
  tbl["AC"]=2;
  tbl["AD"]=2;
  tbl["AE"]=1;

  tbl["BA"]=1;
  tbl["BC"]=1;
  tbl["BD"]=2;
  tbl["BE"]=2;

  tbl["CA"]=2;
  tbl["CB"]=1;
  tbl["CD"]=1;
  tbl["CE"]=2;

  tbl["DA"]=2;
  tbl["DB"]=2;
  tbl["DC"]=1;
  tbl["DE"]=1;

  tbl["EA"]=1;
  tbl["EB"]=2;
  tbl["EC"]=2;
  tbl["ED"]=1;

  string S,T; cin>>S>>T;
  if (tbl[S]==tbl[T]) cout<<"Yes"<<endl;
  else  cout<<"No"<<endl;
  return 0;
}
