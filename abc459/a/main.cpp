#include <bits/stdc++.h>
using namespace std;
int main() {
    int X; cin>>X;
    string S = "HelloWorld";
    string D = "         ";
    for (int i=0,j=0; i<(int)(S.length()); i++) {
        if (i != X-1) {
            D[j] = S[i];
            j++;
        }
    }
    cout<<D<<endl;
    return 0;
}