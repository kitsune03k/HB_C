#include <stdio.h>

int main(void)
{
	char str1[] = "My String"; // 변수 형태 문자열
	char *str2 = "Your String;"; // 상수 형태 문자열
	printf("%s %s\n", str1, str2);
	
	str2 = "Our String";
	printf("%s %s\n", str1, str2);
	
	str1[0]='X';
	// 변수 형태 문자열 -> 변경 가능
	//str2[0]='X'; 
	// 상수 형태 문자열 -> 변경 불가
	printf("%s %s\n", str1, str2);
}