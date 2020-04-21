#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#pragma GCC optimize(3, "Ofast", "inline")
using namespace std;

inline bool isprime(int n){
	for(int i = 2; i * i <= n; i++)
		if(n % i == 0)
			return false;
	
	return true;
}

int main(){
	
	int n, m;
	cin >> n >> m;
	
	for(int i = n; i <= m; i++){
		for(int j = i; j > 1; j--){
			if(i % j == 0 && isprime(j)){
				cout << j;
				break;
			}
		}
		
		if(i < m)
			cout << ',';
	}
	
	return 0;
}
