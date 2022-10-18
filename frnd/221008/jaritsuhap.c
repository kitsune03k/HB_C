#include <stdio.h>

int jaritsuhap(int x)
{
	static int sum = 0;

	sum += (x % 10);
	
	if(x==0)
		return sum;

	return jaritsuhap(x/10);
}

int main()
{
	int num;
	
  	printf("정수를 입력하시오\n");
  	scanf("%d", &num);
	
  	printf("자릿수의 합은 : %d입니다\n", jaritsuhap(num));
  	
	return 0;
}