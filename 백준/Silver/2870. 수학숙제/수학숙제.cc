#include <bits/stdc++.h>
using namespace std;

int n;
string s,num;
vector<string> v;
vector<string> nums;

void sma(){
	while(1){
		if(num.size() && num.front() == '0')num.erase(num.begin());
		else break;
	}
	if(num.size() == 0) num = '0';
	
	nums.push_back(num);
	num = "";
	
}
bool cmp(string a, string b){
	if(a.size() == b.size()) return a < b;
	return a.size() < b.size();
}

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		v.push_back(s);
	}
	for(int i = 0; i < n; i++){
		for(char c : v[i]){
			if(c < 65){
				num += c;
			}
			else if(num.size())sma();
		}
		if(num.size())sma();	
	}
	sort(nums.begin(), nums.end(), cmp);
	for(string it : nums)cout << it << '\n';
	
	
}