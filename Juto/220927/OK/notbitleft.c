#include <stdio.h>
// OK
int notbitleft(int x)
{
	static int j = 1;
	x *= j;
	j *= 256;
	return x; // return문은 항상 함수의 끝! return하면 함수 종료됨.
}

int main(void)
{
	unsigned int num = 0;
	int i, temp = 0;
	for( i = 0 ; i <= 3 ; i++ )
	{
		printf("%d번째 문자 입력 : ", i+1);
		scanf(" %c", &temp);
		num += notbitleft(temp);
		printf("지금까지 합계 %x = %d\n", num, num);
	}
	printf("결과값 %x\n", num);
}