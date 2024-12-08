#include<stdio.h>
int main(){
	struct node { 
		char * name;
		int  tuoi;
		struct node * next;

	};
struct node bien;
struct node bien2;
struct node bien3;
struct node bien4;

bien.tuoi=1;
bien2.tuoi=2;
bien3.tuoi=3;
bien4.tuoi=4;

	
bien.next=&bien2;
bien2.next=&bien3;
bien3.next=&bien4;
	
printf("%d",bien.tuoi);
printf("%d",(bien.next)->tuoi);
printf("%d",(bien2.next)->tuoi);
printf("%d",(bien3.next)->tuoi);
}
