#include<stdio.h>

int main(void)
{
	char c1, c2, c3, c4;
	unsigned int result = 0x00000000;

	printf("첫번째 문자를 입력하시오: ");
	scanf(" %c", &c1);

	printf("두번째 문자를 입력하시오: ");
	scanf(" %c", &c2);

	printf("세번째 문자를 입력하시오: ");
	scanf(" %c", &c3);

	printf("네번째 문자를 입력하시오: ");
	scanf(" %c", &c4);

	result = result | c1;
	result = result | (c2 << 8);
	result = result | (c3 << 16);
	result = result | (c4 << 24);

	printf("결과값: %x\n", result);

	return 0;
}