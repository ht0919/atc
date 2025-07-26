#include <bits/stdc++.h>
using namespace std;
int main() {
    string N; cin>>N;
    for (int i=N.size()-1; i>=0; i--) {
        if (N[i]=='0') N.erase(i);
        else break;
    }
    bool flg=true;
    for (int i=0,j=N.size()-1; i<N.size()/2; i++, j--) {
        if (N[i]!=N[j]) {
            flg=false;
            break;
        }
    }
    if (flg) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}