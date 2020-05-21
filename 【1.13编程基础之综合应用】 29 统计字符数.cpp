#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#define mian main
#define flase false
#define ture true
using namespace std;

char c;
int a[26 + 5];

int main(){
	
	while(cin >> c){
		if(c >= 'a' && c <= 'z')
	 		a[c - 'a' + 1]++;
	}
	
	int maxn = 0, ans;
	for(int i = 1; i <= 26; i++){
		if(a[i] > maxn){
			ans = i;
			maxn = a[i];
		}
	}
	
	cout << char(ans + 'a' - 1) << " " << maxn << endl;
	
	return 0;
}
