#include <bits/stdc++.h>
using namespace std;
int main() {
    int X,Y,ans; cin>>X>>Y;
    ans = X + Y;
    if (ans>12) ans -= 12;
    cout<<ans<<endl;
    return 0;
}