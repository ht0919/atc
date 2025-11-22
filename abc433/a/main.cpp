#include <bits/stdc++.h>
using namespace std;
int main() {
    int X,Y,Z; cin>>X>>Y>>Z;
    string ans="No";
    while (X<=200){
        if (X == Y*Z) {
            ans="Yes";
            break;
        }
        X++, Y++;
    }
    cout<<ans<<endl;
    return 0;
}