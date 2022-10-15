#include <stdio.h>

int main(void)
{
	int onedarr[3] = {1,2,3}; // 크기 12
	
	int* onedptr1 = onedarr;
	printf("size of onedptr1 : %ld\n", sizeof(*onedptr1));
	// 첫 요소의 크기로 decay
	
	int (*onedptr2)[3] = &onedarr;	
	printf("size of onedptr2 : %ld\n", sizeof(*onedptr2));
	// decay 되지않은것 확인!, 열 수 고정[3]
	
	*(onedptr1+1) = 0; // 배열내 이동이 아닌 int 크기만큼 점프
	
	*(*onedptr2+2) = 0; // *(arr+i)
	(*onedptr2)[2] = 0; // arr[i]
	
	printf("%d %d %d\n\n", onedarr[0], onedarr[1], onedarr[2]);
		
	int twodarr[2][3] = {{1,2,3},{4,5,6}}; // 크기 24
	
	int* twodptr1 = twodarr; // twodarr는 1행3열
	printf("size of twodptr1 : %ld\n", sizeof(*twodptr1)); // 컴파일 경고!
	// 2차원배열은 이따위로 포인터 쓰면 안됨

	int (*twodptr2)[3] = twodarr; // twodarr는 1행3열
	printf("size of twodptr2 : %ld\n", sizeof(*twodptr2));
	// 1행의 크기로 decay, 행 수 미정, 열 수 고정[3]

	int (*twodptr3)[2][3] = &twodarr; // &twodarr는 2행3열
	printf("size of twodptr3 : %ld\n", sizeof(*twodptr3));
	// decay 되지않은것 확인!, 행 수 고정[2], 열 수 고정[3]
}