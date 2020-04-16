#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

const int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
	
	int n;
	cin >> n;
	
	int week = n;//if week == 8 -> week = 1;
	
	//big value moni
	for(int i = 1; i <= 12; i++){
		for(int j = 1; j <= a[i]; j++){
			if(week == 8)
				week = 1;
				
			if(week == 5 && j == 13)
				cout << i << endl;
				
			week++;
		}
	}
	
	return 0;
}
