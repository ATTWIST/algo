#include <bits/stdc++.h>
using namespace std;;
int T,N;
int score[1004];
double avg = 0;
double sum = 0;
int cnt = 0;
double pt;

int main(){
	//fill(score[0],score[1004],0);
	//fill(avg[0],agg[1004],0);
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> N;
        for(int i = 0; i < N; i++){
        	cin >> score[i];
        	sum += score[i];
        	if(i == N-1){
        		avg = (double)(sum/N);
        		for(int i = 0; i < N; i++){
        			if(score[i] > avg){
        				++cnt;
					}
					if(i == N-1){
						pt =((double)cnt/N)*100;
						printf("%0.3lf%%\n",pt);
						sum = 0;
						cnt = 0;
					}
					
				}
			}
		}
    }      
}