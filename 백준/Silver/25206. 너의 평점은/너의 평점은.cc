#include <bits/stdc++.h>
using namespace std;

string mj,sub;
double gd,sum,sum1;

int main() {
    for(int i = 0; i < 20; i++){
    	cin >> mj >> gd >> sub;
    	if(sub == "A+"){
		sum += gd*4.5;
		sum1 += gd;}
		if(sub == "A0"){
		sum += gd*4.0;
		sum1 += gd;}
		if(sub == "B+"){
		sum += gd*3.5;
		sum1 += gd;}
		if(sub == "B0"){
		sum += gd*3.0;
		sum1 += gd;}
		if(sub == "C+"){
		sum += gd*2.5;
		sum1 += gd;}
		if(sub == "C0"){
		sum += gd*2.0;
		sum1 += gd;}
		if(sub == "D+"){
		sum += gd*1.5;
		sum1 += gd;}
		if(sub == "D0"){
		sum += gd*1.0;
		sum1 += gd;}
		if(sub == "F"){
		sum += gd*0;
		sum1 += gd;}
	}
	cout << sum/sum1;

}