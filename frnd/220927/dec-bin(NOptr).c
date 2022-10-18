#include <stdio.h>

int sizecheck(int x)
{
	int i, j = 1, k = 0;
	for( i = 0 ;  ; i++ ){
		if(j>x)
			break;
		j*=2;
		k++;
	}
	return k;
}

int main(void)
{
	int num;
	printf("10진수 정수 입력 : ");
	scanf("%d", &num);
	int num2 = num;
	
	int size = sizecheck(num);
	int arr[size];
	printf("%d자리 이진수로 커버 가능\n", size);
		
	int i;
	for( i = 0 ; i <= size-1 ; i++ ){
		arr[i] = num%2;
		printf("배열의 %d번째 자리는 %d\n", i+1, arr[i]);
		num/=2;
	}
	printf("10진수 %d = 2진수 ", num2);
	for( i = size-1 ; i >= 0  ; i-- ){
		printf("%d", arr[i]);
	}
	
}