#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	
	int a, b;
	cin >> a >> b;
	
	while(a != b){
		if(a > b)
			a = a / 2;
	 	else
	 		b = b / 2;
	}
	
	cout << a << endl;
	
	return 0;
}
