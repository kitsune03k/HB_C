#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int result;
    result = (num1-num2)*(num2+num3)*(num3%num1);
    printf("%d", result);
}