#include <stdio.h>

int main(void)
{
	while(1){
		int sel[3];
		char* name[3]={"갑", "을", "병"};
		
		int i=0;
		int tmp;
		
		while(i<3){
			printf("%s이 선택\n1:가위, 2:바위, 3:보\n(0 to exit) : ", name[i]);
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
		
		if(sel[1]==sel[2] && sel[0]!=sel[1]){ // 갑만 다를때
			if((sel[0]==2 && sel[1]==1) || (sel[0]==3 && sel[1]==2) || (sel[0]==1 && sel[1]==3))
				printf("**갑 승리**\n\n");
			else
				printf("**을, 병 승리**\n\n");
		} 
		else if(sel[0]==sel[2] && sel[1]!=sel[0]){ // 을만 다를때
			if((sel[0]==1 && sel[1]==2) || (sel[0]==2 && sel[1]==3) || (sel[0]==3 && sel[1]==1))
				printf("**을 승리**\n\n");
			else
				printf("**갑, 병 승리**\n\n");
		}
		else if(sel[0]==sel[1] && sel[2]!=sel[0]){ // 병만 다를때
			if((sel[0]==1 && sel[2]==2) || (sel[0]==2 && sel[2]==3) || (sel[0]==3 && sel[2]==1))
				printf("**병 승리**\n\n");
			else
				printf("**갑, 을 승리**\n\n");
		}
		else // 모두 다르거나 모두 같을때
			printf("**모두 무승부**\n\n");
	}
}