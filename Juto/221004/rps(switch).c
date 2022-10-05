#include <stdio.h>

int SRP(int x, int y, int z)
{
	if(y==z && x!=y){ // 갑만 다를때
		if((x==1 && y==0) || (x==2 && y==1) || (x==0 && y==2))
			return 1; // 갑만 승리
		else
			return 4; // 갑만 패배
	} 
	else if(x==z && y!=x){ // 을만 다를때
		if((x==0 && y==1) || (x==1 && y==2) || (x==2 && y==0))
			return 2; // 을만 승리
		else
			return 5; // 을만 패배
	}
	else if(x==y && z!=x){ // 병만 다를때
		if((x==0 && z==1) || (x==1 && z==2) || (x==2 && z==0))
			return 3; // 병만 승리
		else
			return 6; // 병만 패배
	}
	else // 모두 다르거나 모두 같을때
		return 7;
}

int main(void)
{
	int sel[3];
	char* name[3]={"갑", "을", "병"};

	while(1){
		int i = 0;
		int tmp;
		
		while(i<3){
			printf("%s이 선택\n1:가위, 2:바위, 3보\n(0 to exit)\n", name[i]);
			scanf("%d", &tmp);
			if(tmp==0)
				break;
			if(tmp>3 || tmp<0){
				printf("다시 선택해주세요\n");
				continue;
			}
			sel[i++] = tmp;
		}
		
		if(tmp==0)
			return 0;
		
		switch(SRP(sel[0]-1, sel[1]-1, sel[2]-1)){
			case 1: // 3가지
				printf("갑 승리\n\n");
				break;
			case 2: // 3가지
				printf("을 승리\n\n");
				break;
			case 3: // 3가지
				printf("병 승리\n\n");
				break;
			case 4: // 3가지
				printf("을, 병 승리\n\n");
				break;
			case 5: // 3가지
				printf("갑, 병 승리\n\n");
				break;
			case 6: // 3가지
				printf("갑, 을 승리\n\n");
				break;
			default: // 9가지
				printf("모두 무승부\n\n");
				break;
		}
	}

}