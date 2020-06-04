#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char week[7][15] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int year = 2000, month = 1, day = 1, n;
inline int leapyear( int y );
inline int read();

int main() {
	
	ios::sync_with_stdio( false );
	n = read();
	
	for ( register int i = 1 ; i <= n ; i++ ) {
		day++;
		
		//Special Judgement: Feb.
		if ( month == 1 && day == 32 ) {
			months[2] = leapyear( year );
		}
		
		//Special Judgement: next month
		if ( day > months[month] ) {
			month++;
			day = 1;
		}
		
		//Special Judgement: next year
		if ( month == 13 ) {
			year++;
			month = 1;
		}
	}
	
	printf( "%d-%02d-%02d %s", year, month, day, week[ ( n + 5 ) % 7 ] );
	
	return 0;
}

inline int read() {
	
	int f = 1, x = 0;
	char ch = getchar();
	
	while ( !isdigit(ch) ) {
		if ( ch == '-' ) {
			f = -1;
		}
		
		ch = getchar();
	}
	
	while ( isdigit(ch) ) {
		x = x * 10 + ( ch - '0' );
		ch = getchar();
	}
	
	return f * x;
}

inline int leapyear( int y ) {
	if ( ( y % 4 == 0 && y % 100 != 0 ) || y % 400 == 0 ) {
		return 29;
	}
	
	return 28;
}
