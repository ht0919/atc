#include <bits/stdc++.h>
using namespace std;
int main() {
    int A,B; cin>>A>>B;
    double x = (double)(A-B)/3.0+B;
    if (ceil(x) != floor(x)) {
        printf("%.7f\n",x);
    } else {
        printf("%d\n",int(x));
    }
    return 0;
}