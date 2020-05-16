#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

vector <string> v;
string s, tmp;
map <string, int> m;

int main(){
	
	int n, pos, maxn = -1;
	cin >> n >> s;
	int len = s.size();
	
	for(int i = 0; i <= len - n; i++){
		for(int j = i; j < i + n; j++)
			tmp += s[j];
			
		v.push_back(tmp);
		m[tmp]++;
		
		if(maxn < m[tmp])
			maxn = m[tmp];
		
		tmp = "";
	}
	
	if(maxn <= 1){
		cout << "NO" << endl;
		exit(0);
	}
	
	cout << maxn << endl;
	
	vector <string> :: iterator it;
	for(it = v.begin(); it != v.end(); it++){
		if(m[*it] == maxn){
			cout << *it << endl;
			m[*it] = -1;
		}
	}
	
	return 0;
}
