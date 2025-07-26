#include <bits/stdc++.h>
using namespace std;
int main() {
    string S,ans="ist"; cin>>S;
    regex re(R"(.*er$)");
    if (regex_match(S, re)) ans="er";
    cout<<ans<<endl;
    return 0;
}