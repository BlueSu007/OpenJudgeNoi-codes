#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	
	string s;
	int len;
	int sum = 0;
	cin >> len;
	
	while(cin >> s){
		len = s.size();
		
		if(sum + len > 80)
			cout << endl, sum = 0;
			
		cout << s << " ";
		sum++;
		sum += len;
	}
	
	return 0;
} 
