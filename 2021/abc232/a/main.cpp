#include <bits/stdc++.h>
using namespace std;
int main() {
    string S; cin>>S;
    int n1 = (char)S[0]-0x30;
    int n2 = (char)S[2]-0x30;
    cout<<(n1*n2)<<endl;
    return 0;
}