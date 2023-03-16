#include<stdio.h>
#include<string.h>

void ShowOdd(int *arr, int size);

void ShowEven(int *arr, int size);


int main(void)
{
	int arr[10];
	int i;
	
	printf("�� 10���� ���� �Է� \n");
	for(i=0; i<10; i++)
	{
		printf("�Է�: ");
		scanf("%d", &arr[i]);
	}

	printf("Ȧ�� ��� : ");
	ShowOdd(arr, sizeof(arr)/sizeof(int));

	printf("¦�� ��� : ");
	ShowEven(arr, sizeof(arr)/sizeof(int));

	return 0;
}

void ShowOdd(int *arr, int len)   //Ȧ����� 
{
	int i;
	for(i=0; i<len; i++)
	{
		if(arr[i]%2==1)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}

void ShowEven(int *arr, int len)   //¦�����
{
	int i;
	for(i=0; i<len; i++)
	{
		if(arr[i]%2==0)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}
