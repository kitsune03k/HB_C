#include <stdio.h>


int the_num(int i)
{
  	int count = 0;
  
  	if(i == 0)
	    return count;
	else
		count = (i % 10)+ the_num(i / 10);
  	return count;
}

int main()
{
    int x;
    printf("정수를 입력하시오\n");
    scanf("%d", &x);
    printf("자릿수의 합: %d", the_num(x));
    return 0; 
}