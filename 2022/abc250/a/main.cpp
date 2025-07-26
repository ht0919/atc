#include<bits/stdc++.h>
using namespace std;
int main() {
    int H,W,R,C,ans=0;
    cin>>H>>W>>R>>C;
    if (C!=1) ans++;
    if (C!=W) ans++;
    if (R!=1) ans++;
    if (R!=H) ans++;
    cout<<ans<<endl;
    return 0;
}