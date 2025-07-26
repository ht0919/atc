#include <bits/stdc++.h>
using namespace std;
int main() {
    string T="oxxoxxoxxoxxoxx";
    string S,ans="No"; cin>>S;
    if(T.find(S)!=string::npos) ans="Yes";
    cout<<ans<<endl;
    return 0;
}