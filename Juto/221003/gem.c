#include<stdio.h>

int main() {
  double gem;
  int count=0;
  printf("세균수를 입력하시오\n");
  scanf("%lf", &gem);

  while(count++<3)
  {
    gem *= 2.0;
  }
  printf("세균수는 %f입니다.\n", gem);
  
  return 0;
	
}