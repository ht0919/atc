#include<cstdio>
int s,t;
long long ans;
int main() {
	scanf("%d%d",&s,&t);
	for(int i=0;i<=s;i++)
    for(int j=0;j<=s;j++)
      for(int k=0;k<=s;k++)
		    if( i+j+k<=s && i*j*k<=t ) ans++;
	printf("%lld\n",ans);
  return 0;
}