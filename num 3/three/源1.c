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
	int i,count = 0;//���ø���Ϊ0�������ȥ�ж�,��ʱҪ�����жϺ���
	for (i = 0; i < 101; i++)
	{
		count += nine_count(i);
	}//����ǵĻ���������1
	printf("9�ĸ�����%d\n", count);
	int count = 0, i;
	for (i = 1; i <= 100;i++)//1--100������9,19,29...90,91...99
	{
	if (i % 10 == 9)//�жϸ�λ����������Ϊ9
		count++;
	if (i / 10 == 9)//�ж�ʮλ��
		count++;
	}
	printf("%d\n", count);
system("pause");
return 0;
}