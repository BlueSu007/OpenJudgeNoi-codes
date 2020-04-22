#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

unsigned long long ans;
int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
	
	int year1, month1, day1;
	int year2, month2, day2;
	cin >> year1 >> month1 >> day1;
	cin >> year2 >> month2 >> day2;
	
	while(year1 != year2 || month1 != month2 || day1 != day2){
		if(year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0)
			a[2] = 29;
		else
			a[2] = 28;
			
		day1++;
		ans++;
		
		if(day1 > a[month1])
			day1 = 1, month1++;
			
		if(month1 == 13)
			month1 = 1, year1++;
	}
	
	cout << ans << endl;
	
	return 0;
}
