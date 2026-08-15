#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin>>N;
	map<string, int> dict;
    int max=0;
    for (int i = 0; i < N; i++) {
        string tmp;cin>>tmp;
        transform(tmp.cbegin(), tmp.cend(), tmp.begin(), ::toupper);
        dict[tmp] += 1;
        if (dict[tmp] > max) {
            max = dict[tmp];
        }
    }
    cout<<max<<endl;
    return 0;
}