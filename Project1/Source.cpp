#include<stdio.h>
void A_test(int);
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a <= 0)
	{
		printf("Error");
	}
	else
	{
		A_test(a);
	}
	return 0;
}


void A_test(int a)
{
	for (int row = 1;row <= a;row++)
	{
		for (int level = 1;level <= a;level++)
		{
			if (level == 1 || level == a || row == 1 || row == a)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}

}