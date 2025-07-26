#include <bits/stdc++.h>
using namespace std;
int main() {
    string S,T,ans="No"; cin>>S>>T;
    for (int i=0; i<27; i++) {
        if (S==T) {
            ans="Yes";
            break;
        }
        for (int j=0; j<T.size(); j++) {
            if (T[j]=='z') T[j]='`';
            T[j]++;
        } 
    }
    cout<<ans<<endl;
    return 0;
}