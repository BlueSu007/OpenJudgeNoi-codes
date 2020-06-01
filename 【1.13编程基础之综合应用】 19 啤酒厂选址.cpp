#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

/*
varaible function:
(variable) n: the amount of home
(variable) sum_dis: the distance of road
(variable) sum_beer: the amount of beer they need
(variable) position: the final answer, where should we put beer-company
(variable) minn: the final answer, the mininum money
(1D-array) beer: the amount of beer that home[i] want
(1D-array) dis: the distance of this home to next home
(funciton) read_: fast read
*/

int n, beer[10000 + 5];
int dis[10000 + 5];
int sum_dis, sum_beer;
int position, minn = INT_MAX;
inline int read_();

int main(){
	
	//input
	ios::sync_with_stdio(false);
	n = read_();
	
	for(int i = 1; i <= n; i++){
		beer[i] = read_();
		dis[i] = read_();
		//calculate sum of beer and distance
		sum_beer += beer[i];
		sum_dis += dis[i];
	}
	
	for(int i = 1; i <= n; i++){
		int cost = 0;//cost of beer on road
		int sum = 0;//now home cost of beer on road
		
		for(int j = i, k = 1; k <= n; j++, k++){
			//if now haven't exceeded half of distance -> continue clock dirction
			if(sum < sum_dis / 2){
				cost += beer[j % n + 1] * sum;
			}
			//otherwise -> change to unclock dirction
			else{
				cost += beer[j % n + 1] * (sum_dis - sum);
			}
			//add money they need
			sum += dis[j % n + 1];
		}
		
		//calculate the mininum postition
		if(cost < minn){
			minn = cost;
			position = i;
		}
	}
	
	//output
	cout << position % n << ',' << minn << endl;
	
	return 0;
} 

inline int read_(){
	
	int f = 1, x = 0;
	char ch = getchar();
	
	while(!isdigit(ch)){
		if(ch == '-'){
			f = -1;
		}
		
		ch = getchar();
	}
	
	while(isdigit(ch)){
		x = x * 10 + (ch - '0');
		ch = getchar();
	}
	
	return f * x;
}
