#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

bool isprime(int n){
	if(n == 1)
		return false;
		
	for(int i = 2; i * i <= n; i++)
		if(n % i == 0)
			return false;
	
	return true;
}

int main(){
	
	int n, m;
	cin >> n >> m;
	
	int cnt = 0;
	for(int i = min(n, m); i <= max(n, m); i++)
		if(isprime(i))
			cnt++;
	
	cout << cnt << endl;
	
	return 0;
}
