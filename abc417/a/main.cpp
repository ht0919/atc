#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,A,B;
    string S,ans;
    cin>>N>>A>>B>>S;
    cout<<S.substr(A,N-A-B)<<endl;    
    return 0;
}