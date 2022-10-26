#include <stdio.h>

void show(int* ptrtoshow)
{
	for(int i=0; i<10; i++){
		printf("%d ", ptrtoshow[i]);
	}
	printf("\n");
	
	for(int i=0; i<10; i++){
		printf("%d ", *(ptrtoshow+i));
	}
	printf("\n");
}

int main(void)
{
	int onedarr[10]={0,1,2,3,4,5,6,7,8,9};
	
	show(onedarr);
}