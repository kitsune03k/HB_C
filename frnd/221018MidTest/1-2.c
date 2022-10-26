#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((int)time(NULL));

    int N;
	int M = 1000;

    printf("몇 명?(최소 2명) : ");
    scanf("%d", &N); // N은 플레이어 수
	
	int gbb[N];
	int gbbwinner[2][N];
	// win  win  win  win  win ...(횟수)
	// draw draw draw draw draw...(횟수)
	for(int j=0; j<2; j++){
		for(int k=0; k<N; k++){
			gbbwinner[j][k] = 0;	
		}
	}

	int i = 0;
	
	while(i<M){
		if(i==M)
			break;
		int j;

		printf("플레이 ( %d / %d )\n", ++i, M);
		
		int gbbcount[3] = {0,}; // [0]은 가위횟수, [1]은 바위횟수, [2]는 보횟수

		for(j=0; j<N; j++){
			gbb[j] = (rand()%3); // 0:가위, 1:바위, 2:보
			++gbbcount[gbb[j]];
		}

		
		if(N<3){ // 2명일때
            if(gbb[0]==gbb[1]){
				gbbwinner[1][0]+=1;
				gbbwinner[1][1]+=1;
			}
            else{
                if((gbb[0]==0 && gbb[1]==1) || (gbb[0]==1 && gbb[1]==2) || (gbb[0]==2 && gbb[1]==0))
                    gbbwinner[0][1]++;
                else
                    gbbwinner[0][0]++;
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
						if(gbb[j] == 1)
							gbbwinner[0][j]++;
					}
				}
				else if(gbbcount[1]==0){ // 가위/보, 가위 승
					for(j=0; j<N; j++){
						if(gbb[j] == 0)
							gbbwinner[0][j]++;
					}
				}
				else{ // 바위/보, 보 승
					for(j=0; j<N; j++){
						if(gbb[j] == 2)
							gbbwinner[0][j]++;
					}
				}
			}
			else{ // 승부가 결정나지 않은 상황 - 선택 한가지만 or 세가지 전부
				for(j=0; j<N; j++){
					gbbwinner[1][j]++;
				}
			}
		}
	}
	
	for(int j=0; j<2; j++){
		for(int k=0; k<N; k++){
			printf("%8d", gbbwinner[j][k]);
		}
		printf("\n");
	}
	
	for(int j=0; j<N; j++){
		double winrate = gbbwinner[0][j]*0.1;
		printf("플레이어 %d의 승률 : %f%%\n", j+1, winrate);
	}
}