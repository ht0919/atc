#include<bits/stdc++.h>
using namespace std;
double n,d,h,i,x,y,pos;
int main() {
	cin>>n>>d>>h;
	for (i=1;i<=n;++i) {
		cin>>x>>y;
		pos=max(pos,(h-y)/(d-x)*(-x)+y);
	}
  printf("%.10lf\n",pos);
  return 0;
}