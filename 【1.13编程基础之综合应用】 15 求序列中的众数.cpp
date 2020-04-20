#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

int n, i;
string s, t;
map <string, int> map1, map2;

int main(){
	
	cin >> n;
	
	while(n--){
		cin >> s;
		if(s[0] == '-')
			i = 1;
		else
			i = 0;
		
		//消除'+'和0 
		while(s[i] == '+' || s[i] == '0')
			s.erase(i, 1);
		
		//如果只剩减号或者什么都不剩，说明这个字符串代表0
		//剩减号：-00000
		//什么都不剩：0000或+0000	
		if(s == "-" || s == "")
			s = "0";
		
		//如果还没有出现s，那么计数	
		if(!map1.count(s))
			map2[s] = 1;
			
		map1[s]++;
		 
		if(map1[s] > map1[t] || (map1[s] == map1[t] && map2[s] > map2[t]))
			t = s;
	}
	
	if(map1.size() > 2)
		cout << t;
	else
		cout << "no";
	
	return 0;
}
