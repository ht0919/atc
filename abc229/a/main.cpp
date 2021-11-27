#include <bits/stdc++.h>
using namespace std;
int main() {
    string S1,S2,ans="No"; cin>>S1>>S2;
    if (
        (S1[0]=='#' && S1[1]=='#')||(S1[0]=='#' && S2[0]=='#')||
        (S1[1]=='#' && S2[1]=='#')||(S2[0]=='#' && S2[1]=='#')
    ) ans="Yes";
    cout<<ans<<endl;
    return 0;
}