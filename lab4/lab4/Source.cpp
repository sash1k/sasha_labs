#include <stdio.h>
#include <stdlib.h>

float task1(int *x)
{
	if (*x != 0)
	{
		printf("Задание 1\n");
		printf("Адрес =%p , значение = %d\n", x, *x);
		++*x;
		printf("Новое значение = %d\n", *x);
	}
	else
		printf("Указатель пустой");
}

float task2()
{
	int g;
	printf("Задание 2\n");
	printf("Введите число = ");
	scanf_s("%d", &g);
	printf("Адрес = %p, Значение  = %d\n", &g, g);
	task1(&g);
	printf("Адрес = %p, Значение = %d\n", &g, g);
}

float task3()
{
	printf("Задание 3\n");

	int *d = (int *)malloc(sizeof(int));
	printf("Введите число ");
	scanf_s("%d", d);

	printf("Адрес = %p, Значение = %d \n", d, *d);
	task1(d);
	printf("Адрес = %p, Значение = %d \n", d, *d);
	free(d);
}


#include <stdio.h>

int task4(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("arr[%d]=", i + 1);
		scanf("%d", &arr[i]);
	}
}


int task5(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("arr[%d]=%d\n", i + 1, arr[i]);
	}
}

int task6(int *arr, int n)
{
	//Вариант 3 Сортировка пузырьковая
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n - 1; j++)
		{
			int a;
			if (arr[j] > arr[j + 1])
			{
				a = arr[j]; arr[j] = m1[j + 1]; m1[j + 1] = a;
			}
		}

		int task7()
		{
			const int n = 10;
			int arr[10];
			task4(arr, n);
			task5(arr, n);
			task6(arr, n);
			task5(arr, n);
		}


		int task8()
		{
			int n = 0;
			printf("Введите размер массива: ");
			scanf("%d", &n);
			int *arr = (int *)malloc(sizeof(int)*n);
			task4(arr, n);
			task5(arr, n);
			task6(arr, n);
			task5(arr, n);
			free(arr);
		}


float task1(int *);
float task2();
float task3();
int task4(int *arr, int n);
int taks5(int *arr, int n);
int task6(int *arr, int n);
int task7();
int task8();

int main(void)
{
	
	int g, x;

	while (g = -1)
	{
		printf("Задание 2 - 1\n");
		printf("Задание 3 - 2\n");
		printf("Задание 7 - 3\n");
		printf("Задание 8 - 4\n");
		printf("Выход - 5\n");
		printf("Выберите задание\n");
		scanf("%d", &x);
		switch (x)
		{
		case 1:
		{
			printf("Число в стеке\n");
			task2();
			break;
		}
		case 2:
		{
			printf("Число в динамической памяти\n");
			task3();
			break;
		}
		case 3:
		{
			printf("Массив из n-элементов в стеке\n");
			task7();
			break;
		}
		case 4:
			printf("Массив из n-элементов в динамической памяти\n");
			task8();
			break;
		case 5:
			return(0);
		default:
			printf("Неправильный ввод\n");
			break;
		}
		getchar();
		getchar();
	}
	return(0);
}

