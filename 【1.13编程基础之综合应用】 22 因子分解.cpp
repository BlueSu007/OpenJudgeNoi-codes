#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
int box[1000 + 5];

bool isprime(int n){
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0)
			return false;
	}
	
	return true;
} 

int main(){
	
	cin >> n;
	int m = n, flag = 0;
	 
	if(isprime(n)){
		cout << n << endl;
		exit(0);
	}
	
	for(int i = 2; i <= n; i++){
		while(m % i == 0){
			box[i]++;
			m /= i;
		}
	}
	
	for(int i = 2; i <= n; i++){
		if(box[i] > 1){
			cout << i << "^" << box[i];
			flag = 1;
		}
		else if(box[i] == 1){
			if(flag)
				cout << '*';
			cout << i;
			flag = 1;
		}
	}
	
	return 0;
}
