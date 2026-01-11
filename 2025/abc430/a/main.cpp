#include <bits/stdc++.h>
using namespace std;
int main() {
    int A,B,C,D; cin>>A>>B>>C>>D;
    string ans = "Yes";
    if ((A > C) || (A <= C && B <= D))
        ans = "No";
    cout<<ans<< endl;
    return 0;
}