#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
vector<int>g[2003];
bool vis[2003];
void dfs(int x) {
	vis[x]=1;
  ans++;
	for (auto y:g[x])
    if(!vis[y])
      dfs(y);
}
int main() {
	cin>>n>>m;
	for (int i=0; i<m; i++) {
		int u,v;cin>>u>>v;
		g[u].push_back(v);
	}
	for (int i=1; i<=n; i++)
    memset(vis,0,sizeof(vis)),dfs(i);

	cout<<ans<<endl;
  return 0;
}