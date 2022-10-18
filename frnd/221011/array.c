#include <stdio.h>

int main(void)
{
	// 방법 1
	int arr1[5][5];
	int a=1;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(a==10)
				a=1;
			arr1[i][j] = a++;
		}
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%4d", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	// 방법 2
	int arr2[5][5];
	int b=0;

	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			arr2[i][j] = b++%9+1;
		}
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%4d", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	// 방법3
	int arr3[5][5];
	int asdf[9];
	
	for(int i=0; i<9; i++){
		asdf[i] = i+1;
	}

	int c=0;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(c==9)
				c=0;
			arr3[i][j] = asdf[c++];
		}
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%4d", arr3[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	// 방법4
	int arr4[5][5];
	int qwer[9];

	for(int i=0; i<9; i++){
		qwer[i] = i+1;
	}
	
	int d=0;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			arr4[i][j] = qwer[d++%9];
		}
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%4d", arr4[i][j]);
		}
		printf("\n");
	}

}