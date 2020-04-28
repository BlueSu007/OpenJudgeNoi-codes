#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int n, ans;
bool isprime(int n);
bool ishuiwen(int n);

int main(){
	
	cin >> n;
	ans = 1;
	
	for(int i = 11; i <= n; i++){
		if(isprime(i) && ishuiwen(i))
			ans++;
	}
	
	cout << ans << endl;
	
	return 0;
} 

bool isprime(int n){
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0)
			return false;
	} 
	
	return true;
}

bool ishuiwen(int n){
	if(n / 100 == n % 10)
		return true;
	
	return false;
}
