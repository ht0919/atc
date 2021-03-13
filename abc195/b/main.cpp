#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,w;
    cin>>a>>b>>w;
    w *= 1000;
    int m=1e9,M=0;
    for (int n=1; n<=1000000; n++) {
        if (a*n<=w && w<=b*n) {
            m = min(m,n);
            M = max(M,n);
        }
    }
    if (M==0) cout<<"UNSATISFIABLE"<<endl;
    else      cout<<m<<' '<<M<<endl;
    return 0;
}
/*******
#include <iostream>
using namespace std;
int main() {
	int a,b,w,t;
	cin>>a>>b>>w;
	w*=1000;
	if(w/a==w/b && w/a*a!=w && w/b*b!=w) cout<<"UNSATISFIABLE";
	else cout<< w/b + (w%b!=0) <<" "<< w/a;
}
********/
