#include <stdio.h>
int main()
{
	int n;
	int s = 0;
	int i;
	int j;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int a = 1;
		for (j = 1; j <= i; j++)
		{
			a *= j;
		}
		s += a;
	}
	printf("%d", s);

	return 0;
}