#include <bits/stdc++.h>
using namespace std;
int main() {
    string A,B,ans="Easy"; cin>>A>>B;
    int a=A.size()-1;
    int b=B.size()-1;
    int l=min(a,b);
    for (int i=0; i<=l; i++) {
        if (((A[a]-0x30)+(B[b]-0x30))>=10) {
            ans="Hard";
            break;
        }
        a--,b--;
    }
    cout<<ans<<endl;
    return 0;
}