#include <bits/stdc++.h>
using namespace std;
int main() {
    map<int, int> m;
    int N; cin>>N;
    for (int i=1; i<=N; i++) {
        int tmp; cin>>tmp;
        m.insert(make_pair(tmp, i));
    }
    map<int, int>::reverse_iterator i = m.rbegin();
    ++i;
    cout<<i->second<<endl;
    return 0;
}