#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

unsigned long long ans;
int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
	
	//input
	int year1, month1, day1;
	int year2, month2, day2;
	cin >> year1 >> month1 >> day1;
	cin >> year2 >> month2 >> day2;
	
	//simulation days gone >> while not-end
	while(year1 != year2 || month1 != month2 || day1 != day2){
		//if [now] year is leap-year ->
		if(year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0)
			//count more on Febuary
			a[2] = 29;
		//else([now] year isn't leap-year) ->
		else
			//transelate into 28 days
			a[2] = 28;
			
		//day and day gone
		day1++;
		//answer plus plus
		ans++;
		
		//if days enough ->
		if(day1 > a[month1])
			//goto next month, days from 1st
			day1 = 1, month1++;
		
		//if months enough ->
		if(month1 == 13)
			//goto next year, month from 1st
			month1 = 1, year1++;
	}
	
	//output
	cout << ans << endl;
	
	return 0;
}
