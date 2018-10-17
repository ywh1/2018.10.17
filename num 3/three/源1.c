#include <stdio.h>
#include<stdlib.h>
int nine_count(int x)
{
	int count = 0;
	if (x / 10 == 9)
		count++;
	if (x%10 == 9)
		count++;
	return count;
}
int main()
{
	int i,count = 0;//先让个数为0，在逐个去判断,这时要调用判断函数
	for (i = 0; i < 101; i++)
	{
		count += nine_count(i);
	}//如果是的话给个数加1
	printf("9的个数：%d\n", count);
	int count = 0, i;
	for (i = 1; i <= 100;i++)//1--100个数中9,19,29...90,91...99
	{
	if (i % 10 == 9)//判断个位数，求余数为9
		count++;
	if (i / 10 == 9)//判断十位数
		count++;
	}
	printf("%d\n", count);
system("pause");
return 0;
}