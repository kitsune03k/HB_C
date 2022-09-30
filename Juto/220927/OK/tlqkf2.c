#include <stdio.h>
//OK
int main(void)
{
	unsigned int num = 0; //00000000	00000000	00000000	00000000
	int temp1 = 0, temp2 = 0, temp3 = 0, temp4 = 0;
	
	printf("첫번째 문자를 입력하시오: ");
	scanf(" %c", &temp1);
	printf("%x = %d\n", temp1, temp1);
	
	printf("두번째 문자를 입력하시오: ");
	scanf(" %c", &temp2);
	temp2 = temp2<<8;
	printf("%x = %d\n", temp2, temp2);

	printf("세번째 문자를 입력하시오: ");
	scanf(" %c", &temp3);
	temp3 = temp3<<16;
	printf("%x = %d\n", temp3, temp3);

	printf("네번째 문자를 입력하시오: ");
	scanf(" %c", &temp4);
	temp4 = temp4<<24;
	printf("%x = %d\n", temp4, temp4);
	
	num += temp1;
	num += temp2;
	num += temp3;
	num += temp4;
	
	printf("값 : %x\n", num);
}