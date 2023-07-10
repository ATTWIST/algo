#include <bits/stdc++.h>
using namespace std;
const int maxn = 104;
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
int a[maxn][maxn],vis[maxn][maxn],y,x,n,m;
int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%1d", &a[i][j]);
		}
	}
	
	queue<pair<int,int>> q;
	vis[0][0] = 1;
	q.push({0,0});
	while(q.size()){
		tie(y,x) = q.front(); q.pop();
		for(int i = 0; i < 4; i++){
			int ny = y + dy[i];
		    int nx = x + dx[i];
			if(ny < 0 || nx < 0 || ny >= n || nx >= m || a[ny][nx] == 0)continue;
			if(vis[ny][nx])continue;
			vis[ny][nx] = vis[y][x] + 1;
			q.push({ny,nx});
		}
	}
	 printf("%d", vis[n - 1][m - 1]); 
	
}