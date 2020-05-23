#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int n, a[30000 + 5];
int dp[30000 + 5];

int main(){
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		dp[i] = 1;
	}
	
	int ans = -1;
	dp[1] = 1;
	
	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= i - 1; j++){
			if(a[j] >= a[i])
				dp[i] = max(dp[i], dp[j] + 1);
				ans = max(ans, dp[i]);
		} 
	} 
	
	cout << ans << endl;
	
	return 0;
}
