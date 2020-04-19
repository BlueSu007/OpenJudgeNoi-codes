#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#pragma GCC optimize(3, "Ofast", "inline")
using namespace std;

int main(){
	
	string s, ans;
	int maxn = 0;
	
	while(cin >> s){
		int len = s.length();
		if(s[len - 1] == '.'){
			len--;
			string ss;
			for(int i = 0; i < len; i++)
				ss += s[i];
			s = ss;
		}
			
		if(len > maxn){
			maxn = len;
			ans = s;
		}
	}
	
	cout << ans;
	
	return 0;
}
