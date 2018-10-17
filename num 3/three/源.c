#include <stdio.h>
#include<stdlib.h>
int main()
{
	double sum = 0;
	int n;//定义当为奇数时为正，偶数为负
	for (n = 1; n <= 100; n++)
	if (n % 2 == 0)
	{
		sum = sum - 1.0 / n;
	}
	else { sum = sum + 1.0 / n; }
	printf("sum=%lf", sum);
	system("pause");
	return 0;
}
//	
//	
//
