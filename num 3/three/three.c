#include <stdio.h>
#include<stdlib.h>
int main()
{
	int a[] = {1,2,3};
	int b[] = {4,5,6};//������������
	int i,temp;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}

	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d ", a[i]);
	}
		printf("\n");
		for (i = 0; i < sizeof(b) / sizeof(b[0]); i++)
		{
			printf("%d ", b[i]);
		}
		printf("\n");
		system ("pause"); 
		return 0;
}