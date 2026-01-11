#include <bits/stdc++.h>
using namespace std;
int main() {
    string X,Y,ans="No"; cin>>X>>Y;
    string os[]={"Ocelot","Serval","Lynx"};

    if (Y==os[0]) {ans="Yes";}
    else if (Y==os[1] && (X==os[1] or X==os[2])) {ans="Yes";}
    else if (Y==os[2] && X==os[2]) {ans="Yes";}
    cout<<ans<<endl;
    return 0;
}