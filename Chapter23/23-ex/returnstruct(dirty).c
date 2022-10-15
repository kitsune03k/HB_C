#include <stdio.h>

typedef struct // employee 생략 가능
{
	char name[20];
	char rrn[20];
} EMPLOYEE; // 구조체의 이름은 따로 안짓겠는데, 이렇게 구성된 구조체를 EMPLOYEE라고 하자~

void trim(EMPLOYEE (*p_man)[3])
{
	for(int i=0; i<3; i++){
		for(int j=0; j<20; j++){ // name, rrn은 지정된 포인터 없기에 *(arr+i) 불가능
			if((*p_man+i)->name[j] == 10)
				(*p_man+i)->name[j] = 0;
			if((*p_man+i)->rrn[j] == 10)
				(*p_man+i)->rrn[j] = 0;
		}
	}
}

void clearinputbuffer(void)
{
	while(getchar()!='\n'){};
}

EMPLOYEE GetEmployeeInfo(int i)
{
	EMPLOYEE tmp;
	printf("%d번째 사람의 이름을 입력하세요\n", i+1);
	fgets(tmp.name, sizeof(tmp.name)/sizeof(char), stdin);
	printf("%d번째 사람의 주민등록번호를 입력하세요\n", i+1);
	fgets(tmp.rrn, sizeof(tmp.rrn)/sizeof(char), stdin);
	return tmp;
}

int main(void)
{
	EMPLOYEE man[3];
	int i;
	
	/*
	man은 1차원 구조체 배열!!!!!!!!!!!!!!!!
	
	man[0]			man[1]			man[2]
	안에
	man[0].name		man[1].name		man[2].name
	man[0].rrn		man[1].rrn		man[2].rrn
	
	열 먼저 접근, 그다음 행(맴버) 접근, 맴버간 순서는 작성순서순
	따라서 포인터 선언시에 18-1-1.c와 비슷한 방식으로 포인터 선언해줘야함
	*/
	
	printf("----종업원 등록----\n\n");
	for(i=0; i<3; i++){
		man[i] = GetEmployeeInfo(i);
	}
	
	trim(&man);
	/*
	(man)과 (&man)은 다름. 전자는 decay되서 컴파일러 경고 발생
	Decay 된 포인터는 [][]로만 접근 가능
	Decay 되지않은 포인터는 [][], (arr+i) 전부 접근 가능
	*/
	
	EMPLOYEE *ptrman = &man; 
	
	for(i=0; i<3; i++){
		printf("%15s | %15s\n", *(*ptrman+i)->name, *(*ptrman+i)->rrn);
	}
	
}