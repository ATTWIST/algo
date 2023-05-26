#include <bits/stdc++.h>
using namespace std;
int H,M,Y;
int n;

int main(){
    scanf("%d %d\n%d",&H,&M,&Y);
    if((0 <= H && H <= 23) && (0 <= M && M <= 59) && (0 <= Y && Y <= 1000))
    {
        M += Y;
        if(M >= 60){
            n = M / 60;
            for(int i = 0; i < n; i++){
                ++H;
                M -= 60;
                if(H > 23){
                    H = 0;
              }
            }
         }
    printf("%d %d", H,M);
    }
}