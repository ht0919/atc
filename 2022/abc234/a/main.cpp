#include <bits/stdc++.h>
using namespace std;
long long f(int x) {
    return pow(x,2)+(2*x)+3;
}
int main() {
    int t; cin>>t;
    long long w = f(f(f(t)+t)+f(f(t)));
    printf("%lld\n",w);
    return 0;
}