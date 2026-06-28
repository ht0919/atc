#include <bits/stdc++.h>
using namespace std;
int main() {
    string S; cin>>S;
    int E=0,W=0;
    for(char c : S){
        if(c=='E') E++;
        else W++;
    }
    if(E>W) cout<<"East"<<endl;
    else    cout<<"West"<<endl;
    return 0;
}