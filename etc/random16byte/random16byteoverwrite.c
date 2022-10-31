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
	FILE* fptr = fopen("filetoattack_copy0.bin", "rb+");
	
	char* random16byte = attack();
	
	fwrite(random16byte, sizeof(char), 16, fptr);
	
	free(random16byte);
	
	return 0;
}