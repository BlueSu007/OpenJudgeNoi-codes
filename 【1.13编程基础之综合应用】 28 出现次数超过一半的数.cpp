#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int n, tmp, a[1000 + 5];

int main(){
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> tmp;
		a[tmp + 51]++;
	}
	
	for(int i = 1; i <= 110; i++){
		if(a[i] > n / 2.0){
			cout << i - 51 << endl;
			exit(0);
		}
	}
	
	cout << "no" << endl;
	
	return 0;
}
