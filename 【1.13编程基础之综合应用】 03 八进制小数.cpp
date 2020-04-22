#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

string a;
double b;

int main(){
	cin >> a;
	cout << a;
	
	for(int i = 2; i < a.size(); i++)
		b += ((a[i] - 48) * pow(8, 1 - i));
		
	printf(" [8] = %.99g [10]", b);
	
	return 0;
} 
