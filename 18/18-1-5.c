#include <stdio.h>

int main(void)
{
	int arr[2][2][2]={1,2,3,4,5,6,7,8};
	
	// () 사용 안함
	printf("%d \n\n", arr[1][0][1] ); // 6
	
	printf("%d ", arr[1][0][1] );
	// [][][]
	printf("%d ", (*(arr+1))[0][1] );
	// ()[][]
	printf("%d ", (*(*(arr+1))+0)[1] );
	// ()()[]
	printf("%d \n", *(*(*(arr+1)+0)+1) );
	// ()()()
	
	printf("%d ", arr[1][0][1] );
	// [][][]
	printf("%d ", *(arr[1][0]+1) );
	// [][]()
	printf("%d ", *(*(arr[1]+0)+1) );
	// []()()
	printf("%d \n", *(*(*(arr+1)+0)+1) );
	// ()()()

	printf("%d ", *(arr[1][0]+1) );
	// [][]()
	printf("%d ", (*(arr[1])+0)[1] );
	// []()[]
	printf("%d \n", (*(arr+1))[0][1] );
	// ()[][]
	
	printf("%d ", *(*(arr[1]+0)+1) );
	// []()()
	printf("%d ", *(*(arr+1)[0]+1) );
	// ()[]()
	printf("%d \n", (*(*(arr+1))+0)[1] );
	// ()()[]

}
