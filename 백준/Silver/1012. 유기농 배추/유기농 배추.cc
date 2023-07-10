#include <bits/stdc++.h>
using namespace std;
const int maxn = 51;
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
int a[maxn][maxn],vis[maxn][maxn],y,x,n,m,bg,t,ny,nx;
void dfs(int y,int x){
		vis[y][x] = 1;
		for(int i = 0; i < 4; i++){
			ny = y + dy[i];
		    nx = x + dx[i];
			if(ny < 0 || nx < 0 || ny >= n || nx >= m)continue;
			if(a[ny][nx] == 1 && !vis[ny][nx]){
				dfs(ny,nx);
			}
		}
	
}
int main(){
	cin.tie(NULL);
    cout.tie(NULL);
	cin >> t;
	int ret[t];
    fill(&ret[0], &ret[t], 0);
	for(int l = 0; l < t; l++){
        fill(&a[0][0], &a[0][0] + 51 * 51, 0);
        fill(&vis[0][0], &vis[0][0] + 51 * 51, 0);
	cin >> n >> m >> bg;
		for(int k = 0; k < bg; k++){
			cin >> y >> x;
			a[y][x] = 1;
		}
		for(int i = 0; i < n; i++){
    		for(int j = 0; j < m; j++){
    			if(a[i][j] == 1 && !vis[i][j]){
    				ret[l]++; dfs(i, j);
				} 
			}
		}
		
}
for(auto it : ret)cout << it << '\n';
return 0;
}