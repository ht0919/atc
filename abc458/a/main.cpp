#include <bits/stdc++.h>
using namespace std;
int main() {
      string S; int N; cin>>S>>N;
      char D[N];
      strncpy(&D[0], &S[N], S.length() - N*2);
      D[S.length() - N*2] = '\0';
      cout<<D<<endl;
      return 0;
}