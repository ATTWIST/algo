//시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
#include <bits/stdc++.h>
using namespace std;
int a;
int main(){
    cin >> a;
    if(90 <= a && a <= 100){
        cout << 'A' << '\n';
    }
    else if(80 <= a && a <= 89){
        cout << 'B' << '\n';
    }
    else if(70 <= a && a <= 79){
        cout << 'C' << '\n';
    }
    else if(60 <= a && a <= 69){
        cout << 'D' << '\n';
    }
    else{
        cout << 'F' << '\n';
    }
}