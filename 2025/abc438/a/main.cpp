#include <bits/stdc++.h>
using namespace std;
int main() {
    int D,F; cin>>D>>F;
    int ans = 7 - ((D - F) % 7);
    cout<<ans<<endl;
    return 0;
}