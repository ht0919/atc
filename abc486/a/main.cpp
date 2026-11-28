#include <bits/stdc++.h>
using namespace std;
int main() {
    map<char,string> map;
    map['A'] = "Alpha";
    map['B'] = "Bravo";
    map['C'] = "Charlie";
    int N; cin>>N;
    string S; cin>>S;
    for(int i=0;i<N;i++){
        cout<<map[S[i]];
        if(i!=N-1) cout<<" ";
    }
    cout<<endl;
    return 0;
}