#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int N; cin>>N;
    if (N >= -2147483648 && N < 2147483648) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    return 0;
}