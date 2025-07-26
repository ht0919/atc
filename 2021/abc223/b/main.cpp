#include <bits/stdc++.h>
using namespace std;
int main() {
    string S,A,B,T; cin>>S; A=S;B=S;T=S;
    for (int i=0; i<S.size(); i++) {
        if (A>T) A=T;
        if (B<T) B=T;
        char U=T[0];
        for (int j=0; j<S.size()-1; j++) T[j]=T[j+1];
        T[S.size()-1]=U;
    }
    cout<<A<<endl;
    cout<<B<<endl;
    return 0;
}