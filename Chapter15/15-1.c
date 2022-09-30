#include <stdio.h>

int printodd(int x)
{
}

int printeven(int y)
{
}


int main(void)
{
	static int arr[10];
	static int odd[10];
	static int even[10];

	int i;
	
	printf("총 10개의 숫자 입력\n");
	for( i = 0 ; i <= 9 ; i++ )
	{
		printf("%d번째 입력 : ", i+1);
		scanf("%d", &arr[i]);
		if(arr[i]%2=0)
			odd[i] = arr[i];
		else
			even[i] = arr[i];
	}
	
	printf("홀수 출력: ");
	printodd;
	printf("짝수 출력: ");
	printeven;
}