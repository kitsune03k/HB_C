#include <stdio.h>

void multi_trans(int a[][5], int b[][5])
{
	int at[5][5];
		
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			at[i][j] = a[j][i];
		}
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			for(int k=0; k<5; k++){
				b[i][j] += (
				(a[i][k])*(at[k][j])
				);
			}
		}
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%4d", b[i][j]);
		}
		printf("\n");
	}
}


int main(void)
{
	int c[5][5];
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			for(int k=0; ; k++)
			c[i][j] = (k%10)+1;	
		}
	}
	int a[5][5]={
		{1,2,3,4,5},
		{6,7,8,9,1},
		{2,3,4,5,6},
		{7,8,9,1,2},
		{3,4,5,6,7}
	};
	
	int b[5][5] = {0, };
	
	multi_trans(a, b);
	
}