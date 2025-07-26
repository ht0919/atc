#include<bits/stdc++.h>
using namespace std;
int main(){
    long a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<(c*d<=b?-1:(a+c*d-b-1)/(c*d-b))<<endl;
    return 0;
}