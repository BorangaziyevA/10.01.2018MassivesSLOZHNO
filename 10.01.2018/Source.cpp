#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task7()
{
	int A[20] = { 0 };
	int sum = 0;

	for (size_t i = 0; i < 20; i++)
	{
		A[i] = 0 + rand() % 30;

		if (A[i] <= 20)
		{
			printf("%d\n", A[i]);
			sum = sum + A[i];
		}
	}
	printf("%d", sum);
}

void task6()
{
	int A[5] = { 0 };
	int dou = 0;

	for (size_t i = 0; i < 5; i++)
	{
		A[i] = 1 + rand() % 5;

		printf("%d\n", A[i]);

		dou = dou + pow(A[i], 2);
	}
	printf("%d", dou);
}

void task5()
{
	int A[10] = { 0 };
	int pro = 1;

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 1 + rand() % 10;
		pro = pro * A[i];
	}
	printf("%d\n", pro);
}

void task4()
{
	int A[100] = { 0 };
	int count = 0;

	for (size_t i = 0; i < 100; i++)
	{
		A[i] = 0 + rand() % 100;
		count = count + A[i];
	}
	printf("%d\n", count);
}

void task3()
{
	int A[20] = { 0 };

	for (size_t i = 0; i < 20; i++)
	{
		A[i] = 0 + rand() % 20;

		for (size_t j = 0; j < i; j++)
		{
			if (A[j] == A[i])
			{

				A[i] = 0+ rand() % 20;
				j = -1;
			}
		}
		printf("A[%d] = %d\n", i, A[i]);
		
	}
}

void task2()
{
	const int N = 10;
	int i, j, A[N] = { 0 }, c, count = 0;

	for (size_t o = 0; o < N; o++)
	{
		A[o] = -100 + rand() % 200;
	}
	for ( i = 0; i < N-1; i++){
		for ( j = N-2; j >= i; j--)
		{
			if (A[j] > A[j+1])
			{
				count++;
				c = A[j]; A[j] = A[j + 1];
				A[j + 1] = c;
			}

		}
		}
	printf("\n Отсортированный массив: \n");
	for ( i = 0; i < N; i++)
	{
		printf("%d\n", A[i]);
	}
	printf("\n\n%d\n", count);
}

void task1()
{
	int A[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (size_t i = 0; i < 10; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\n\n\n\n\n");
	printf("%d\n", A[0]);
	printf("%d\n", A[1]);
	printf("%d\n", A[2]);
	printf("%d\n", A[3]);

	printf("\n\n\n\n\n");

	int x = 0;

	for (size_t i = 10; i > 0; i--)
	{

		A[x] = i;
		printf("A[%d] = %d\n", x, A[x]);
		x++;
	}

	printf("\n\n\n\n\n");
	printf("%d\n", A[0]);
	printf("%d\n", A[1]);
	printf("%d\n", A[2]);
	printf("%d\n", A[3]);

	int MaxIndex = 0, MinIndex = 0, min = 20, max = 0;

	for (size_t i = 0; i < 10; i++)
	{
		if (A[i] < min) 
		{
			min = A[i];
			MinIndex = i;
		}
		if (A[i] > max)
		{
			max = A[i];
			MaxIndex = i;
		}
	}


}

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	
	int task, flag;


	do
	{
		printf("Введите номер задачи:");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		case 6:task6(); break;
		case 7:task7(); break;
		}
		printf("Хотите продолжить?1/0");
		scanf_s("%d", &flag);

	} while (flag == 1);
}