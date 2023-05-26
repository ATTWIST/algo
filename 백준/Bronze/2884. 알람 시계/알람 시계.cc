#include <bits/stdc++.h>
using namespace std;
int H,M;

int main(){
    scanf("%d %d", &H,&M);
    if((0 <= H && H <= 23) && (0 <= M && M <= 59))
    {
        M -= 45;
        if(M < 0){
            --H;
            M += 60;
            if(H == -1){
            H = 23;
            }
        printf("%d %d", H,M);
            }
        else if(M >= 0){
        printf("%d %d", H,M);
            }
            }
}