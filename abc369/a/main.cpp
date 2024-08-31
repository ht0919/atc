#include <bits/stdc++.h>
using namespace std;
int main() {
    int A,B; cin>>A>>B;
    set<int> x_set;
    // Case 1: x = (A + B) / 2
    if ((A + B) % 2 == 0) {
        x_set.insert((A + B) / 2);
    }
    // Case 2: x = 2A - B
    x_set.insert(2 * A - B);
    // Case 3: x = 2B - A
    x_set.insert(2 * B - A);
    cout<<x_set.size()<< endl;
    return 0;
}