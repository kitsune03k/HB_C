#include <stdio.h>

int main(void)
{
	unsigned int num = 0;
	int temp = 0;
	int j = 0;
	int i;
	
	for( i = 0 ; i <= 3 ; i++ )
	// for문 안에 i와 다른 증감 원할경우
	// for문 조건안과 다른 변수 하나 더 생성해서 +=, *=, ++등 사용
	{
		printf("%d번째 문자 입력 : ", i+1);
		scanf(" %c", &temp);
		temp = temp<<j;
		printf("%x = %d\n", temp, temp);
		j+=8;
		num += temp;
		printf("부분합 : %x = %d\n", num, num);
		temp = 0;
	}
	printf("최종합 : %x\n", num);
}