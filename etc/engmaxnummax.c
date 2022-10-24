#include<stdio.h>

int main(void)
{
	int N;
	int engtmp=1, numtmp=1, engmax=0, nummax=0; // engtmp, numtmp는 1보다 작을수 없음
	
	printf("몇글자 이내(최소 3)?\n");
	scanf("%d", &N);
	char input[N];
	getchar();
	
	printf("%d자 이내로 영어소문자+숫자입력\n", N);
	fgets(input, N+1, stdin);
	
	for(int i=0; i<N; i++){
		if((input[i]>='0' && input[i]<='9') && (input[i+1]>='a' && input[i+1]<='z')){ // 숫자, 영어(시작)
			engmax = engtmp;
		}
		else if((input[i]>='a' && input[i]<='z') && (input[i+1]>='a' && input[i+1]<='z')){ // 영어, 영어
			engtmp++;
			if(engtmp>engmax){
				engmax = engtmp; // engtmp가 engmax보다 큰 경우에만 갱신
			}
		}
		else if((input[i]>='a' && input[i]<='z') && (input[i+1]>='0' && input[i+1]<='9')){ // 영어(끝), 숫자
				engtmp=1; // engtmp 초기화
		}
	}
	
	for(int i=0; i<N; i++){
		if((input[i]>='a' && input[i]<='z') && (input[i+1]>='0' && input[i+1]<='9')){ // 숫자(끝), 영어
			nummax = numtmp;
		}
		else if((input[i]>='0' && input[i]<='9') && (input[i+1]>='0' && input[i+1]<='9')){ // 숫자, 숫자
			numtmp++;
			if(numtmp>nummax){
				nummax = numtmp; // numtmp가 nummax보다 큰 경우에만 갱신
			}
		}
		else if((input[i]>='0' && input[i]<='9') && (input[i+1]>='a' && input[i+1]<='z')){ // 숫자(끝), 영어
			numtmp=1; // numtmp 초기화
		}
	}

	printf("engmax : %d\nnummax : %d\n", engmax, nummax);
	
	return 0;
}