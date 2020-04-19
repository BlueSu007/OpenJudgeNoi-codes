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

bool istrueprime(int n){
	int m = 0;
	while(n >= 1){
		m = m * 10 + n % 10;
		n /= 10;
	}
	
	if(isprime(m))
		return true;
	else
		return false;
}

int a[100000 + 5];

int main(){
	
	int n, m;
	cin >> n >> m;
	
	int cnt = 0, tmp = 0;
	for(int i = n; i <= m; i++)
		if(isprime(i) && istrueprime(i))
			tmp++, a[tmp] = i;
	
	for(int i = 1; i <= tmp; i++){
		cout << a[i];
		if(i != tmp)
			cout << ",";
	}
	
	if(a[1] == 0)
		cout << "No" << endl;
	
	return 0;
}
