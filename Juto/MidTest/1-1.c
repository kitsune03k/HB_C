#include <stdio.h>

int main(void)
{
    int N, M;

    printf("몇 명?(최소 2명) : ");
    scanf("%d", &N); // N은 플레이어 수


    printf("몇 번? : ");
    scanf("%d", &M); // M은 플레이 횟수

    int i, j;
	while(i<M){
		if(i==M)
			break;
		
        int gbbcount[3] = {0,}; // [0]은 가위횟수, [1]은 바위횟수, [2]는 보횟수
        
		printf("플레이 ( %d / %d )\n", ++i, M);
		j = 0;
		int gbb[N]; // 플레이어들의 입력값 저장

		while(j<N){
			int tmp;
			printf("%d번 플레이어 선택\n1:가위, 2:바위, 3:보 : ", j+1);
			scanf("%d", &tmp);

			if(tmp>3 || tmp<1){
				printf("다시 선택해주세요\n");
				continue;
			}
			gbb[j++] = tmp;
			gbbcount[tmp-1]++;
		}
        
		if(N<3){ // 2명일때
            if(gbb[0]==gbb[1])
                printf("비겼습니다!\n");
            else{
                if((gbb[0]==1 && gbb[1]==2) || (gbb[0]==2 && gbb[1]==3) || (gbb[0]==3 && gbb[1]==1))
                    printf("2번 플레이어 승리!\n");
                else
                    printf("1번 플레이어 승리!\n");
            }
        }
        else{ // 3명 이상일때
            if(
				(gbbcount[0]==0 && gbbcount[1]!=0 && gbbcount[2]!=0) ||
				(gbbcount[1]==0 && gbbcount[0]!=0 && gbbcount[2]!=0) ||
				(gbbcount[2]==0 && gbbcount[0]!=0 && gbbcount[1]!=0)
			)
			{ // 승부가 결정난 상황 - 선택 가위,바위,보 중 두가지만 될때
				if(gbbcount[2]==0){ // 가위/바위, 바위 승
					for(j=0; j<N; j++){
						if(gbb[j] == 2)
							printf("%d ", j+1);
					}
					printf("번 플레이어 승리!\n");
				}
				else if(gbbcount[1]==0){ // 가위/보, 가위 승
					for(j=0; j<N; j++){
						if(gbb[j] == 1)
							printf("%d ", j+1);
						}
					printf("번 플레이어 승리!\n");
				}
				else{ // 바위/보, 보 승
					for(j=0; j<N; j++){
						if(gbb[j] == 3)
							printf("%d ", j+1);
					}
					printf("번 플레이어 승리!\n");
				}
			}
			else if(gbb) // 승부가 결정나지 않은 상황 - 선택 한가지만 or 세가지 전부
				printf("비겼습니다!\n");
		}
	}
}
	
