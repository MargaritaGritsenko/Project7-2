#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RU");
	char c;
	float x, y;
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("= %f", x + y);
		break;
	case '-':
		printf("= %f", x - y);
		break;
	case '*':
		printf("= %f", x * y);
		break;
	case '/':
		printf("= %f", x / y);
		break;
	case '^':
		printf("= %f", pow(x, y));
		break;
	default:
		printf("неверный формат\n");
	}
	return 0;
}