#include <stdio.h>

int main(void)
{
	int num;
	printf("n*n 행렬의 n 입력 : ");
	scanf("%d", &num);
	
	int MM;
	int a, b;

	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++)
		{
			MM = 0;
			for(int k=0; k<num; k++){
				printf("행렬A(%d,%d) 입력", i+1, k+1);
				scanf("%d", &a);
				printf("행렬B(%d,%d) 입력", k+1, j+1);
				scanf("%d", &b);	
				MM += a*b;
			}
			printf("행렬AB(%d,%d) = %d\n", i+1, j+1, MM);
		}
	}
	
	return 0;
}