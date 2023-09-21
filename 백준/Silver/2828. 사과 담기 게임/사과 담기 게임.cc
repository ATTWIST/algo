#include <bits/stdc++.h>
using namespace std;

int n,m,j,ap,l,r,bx;

int main(){
	cin >> n >> m;
	if(n >= m){
		cin >> j;
		l = 1;
		for(int i = 0; i < j; i++){
			r = l + m -1;
			cin >> ap;
			if(ap >= l && ap <= r)continue;
			
			else{
			 if(l < ap){
			 	l += (ap - r);
			 	bx += (ap - r);	
			 }
			 else {
			 	bx += (l - ap);
			 	l = ap;
			 }
		}
	}
	cout << bx;
}
}
    