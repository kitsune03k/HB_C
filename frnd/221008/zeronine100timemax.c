#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((int)time(NULL));
	
	int arr[10] = {0,};

	for(int i=0; i<100; i++){
		++arr[rand()%10];
	}
	
	int maxnumber = 0;
	int maxtimes = arr[0];
	
	for(int i=0; i<10; i++){
		if(arr[i]>maxtimes){
			maxnumber = i;
			maxtimes=arr[i];
		}
	}
	
	printf("렌덤선택 횟수는\n");
	for(int i=0; i<10; i++){
		printf("| %d : %d번 |", i, arr[i]);
	}
	printf("\n입니다\n");
	
	printf("%d이(가) %d번으로 가장 많이 뽑혔습니다\n", maxnumber, maxtimes);
}