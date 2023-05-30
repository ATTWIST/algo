#include<bits/stdc++.h>
using namespace std;
unsigned int a,b,c,d;
int main()
{
	cin >> a >> b;
	unsigned int ar[100];
	memset(ar,0,sizeof(ar));
	for(int i = 1; i <= 100; i++){
	    ar[i] = i;
	}
    for(int i = 1; i <= b; i++){
    	cin >> c >> d;
    	int temp;
    	temp = ar[c];
		ar[c] = ar[d];
		ar[d] = temp;	
	}
	for(int i = 1; i <= a; i++){
	      cout << ar[i] << '\n';
	  }
			
}