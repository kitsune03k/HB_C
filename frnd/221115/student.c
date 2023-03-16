#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _student{
	char NAME[20];
	int SNUM;
	int AGE;
} student;

int main(void)
{
	student* studentarr = (student*)malloc(sizeof(student)*10);
	
	char s[] = "정찬훈 101013123 26 윤종혁 101310346 20 고성호 101567902 25 강윤석 101512574 20 윤혜민 101610844 19 김민수 101610956 26 김성준 101611345 18 오우석 101711134 25 이준형 101711324 19 박세훈 101910845 29";
	char seps[] = " ";
 	char* token = strtok(s, seps);

	int i = 0;
  	while(token != NULL)
  	{
		strcpy(studentarr[i].NAME, token);
		token = strtok(NULL, seps);
		
		studentarr[i].SNUM = atoi(token);
		token = strtok(NULL, seps);
		
		studentarr[i].AGE = atoi(token);
		token = strtok(NULL, seps);
		
		i++;
  	}
	
	for(int i=0; i<10; i++)
	{
		printf("%s\n%d\n%d\n", studentarr[i].NAME, studentarr[i].SNUM, studentarr[i].AGE);
	}
	
	student(*ptr) = &studentarr[0];

	while(1)
	{
		char input[20] = {0,};
		printf("정보를 출력할 학생 이름 입력\n");
		fgets(input, 20, stdin);
		input[strlen(input)-1] = 0; // \n -> null
		
		for(int j=0; j<10; j++){
			if(!strcmp(input, ptr[j].NAME)){
				printf("%s\n%d\n%d\n", studentarr[j].NAME, studentarr[j].SNUM, studentarr[j].AGE);
			}
		}
	}
}