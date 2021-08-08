#include <bits/stdc++.h>
using namespace std;
int main() {
    unsigned short A,B; cin>>A>>B;
    for (unsigned short C=0; C<256; C++) {
        if ((A ^ C) == B) {
            cout<<C<<endl;
            break;
        }
    }
    return 0;
}