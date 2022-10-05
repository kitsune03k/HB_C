#include <stdio.h>

int preSRP(int x, int y)
{
	int num;
	
	
	switch(num){
		case 1:
			;
		case 2:
	}
}

int SRP(int x, int y, int z)
{
	if((x!=y && y!=z && z!=x) || (x==y && y==z)){
		return 7;
	}
	
	else if(y==z && x!=y){
		
	} // 1번 플레이어만 다를때

	else if(x==z && y!=x){
		
	} // 2번 플레이어만 다를때

	else if(x==y && z!=x){
		
	} // 3번 플레이어만 다를때
}

int main(void)
{
	int arr[3];
	
	while(1){
		int i = 0;
		while(i<3){
			int tmp;
			printf("%d번 플레이어 선택\n1:가위, 2:바위, 3보\n(0 to exit)\n", i+1);
			scanf("%d", &tmp);
			if(tmp == 0){
				return;
			}
			if(tmp>3 || tmp<0){
				printf("다시 선택해주세요\n");
				continue;
			}
			arr[i++] = tmp;
		}

		switch(SRP(arr[0]-1, arr[1]-1, arr[2]-1)){
			case 1: // 3가지
				printf("1번 플레이어 승리\n");
				break;
			case 2: // 3가지
				printf("2번 플레이어 승리\n");
				break;
			case 3: // 3가지
				printf("3번 플레이어 승리\n");
				break;
			case 4: // 3가지
				printf("2, 3번 플레이어 승리\n"); // 1번만 패배
				break;
			case 5: // 3가지
				printf("1, 3번 플레이어 승리\n"); // 2번만 패배
				break;
			case 6: // 3가지
				printf("1, 2번 플레이어 승리\n"); // 3번만 패배
				break;
			case 7: // 9가지
				printf("모두 무승부\n");
				break;
		}
	}

}