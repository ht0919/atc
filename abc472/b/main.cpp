#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin>>N;
    int L[N];
    for (int i=0; i<N; i++) cin>>L[i];
    int min=INT_MAX;
    for (int i=1; i<N; i++) {
        int s1=0,s2=0,s3=0,j=0;
        for (; j<i; j++) s1 += L[j];
        for (; j<N; j++) s2 += L[j];
        s3 = abs(s1-s2);
        if  (min>s3) min=s3;
    }
    cout<<min<<endl;
    return 0;
}
