#include <stdio.h>

int main(void)
{
	int num;
	
	printf("N*N 배열, N 입력 : ");
	scanf("%d", &num);
	
	int limit = num;

	int arr[100][100];
	
	int value = 1; // 배열에 실질적으로 들어갈 숫자
	int Hcount = 1;
	int Vcount = 1;
	
	int y = 0;
	int x = 0;
	
	int i;
	
	while(value<=num*num){
		if(Hcount%2!=0){ // 가로이동이 홀수번째=우향일때
			for(i=0; i<limit; i++){
				arr[y][x++] = value++;
			}
			x--;
			y+=1;
		}
		else{ // 가로이동이 짝수번째=좌향일때
			for(i=0; i<limit; i++){
				arr[y][x--] = value++;
			}
			x++;
			y-=1;
		}
		Hcount++;

		--limit;
		
		if(Vcount%2!=0){ // 세로이동이 홀수번째=하향일떄
			for(i=0; i<limit; i++){
				arr[y++][x] = value++;
			}
			y--;
			x-=1;
		}
		else{ // 세로이동이 짝수번째=상향일때
			for(i=0; i<limit; i++){
				arr[y--][x] = value++;
			}
			y++;
			x+=1;
		}
		Vcount++;
	}
	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++){
			printf("%-4d", arr[i][j]);
		}
		printf("\n");
	}
}