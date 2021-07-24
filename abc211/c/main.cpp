#include<cstdio>
#include<cstring>
using namespace std;
const int N=100010,M=1000000007;
char s[N],t[]=" chokudai";
int n;
long long f[9];
int main() {
	scanf("%s",s);
	n=strlen(s);
	f[0]=1;
	for (int i=0; i<n; ++i)
        for (int j=1; j<=8; ++j)
            if (s[i]==t[j]) f[j]=(f[j]+f[j-1])%M;
	printf("%lld\n",f[8]%M);
	return 0;
}