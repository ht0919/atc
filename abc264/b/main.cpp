#include <bits/stdc++.h>
using namespace std;
int main() {
  int R,C; cin>>R>>C;
  string ans = "black";
  if (
      ((R==2||R==14)&& (C>=2&&C<=14))||
      ((R==3||R==13)&& (C==2||C==14))||
      ((R==4||R==12)&&((C==2||C==14) ||(C>=4&&C<=12)))||
      ((R==5||R==11)&& (C==2||C==14  || C==4||C==12)) ||
      ((R==6||R==10)&&((C==2||C==14  || C==4||C==12)  ||(C>=6&&C<=10)))||
      ((R==7||R==9) && (C==2||C==14  || C==4||C==12   || C==6||C==10)) ||
      (R==8         && (C==2||C==14  || C==4||C==12   || C==6||C==10   ||C==8))
    ) {
    ans = "white";
  }
  cout<<ans<<endl;
  return 0;
}