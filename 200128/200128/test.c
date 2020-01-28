#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	int sum = num = 7;
	sum = num++, sum++, ++num;
	printf("%d \n", sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 10;
	int j = 10;
	int k = 3;
    k *= i + j;//k = k *(i+j);
	printf("%d\n", k);
	return 0;
}
#include<stdio.h>
int main() 
{ 
	int i = 0;
	int a = 0;
	while (i < 20)
	{
		for (;;)
		{
			if ((i % 10) == 0) 
				break;
			else
				i--;
		}
		i += 11; 
		a += i;
	}
	printf("%d\n", a);
	return 0;
}
#include<stdio.h>
int main() 
{
	char *p = "abcdefgh", *r;
	long *q;
	q = (long*)p;
	q++;
	r = (char*)q;
	printf("%s\n", r);
	return 0;
}
#include <stdio.h>
int main() 
{
	char str[]="ABCD",
	*p=str;
	printf("%d\n", *(p+4));
	return 0;
}
#include <stdio.h>
float func(float a, int b)
{
	float m = 1, n = 1;
	int i;
	for (i = 1; i <b; i++) 
	{
		m *= a / i; n += m;
	}
	printf("%f \n", n);
	return n;
}
int main()
{
	float x = 1;
	int y = 1;
	func(x, y);
	return 0;
}