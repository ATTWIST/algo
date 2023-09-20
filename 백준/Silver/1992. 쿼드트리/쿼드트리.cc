#include <bits/stdc++.h>
using namespace std;

int n;
char a[68][68];
string s;

string jk(int y, int x , int size){
	char b = a[y][x];
	string ret = "";
	if(size == 1)return string(1,a[y][x]);
	
	for(int i = y; i < y+size; i++){
		for(int j = x; j < x+size; j++){
			if(b != a[i][j]){
				ret += "(";
				ret += jk(y,x,size/2);
				ret += jk(y,x+size/2,size/2);;
				ret += jk(y+size/2,x,size/2);;
				ret += jk(y+size/2,x+size/2,size/2);;
				ret += ")";
				return ret;
			}
	}
}
return string(1,a[y][x]);
	
	
}

int main() {
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		for(int j = 0; j < n; j++){
			a[i][j] = s[j];
		}
	}
	cout << jk(0,0,n) << "\n";
}
    