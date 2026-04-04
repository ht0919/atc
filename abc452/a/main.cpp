#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[5][2] = {{1, 7}, {3, 3}, {5, 5}, {7, 7}, {9, 9}};
    int M,D; cin>>M>>D;
    string ans="No";
    for(int i=0; i<5; i++) {
        if(a[i][0] == M && a[i][1] == D) {
            ans = "Yes";
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}