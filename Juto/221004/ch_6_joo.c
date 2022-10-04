#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define KAX 3
#define BAX 3//1번이 이기는 경우의수 : 
#define GAX 3
extern int MOD;
int main()
{
	srand((unsigned)time(NULL));
	int i,j = 0;
	 //1>3 3>2,,, 1번이 이기는 상황 2번이 이기는 상황 3번이 이기는 상황 1,2번이 이기는 상황 13번이 이기는 상황 23번이 이기는 상황

	for(i = 1; i >0 ; i++)
	{
		int k = 1 + rand() % KAX;
		int b = 1 + rand() % BAX;
		int g = 1 + rand() % GAX;
		printf("1번 사용자 선택(1: 가위  2 : 바위  3 : 보)"); printf("%d\n", k);
		printf("2번 사용자 선택(1: 가위  2 : 바위  3 : 보)"); printf("%d\n", b);
		printf("3번 사용자 선택(1: 가위  2 : 바위  3 : 보)"); printf("%d\n", g);
		if (k != b && b != g && k != g) printf("비겼습니다.\n");
		else if (k == b && k == g)  printf("비겼습니다.\n");//27가지중 9가지 해결

		else if (k == 3 && b == g && b == 2) printf("1번승리\n");//27가지중 10가지 해결
		else if (k == 2 && b == g && b == 1)  printf("1번승리\n");
		else if (k == 1 && b == g && b == 3)  printf("1번승리\n");

		else if (b == 3 && k == g && k == 2)  printf("2번승리\n");
		else if (b == 2 && k == g && k == 1)  printf("2번승리\n");
		else if (b == 1 && k == g && k == 3)  printf("2번승리\n");

		else if (g == 3 && k == b && k == 2)  printf("3번승리\n");
		else if (g == 2 && k == b && k == 1)  printf("3번승리\n");
		else if (g == 1 && k == b && k == 3)  printf("3번승리\n");//18가지 해결 9개 남음 

		else if (g == k && g == 1 && b == 3)  printf("1번 3번승리\n");
		else if (g == k && g == 2 && b == 1)  printf("1번 3번승리\n");
		else if (g == k && g == 3 && b == 2)  printf("1번 3번승리\n");

		else if (k == b && k == 1 && g == 3)  printf("1번 2번승리\n");
		else if (k == b && k == 2 && g == 1)  printf("1번 2번승리\n");
		else if (k == b && k == 3 && g == 2)  printf("1번 2번승리\n");

		else printf("2번 3번승리\n");

	}
	
	
	
	return 0;
}

