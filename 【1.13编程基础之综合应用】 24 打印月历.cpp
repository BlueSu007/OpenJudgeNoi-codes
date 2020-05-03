#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
	
	int n, ans = 0, year, month, day;
	cin >> year >> month;
	
	//calculate leap-year
	day = ((year - 1900 - 1) / 4 + year -1900) % 7;
	//if [now] year is leap year
	if(year != 1900 && year % 4 == 0)
		a[2]++;
		
	//calculate amount of days
	for(int i = 1; i < month; i++)
		day += a[i];
		
	//handle days to last months days
	day = day % 7 + 1;
	//print head of days
	cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;
	
	//if have last months days ->
	if(day < 7){
		//output "tabs" 
		for(int i = 1; i <= day; i++)
			cout << "    ";
	}
	
	//print part 
	for(int i = 1; i <= a[month]; i++){
		//days
		cout << setw(3) << i << " ";
		//weeks
		if((day + i) % 7 == 0)
			cout << endl;
	}
	
	return 0;
}
