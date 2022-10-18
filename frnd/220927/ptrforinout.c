int main(void)
{
	int num = 1;
	int *ptrout = &num;
	printf("for문 바깥의 num은 %d\n", num);
	printf("for문 바깥의 num의 메모리주소는 %p\n", ptrout);
	int i;

	for( i = 0 ; i <= 2 ; i++ )
	{
		int num = 2;
		int *ptrin = &num;
		printf("for문 안의 num은 %d\n", num);
		printf("for문 안의 num의 메모리주소는 %p\n", ptrin);
	}
	printf("for문 바깥의 num은 %d\n", num);
	printf("for문 바깥의 num의 메모리주소는 %p\n", ptrout);
}