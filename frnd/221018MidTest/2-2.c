#include <stdio.h>

int main(void)
{
	int a[10][10];
	
	int num = 1;
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(num==10)
				num=1;
			a[i][j] = num++;
		}
	}
	
	printf("arr a[10][10] 출력\n");
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	
	int at[10][10];
		
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			at[i][j] = a[j][i];
		}
	}

	int b[10][10] = {0, };
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			for(int k=0; k<10; k++){
				b[i][j] += (
				(a[i][k])*(at[k][j])
				);
			}
		}
	}
	
	printf("arr b[10][10] 출력\n");
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			printf("%4d", b[i][j]);
		}
		printf("\n");
	}
	
	int tmparr[100] = {0,};
	int count = 0;
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			tmparr[count++]=b[i][j];
		}
	}
	
	int tmpnum;
	for(int i=0; i<100; i++){
		for(int j=0; j<100-i-1; j++){
			if(tmparr[j]>tmparr[j+1]){
				tmpnum = tmparr[j];
				tmparr[j] = tmparr[j+1];
				tmparr[j+1] = tmpnum;
			}
		}
	}

	int c[10][10] = {0,};
	count = 0;
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			c[i][j]=tmparr[count++];
		}
	}
	
	printf("arr c[10][10] 출력\n");
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			printf("%4d", c[i][j]);
		}
		printf("\n");
	}
}