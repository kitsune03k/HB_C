#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* attack(void)
{
	srand((int)time(NULL));
	
	unsigned char* random16byte = (char*)malloc(sizeof(char)*16);
	
	for(int i=0; i<16; i++){
		random16byte[i] = rand()%256;
	}
	
	return random16byte;
}

int main(void)
{
	char* random16byte = attack();
	
	for(int i=0; i<16; i++){
		fputc(random16byte[i], stdout);
	}

	free(random16byte);
	
	return 0;
}