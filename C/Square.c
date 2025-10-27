#include<stdio.h>
//

int main(){
    int Square_size;
    printf("how big is the square?:");
    scanf("%d",&Square_size);
	int a=1;
	int b=2;
	b=b+ a++;
	printf("%d \n",b);
	printf("%d \n",a);

	for(int loop=1;loop<=Square_size;++loop){
        for(int loop2=1;loop2<=Square_size;++loop2){
            printf("* ");
                if(loop2==Square_size){
                    printf("\n");
            }
        }

	}

	return 1024;
}
