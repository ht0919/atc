#include <bits/stdc++.h>
using namespace std;
int main() {
    string S,ans="No"; cin>>S;
    if (S.size()%5==0) {
        ans="Yes";
    }
    cout<<ans<<endl;
    return 0;
}