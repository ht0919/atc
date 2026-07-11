#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M; cin>>N;
    string ans="Yes";
    for(int i=0;i<N;i++){
        cin>>M;
        if(M>=0){
             ans="No";
             break;
        }
    }
    cout<<ans<<endl;
    return 0;
}