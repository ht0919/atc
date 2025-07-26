#include <bits/stdc++.h>
using namespace std;
int main() {
    string S[4]; cin>>S[0]>>S[1]>>S[2]>>S[3];
    int flg=0;
    for (int i=0; i<4; i++) {
        if      (S[i]=="H")  flg |= 0b0001;
        else if (S[i]=="2B") flg |= 0b0010;
        else if (S[i]=="3B") flg |= 0b0100;
        else if (S[i]=="HR") flg |= 0b1000;
    }
    string ans="No";
    if (flg==0b1111) ans="Yes";
    cout<<ans<<endl;
    return 0;
}