#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

const char doc1[16 + 5] = "0123456789";
int cntn;

int main(){
	
	int n = 10, m = 2;
	string s;
	
	cin >> s;
	
	int sum = 0;
	int len = s.size();
	int cnt = 1;
	
	for(int i = len - 1; i >= 0; i--){
		int tmp;
		tmp = s[i] - 48;
		sum += tmp * cnt;
		cnt *= n;
	}
	
	int a[100 + 5], p = 0;
	
	do{
		a[p++] = sum % m;
		sum /= m;
	}while(sum != 0);
	
	for(int i = p - 1; i >= 0; i--){
		cntn += a[i];
	}
	
	cout << cntn << endl;
	
	return 0;
}
