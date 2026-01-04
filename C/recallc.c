#include<stdio.h>
#include<math.h>
#include<string.h> 
int main(){
	//FILE POINTER 
	//
	char strings[1024];
	FILE * fp = fopen("/home/l2tatime/TLH/INFO/underwood","r"); 
	


	
	int check=fseek(fp,102,0);
	fgets(strings,1024,fp); 
	printf("%d::%s",check,strings); 
	

	fseek(fp,0,0);		
	for(int l0=0;l0<13;++l0){
	fgets(strings,1024,fp);
	printf("%s",strings); 
	
	}	
	printf("  \nSTRUCT\n  ");
	//STRUCT 	
	struct bien{

		char *name ; 
		int intarr[8];
		double pi; 
	}strarray[100]; 
		
	strarray[0].name="Phan Huy Hoang"; 
	strarray[0].intarr[0]=1024; 
	strarray[0].intarr[1]=1024*2; 
	strarray[0].pi=M_PI; 
	printf("%d:%d:%.15f" , strarray[0].intarr[0],strarray[0].intarr[1],strarray[0].pi); 
	printf("\n %s \n",strarray[0].name); 
	
}

