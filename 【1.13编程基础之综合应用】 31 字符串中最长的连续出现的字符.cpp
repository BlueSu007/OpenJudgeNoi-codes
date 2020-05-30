#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	
	string s;
	int ans = -1, cnt = 1;
	char c = ' ';
	
	cin >> s;
	
	int len = s.size();
	for(int i = 1; i < len; i++){
		if(s[i] != s[i - 1]){
			if(cnt > ans)
				ans = cnt, c = s[i - 1];
			
			cnt = 1;
			continue;
		}
		
		cnt++;
	}
	
	if(cnt > ans)
		ans = cnt, c = s[len - 1];
	
	cout << c << " " << ans << endl;
	
	return 0;
}
