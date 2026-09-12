#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    long long coin_1   = 0;
    long long coin_10  = 0;
    long long coin_100 = 0;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        int bill_count = (a + 999) / 1000;
        int change = (bill_count * 1000) - a;
        int c_100 = change / 100;
        change %= 100;
        int c_10 = change / 10;
        change %= 10;
        int c_1 = change;

        coin_100 += c_100;
        coin_10  += c_10;
        coin_1   += c_1;
    }
    cout << coin_1 << " " << coin_10 << " " << coin_100 << endl;
    return 0;
}