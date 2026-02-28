#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M; cin>>N>>M;
    if (N%2==0 && (N/2)>=M)
        cout<<"Yes"<<endl;
    else if (N%2==1 && (N/2)>=(M-1))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}