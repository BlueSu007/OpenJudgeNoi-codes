#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

struct monkey{
	int id;
	monkey *next;
}; 

int main(){
	
	int n, m;
	cin >> n >> m;
	
	while(!(n == 0 && m == 0)){
		monkey *head = NULL, *tail = NULL;
		
		for(int i = 1; i <= n; i++){
			monkey *ptr = new monkey;
			ptr -> id = i;
			
			if(!head){
				head = ptr;
				tail = ptr;
			}
			else{
				tail -> next = ptr;
				tail = ptr;
			}
			
			tail -> next = head;
		}
		
		monkey *ptr = head, *previous = tail;
		
		while(ptr -> next != ptr){
			for(int i = 1; i < m; i++){
				previous = ptr;
				ptr = ptr -> next;
			}
			
			previous -> next = ptr -> next;
			delete ptr;
			ptr = previous -> next;
		}
		
		cout << ptr -> id << endl;
		cin >> n >> m;
	}
	
	return 0;
}
