#include <bits/stdc++.h>
using namespace std;
int n,m,j,bx,r,l,ret,ap;

int main(){
	cin >> n >> m >> j;
	l = 1;
	for(int i = 0; i < j; i++){
		cin >> ap;
		r = l + m -1;
		if(l <= ap && r >= ap)continue;
		
		else{
		if(l < ap){
			bx += ap - r;
			l += ap - r;
		}
		else{
		bx += l - ap;
		l = ap;
	}
	}
	}
	cout << bx;
}