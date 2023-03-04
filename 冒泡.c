#include<stdio.h>
int main()
{
	int num[] = { 9,8,7,6,5,4,3,2,1,0 }, i,numsize;
	numsize = sizeof(num) / sizeof(num[1]);
	for (i = 0; i < numsize; i++)
	{
		int j = 0;
		for (j; j < numsize-i-1; j++)
		{
			if (num[j] > num[j + 1])
			{
				int temp;
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < numsize; i++)
	{
		printf("%d ",num[i]);
	}

	return 0;
}