#include <bits/stdc++.h>
using namespace std;
int main() {
    int X,Y; cin>>X>>Y;
    string ans="No";
    if (X*9 == Y*16) {
        ans="Yes";
    }
    cout<<ans<<endl;
    return 0;
}