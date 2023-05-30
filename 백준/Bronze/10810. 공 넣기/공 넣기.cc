#include<bits/stdc++.h>
using namespace std;
unsigned int a,b,c,d,e;
int main()
{
	cin >> a >> b;
	unsigned int ar[100];
	memset(ar,0,sizeof(ar));
	for(int i = 1; i <= b; i++){
		scanf("%d %d %d",&c,&d,&e);
		for(c; c<=d; c++){
			ar[c] = e;
		}
	}
    for(int i = 1; i <= a; i++){
    	cout << ar[i] << '\n';	
	}		
}