#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;cin>>a>>b>>c;
    string ans="No";
    if (a==b || a==c || b==c) ans="Yes";
    cout<<ans<<endl; 
    return 0;
}