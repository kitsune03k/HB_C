#include <stdio.h>

int SRP(int x, int y, int z)
{
	int casearr[3][3][3]={
		{ // [0][?][?]
			{7,3,6}, // [0][0][?]
			{2,4,7}, // [0][1][?]
			{5,7,1}  // [0][2][?]
		},
		{ // [1][?][?]
			{1,5,7}, // [1][0][?]
			{6,7,3}, // [1][1][?]
			{7,2,4}  // [1][2][?]
		},
		{ // [2][?][?]
			{4,7,2}, // [2][0][?]
			{7,1,5}, // [2][1][?]
			{3,6,7}  // [2][2][?]
		}
	};
	
	return casearr[x][y][z];
}

int main(void)
{
	int arr[3];
	
	int i = 0;
	while(i<3){
		int tmp;
		printf("%d번 플레이어 선택\n1:가위, 2:바위, 3보\n", i+1);
		scanf("%d", &tmp);
		if(tmp>3 || tmp<1){
			printf("다시 선택해주세요\n");
			continue;
		}
		arr[i++] = tmp;
	}
	
	int result = SRP(arr[0]-1, arr[1]-1, arr[2]-1);
	
	switch(result){
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