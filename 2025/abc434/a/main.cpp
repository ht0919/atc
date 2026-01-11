#include <bits/stdc++.h>
using namespace std;
int main() {
    int W,B; cin>>W>>B;
    int i=1;
    for (; W*1000 >= B*i; i++);
    cout<<i<<endl;
    return 0;
}