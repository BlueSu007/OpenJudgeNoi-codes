#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm> 
using namespace std;

int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int t, y, mo, d, mi, s, h;

int main(){
		
	cin >> t;
	
	while(t--){
		scanf("%d:%d:%d %d.%d.%d", &h, &mi, &s, &d, &mo, &y);
		d += (y - 2000) * 365 + (y - 1997) / 4 - (y - 1901) / 100 + (y - 1601) / 400 - 1;
		
		if(mo > 2 && ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))
			d++;
		
		for(int i = 0; i < mo - 1; i++)
			d += month[i];
			
		s = (h * 3600 + 60 * mi + s) * 125 / 108;
		printf("%d:%d:%d %d.%d.%d\n", s / 10000, (s % 10000) / 100, s % 100, d % 100 + 1, (d / 100) % 10 + 1, d / 1000);
	}
	return 0;
}
