#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin>>N;
    map<string, int> mp;
    for (int i=0; i<N; i++) {
        string s; cin>>s;
        auto itr = mp.find(s);
        if( itr != mp.end() ) {
            int t = mp[s];
            t++;
            mp[s] = t;
        } else {
            mp[s] = 1;
        }
    }
    string max_s; int max_v=0;
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        if (itr->second > max_v) {
            max_s = itr->first;
            max_v = itr->second;
        }
    }
    cout<<max_s<<endl;
    return 0;
}