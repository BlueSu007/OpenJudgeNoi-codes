#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

const char doc1[16 + 5] = "0123456789ABCDEF";
const char doc2[16 + 5] = "0123456789abcdef";

int main(){
	int n, m;
	string s;
	
	cin >> n >> s;
	
	int sum = 0;
	int len = s.size();
	int cnt = 1;
	
	for(int i = len - 1; i >= 0; i--){
		int tmp;
		if(s[i] >= '0' && s[i] <= '9')
			tmp = s[i] - 48;
		else
			if(s[i] <= 'Z')
				tmp = s[i] - 65 + 10;
			else
				tmp = s[i] - 97 + 10;
				
		sum += tmp * cnt;
		cnt *= n;
	}
	
	int a[100 + 5], p = 0;
	cin >> m;
	
	do{
		a[p++] = sum % m;
		sum /= m;
	}while(sum != 0);
	
	for(int i = p - 1; i >= 0; i--){
		if(a[i] >= 10){
			printf("%c", a[i] + 65 - 10);
			continue;
		}
		
		cout << a[i];
	}
	
	return 0;
}
