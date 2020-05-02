#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

struct node{
	int key;
	node *next;
};

int main(){
	int n, k;
	node *head = NULL, *tail = NULL;
	node *ptr = NULL, *previous = NULL;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		ptr = new node;
		cin >> ptr -> key;
		ptr -> next = NULL;
		
		if(head == NULL)
			head = ptr;
		else
			tail -> next = ptr;
			
		tail = ptr;
	}
	
	cin >> k;
	ptr = head;
	
	while(ptr){
		if(ptr -> key == k){
			if(previous == NULL){
				head = ptr -> next;
				delete ptr;
				ptr = head;
			}
			else{
				previous -> next = ptr -> next;
				delete ptr;
				ptr = previous -> next;
			}
		}
		else{
			previous = ptr;
			ptr = ptr -> next;
		}
	}
	
	ptr = head;
	while(ptr){
		cout << ptr -> key << " ";
		ptr = ptr -> next;
	}
	
	return 0;
}
