#include <stdio.h>

void matrixmul(int* ptra, int *ptrb, int *ptrc)
{
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<3; k++){
				*(ptrc+3*i+j) += *(ptra+3*i+k) * *(ptrb+3*k+j);
			}
		}
	}
}

void show(int (*ptrtoshow)[3])
{
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%4d", ptrtoshow[i][j]);
		}
		printf("\n");
	}
}
int main(void)
{
	int a[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	int b[3][3] = {
		{1,4,7},
		{2,5,8},
		{3,6,9}
	};
	
	int c[3][3] = {0,};
	
	matrixmul(&a[0][0], &b[0][0], &c[0][0]);

	show(c);
}