#include <bits/stdc++.h>
using namespace std;
int main() {
    string S; cin >> S;
    string A="";
    for(int i=0; i<S.size(); i++){
        A += S[i];
        if(i < S.size()-1) A+="o";
    }
    cout << A << endl;
    return 0;
}