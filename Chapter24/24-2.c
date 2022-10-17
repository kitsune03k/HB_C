#include <stdio.h>

int calcfilesize(FILE* fp)
{
	int fpos;
	
	while(1){
		fpos = ftell(fp);
		int buf = fgetc(fp);
		
		if(buf==EOF) 
			break;
		/*
		if문 조건에서 fgetc 쓰면 안됨!!
		fputc fgetc 전부 파일포인터 한개씩 이동
		EOF 확인하려 if문 조건에서 fget쓰면 while문 1사이클당 파일포인터 2개씩 이동
		putchar 한칸씩 건너뛰어서 작동
		*/
	}
	printf("포인터 위치 : %d\n", fpos);
	
	return fpos;
}


int main(void)
{
	FILE* fp = fopen("whatsmysize.png.bin", "rb");
	if( fp == NULL ){
		puts("파일 오픈 실패!");
		return -1;
	}
	
	printf("파일의 사이즈는 %dbyte 입니다\n",calcfilesize(fp));

	fclose(fp);
	
	return 0;
}