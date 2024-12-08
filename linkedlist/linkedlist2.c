#include<stdio.h> 
struct node {
	int data;
	struct node *next;
};


int main(){
typedef struct node node;
	


node node0;
node0.data=12;

node node1;
node0.next=&node1;
node1.data=13;

node node2;
node1.next=&node2;
node2.data=14;

node node3;
node2.next=&node3;
node3.data=15;

node node4end;
node3.next=&node4end;
node4end.data=16;
node4end.next=0;
printf("%d", node0.next->next->next->next->data) ;

}

