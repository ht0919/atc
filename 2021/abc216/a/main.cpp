#include <bits/stdc++.h>
using namespace std;
int main() {
    double X,d; cin>>d;
    int Y=int(modf(d, &X) * 10);
    string ans=to_string(int(X));
    if (Y>=7 && Y<=9) {
        ans += "+";
    } else if (Y>=3 && Y<=6) {
        ans += "";
    } else if (Y>=0 && Y<=2) {
        ans += "-";
    }
    cout<<ans<<endl;
    return 0;
}