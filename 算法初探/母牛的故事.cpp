#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n, i, sum, num1[55], num2[55], num3[55], num4[55];
	while (scanf("%d", &n) != EOF)
	{
		if (n == 0);
		else {
			num1[1] = num2[1] = num2[2] = num3[2] = num3[1] = 0;
			num4[1] = num4[2] = num1[2] = 1;
			for (i = 3; i < n + 1; i++)
			{
				num4[i] = num4[i - 1] + num3[i - 1];
				num1[i] = num4[i];
				num2[i] = num4[i - 1];
				num3[i] = num2[i - 1];
			}
			sum = num1[n] + num2[n] + num3[n] + num4[n];
			printf("%d\n", sum);
		}
	}
}
