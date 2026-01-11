#include <bits/stdc++.h>
using namespace std;
int main() {
    string S,S1,S2; cin>>S;
    int L = S.size();
    int mid = (L+1)/2;
    S1 = S.substr(0,mid-1);
    S2 = S.substr(mid,L);
    cout<<S1<<S2<<endl;
    return 0;
}