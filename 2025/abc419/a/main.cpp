#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, string> m={
        {"red","SSS"},{"blue","FFF"},{"green","MMM"}
    };
    string S; cin>>S;
    auto it = m.find(S);
    if (it != m.end()) {
        cout<<it->second<<endl;
    } else {
        cout<<"Unknown"<<endl;
    }
    return 0;
}