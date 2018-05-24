//FOR
#define _CRT_SECURE_NO_WARNINGS 
#include <math.h>
#include <stdio.h>

double a, f;
double summ(int n)
{
	f = 0.0;
	for (int i = 0; i < n; ++i)
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		f += a;
	}

	return (f);
}

//2
#include <math.h>
#include <stdio.h>
float a, f;

double summ2(double eps)
{
	a = eps + 1.0;
	f = 0.0;
	for (int i = 0; fabs(a) > 0; ++i)
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		f += a;
	}
	return(f);
}

//3
#include <math.h>
#include <stdio.h>


double a;

main(int n, int k)
{
	for (int i = 0; i < n; ++i)
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		if ((i + 1) % k == 0)
			continue;
		printf("%f", a);
	}
	getchar(); getchar();
	return 0;
}

//4
#include <math.h>
#include <stdio.h>

double a;
int m = -1;

int findFirstElement(double eps)
{
	for (int i = 0; ; ++i)
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		if (fabs(a) <= eps)
		{
			m = i + 1;
			break;
		}

	}
	return(m);
}

//5
#include <math.h>
#include <stdio.h>

double a;

int findFirstNegativeElement(double eps)
{
	for (int i = 0; ; ++i)
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		if (fabs(a) <= eps && a < 0.0)
		{
			return(i + 1);
		}
	}
}

//6
#define _CRT_SECURE_NO_WARNINGS 
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("chcp 1251");
	int d;
	for (int i = 0; i != -1;)
	{
		system("cls");
		printf("Zadanie 1\n");
		printf("Zadanie 2\n");
		printf("Zadanie 3\n");
		printf("Zadanie 4\n");
		printf("Zadanie 5\n");
		printf("Dlya vixdoda najmite 6\n\n ");
		int n = 0, k = 0;
		double eps = 0.0;
		printf("Vvedite nomer zadaniya : ");
		scanf("%d", &d);
		switch (d)
		{
		case 1:
			system("cls");
			printf("Zadanie 1\n");
			printf("Kol-vo slagaemih n:");
			scanf_s("%d", &n);
			printf("Summa=%f\n\n", summ(int n));
			system("pause");
			break;

		case 2:
			system("cls");
			printf("Zadanie 2\n");
			printf("Vvedite tochnost E=");
			scanf_s("%f", &eps);
			printf("Summa=%f\n\n", summ2(double eps));
			system("pause");
			break;
		case 3:
			system("cls");
			printf("Zadanie 3 \n");
			printf("Vvedite chislo n= ");
			scanf_s("%d", &n);
			printf("Vvedite chislo k= ");
			scanf_s("%d", &k);
			printf("Posledovatelnost = ");
			main(int n, int k)
				system("pause");
			break;
		case 4:
			system("cls");
			printf("Zadanie 4");
			printf("Vvedite E=");
			scanf_s("%f", &eps);
			printf("Nomer = %d\n\n", findFirstElement(eps));
			system("pause");
			break;

		case 5:
			system("cls");
			printf("Zadanie 5\n");
			printf("Vvedite chislo E= ");
			scanf_s("%f", &eps);
			printf("Nomer = %d\n\n", findFirstNegativeElement(eps));
			system("pause");
			break;
		case 6:
			i = -1;
			break;

		default:
			printf("Nepravilnii vvod");
			system("pause");
		}
	}
	system("pause");
	return (0);
}

//WHILE
//1
#include <math.h>
float a, f;
float task1(int n)
{
	f = 0.0;
	int i = 0;

	while (i < n)
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		f += a;
		++i;
	}
	return (f);
}
//2
#include <math.h>
#include "funcs.h"
float a, f;
float task2(float e)
{
	a = e + 1.0;
	f = 0.0;
	int i = 0;
	while (fabs(a) > e)
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		f += a;
		++i;
	}
	return (f);
}

//3
#include <math.h>
#include <stdio.h>
#include "funcs.h"
float a;
float task3(int n, int k)
{
	int i = 0;
	while (i < n)
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
	if ((I + 1) % k == 0)
	{
		++I;
		continue;
	}
	++I;
	printf(“%f”, a);
}
}

//4
#include <math.h>
#include "funcs.h"
float a;
int m = -1;

int task4(float e)
{
	int i = 0;
	while (i > -1)
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		if (fabs(a) <= eps)
		{
			m = i + 1;
			break;
		}
		++i;
	}
	return(m);
}

//5
#include <math.h>
#include "funcs.h"
float a;

int task5(float e)
{
	int i = 0;
	while (i > -1)
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		if (fabs(a) <= e && a < 0.0)
		{
			return(i + 1);
		}
		++i;
	}
}

//6
int main(void)
{
	system("chcp 1251");
	int i = 0, d;

	while (i != -1)
	{
		system("cls");
		printf("zadanie 1\n");
		printf("zadanie 2\n");
		printf("zadanie 3\n");
		printf("zadanie 4\n");
		printf("zadanie 5\n");
		printf("Vixod -6\n\n");
		int n = 0, k = 0;
		float eps = 0.0;

		printf("Nomer zadaniya: ");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1:
			system("cls");
			printf("zadanie 1\n");
			printf("Kol-vo slagaemix = ");
			scanf_s("%d", &n);
			printf("Sum = %f\n\n", task1(n));
			system("pause");
			break;


		case 2:
			system("cls");
			printf("zadanie 2\n");
			printf("tochnost = ");
			scanf_s("%f", &e);
			printf("sum = %f\n\n", task2(e));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("zadanie 3\n");
			printf("n=");
			scanf_s("%d", &n);
			printf("k=");
			scanf_s("%d", &k);
			printf("posledovatelnost = \n");
			task3(n, k);
			system("pause");
			break;
		case 4:
			system("cls");
			printf("zadanie 5\n");
			printf("е=");
			scanf_s("%f", &e);
			printf("nomer =  %d\n\n", task4(e));
			system("pause");
			break;
		case 5:
			system("cls");
			printf("zadanie 5\n");
			printf("e");
			scanf_s("%f", &e);
			printf("nomer = %d\n\n", task5(e));
			system("pause");
			break;
		case 6:
			i = -1;
			break;
		default:
			printf("Nepravilnii vvod \n");
			system("pause");
		}

	}
	return(0);
}
//DO WHILE
//1
#include <math.h>
#include "funcs.h"

float a, f;
float task1(int n)
{

	f = 0.0;
	int i = 0;

	do
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		f += a;
		++i;
	} while (i < n);
	return f;
}

//2
#include <math.h>
#include "funcs.h"
float a, f;

float task2(float e)
{

	a = e + 1.0;
	f = 0.0;
	int i = 0;
	do
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		f += a;
		++i;
	} while (fabs(a) > e);
	return(f);
}


//3
#include <math.h>
#include <stdio.h>
#include "funcs.h"

float a;
float task3(int n, int k)
{

	int i = 0;
	do
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		if ((i + 1) % k == 0)
		{
			++i;
			continue;
		}
		++i;
		printf("%f ", a);
	} while (i < n);
}
//4
#include "funcs.h"
float a;

int task4(float e)
{

	int m = -1;
	int i = 0;
	do
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		if (fabs(a) <= e)
		{
			m = i + 1;
			break;
		}
		++i;
	} while (i > -1);
	return(m);
}





//5
#include <math.h>
#include "funcs.h"

float a;
int task5(float e)
{

	int i = 0;
	do
	{
		a = pow(-1, i)*(i + 1) / (pow(2, i - 1));
		if (fabs(a) <= e && a < 0.0)
		{
			return(i + 1);
		}
		++i;
	} while (i > -1);
}
//6
#include <stdio.h>
#include "funcs.h"

int main(void)
{
	system("chcp 1251");/*Русский язык*/
	int i = 0;
	int n;
	do
	{

		system("cls");
		printf("Выберите задание: \n");
		printf("Задание 1\n");
		printf("Задание 2\n");
		printf("Задание 3\n");
		printf("Задание 4\n");
		printf("Задание 5\n");
		printf("6 - выход\n\n");
		int n = 0, k = 0;
		float e = 0.0;
		scanf("%d", &n);

		switch (n)
		{
		case 1:
			system("cls");
			printf("Задание 1\n");
			printf("Введите число слагаемых n: ");
			scanf_s("%d", &n);
			printf("Сумма=%f\n\n", task1(n));
			system("pause");
			break;

		case 2:
			system("cls");
			printf("Задание 2\n");
			printf("Введите точность e: ");
			scanf_s("%f", &e);
			printf("Сумма=%f\n\n", task2(e));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("Задание 3\n");
			printf("Введите число n: ");
			scanf_s("%d", &n);
			printf("Введите число k: ");
			scanf_s("%d", &k);
			printf("Последовательность: ");
			task3(n, k);
			printf("\n\n");
			system("pause");
			break;

		case 4:
			system("cls");
			printf("Задание 4\n");
			printf("Введите число e: ");
			scanf_s("%f", &e);
			printf("Номер: %d\n\n", task4(e));
			system("pause");
			break;

		case 5:
			system("cls");
			printf("Задание 5\n");
			printf("Введите число e: ");
			scanf_s("%f", &e);
			printf("Номер: %d\n\n", task5(e));
			system("pause");
			break;

		case 6:
			i = -1;
			break;

		default:
			printf("\nНеправильный ввод\n");
			system("pause");
		}

	} while (i != -1);

	system("pause");
	return (0);
}

