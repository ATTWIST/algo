#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int n;


int main(){
    scanf("%d %d %d",&a,&b,&c);
    if((1 <= a && a <= 6) && (1 <= b && b <= 6) && (1 <= c && c <= 6))
    {
        if(a == b && b == c && c == a){
            n = 10000+(a*1000);
            printf("%d",n);
        }
        else if(a == b || b == c || c == a){
            if(a == b){
                n = 1000+(a*100);
                printf("%d",n);
            }
            else if(b == c){
                n = 1000+(b*100);
                printf("%d",n);
            }
            
            else if(c == a){
                n = 1000+(c*100);
                printf("%d",n);
            }
            
        }
        
        else{
            if(a > b && a > c){
                n = a*100;
                printf("%d",n);
            }
            else if(b > a && b > c){
                n = b*100;
                printf("%d",n);
            }
            else if(c > b && c > a){
                n = c*100;
                printf("%d",n);
            }
            }
            
        }
}