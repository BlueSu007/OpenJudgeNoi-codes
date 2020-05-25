#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int calendar[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
	
	int year, month, day;
	//input: if use "cin", cannot output correctly
	scanf("%d-%2d-%2d", &year, &month, &day);
	
	day++;
	//Special Judgement: leap-year
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		calendar[2] = 29;
	//day limit month's exceeded -> add month
	if(day > calendar[month])
		month++, day = 1;
	//month limit year's exceeded -> add year
	if(month > 12)
		year++, month = 1;
	
	printf("%d-%02d-%02d", year, month, day);
	cout << endl;
	
	return 0;
}
