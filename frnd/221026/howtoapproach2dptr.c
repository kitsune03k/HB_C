#include <stdio.h>

void show(int (*ptrtoshow)[5])
{
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%d ", ptrtoshow[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%d ", *(ptrtoshow[i]+j) );
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%d ", (*(ptrtoshow+i))[j] );
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%d ", (*(*(ptrtoshow+i)+j)) );
		}
		printf("\n");
	}
}

int main(void)
{
	int twodarr[5][5]={{1,2,3,4,5},{6,7,8,9,1},{2,3,4,5,6},{7,8,9,1,2},{3,4,5,6,7}};
	
	show(twodarr);
}