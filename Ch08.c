//�ݺ���
// ���α׷����� �ݤ��������� ����Ǵ� �ڵ带 �ۼ��� �� ����Ѵ�.

// 1.while��

//������ ���� ���� �ݺ������� �ڵ带 �����մϴ�. while���� ������ ������ ����.

//while (���ǽ�)
//{
//	//�ݺ������� ����� �ڵ� ��) ������ ���̸� �ݺ������� ������ �ڵ带 �����ϰ�, ������ �����̸� �ݺ����� �����Ѵ�.
//}

//#include<stdio.h>
//int main()
//{
//	//Ż��� ����
//	//Ż��� ���ǽ�
//	//Ż���� ���� �����
//
//	int i = 1; //Ż��� ����
//	while (i <= 10)
//	{
//		printf("Hello\n");
//		i++; //Ż���� ���� �����
//	}
// 
//}

//02 1���� 10������ �� ���ϱ�
//#include<stdio.h>
//int main()
//{
//	int i = 1, sum = 0;
//	while (i <= 10)
//	{
//		printf("i = %d\n", i);
//		sum = sum + i;
//		i++;
//		
//		
//	}
//	printf("while�� ���� ���� i= %d", i);
//	printf("1���� 10������ �� : %d", sum);
//}

//Ű����κ��� ���� �ϳ� num �� �Է¹޾Ƽ� 1���� N������ �� ���ϱ�
//#include<stdio.h>
//int main()
//{
//	int num = 0, sum = 0;
//	printf("���� �ϳ� �Է� : ");
//	scanf_s("%d", &num);
//	int i = 1;
//	while (i <= num)
//	{
//		sum += i;
//		i++;
//	}
//	printf("���� : %d", sum);
//}

//������ ����ϱ� : 2�ܸ�
//#include<stdio.h>
//int main(void)
//{
//	int i = 1;
//	while (i <= 9)
//	{
//		printf("2 * %d = %d\n", i, 2 * i);
//		i++;
//	}
//}
//�����ܼ� �ϳ��� �Է¹޾� ������ ���
//#include<stdio.h>
//int main(void)
//{
//	int num = 0, i = 1;
//	printf("���� �Է� : ");
//	scanf_s("%d", &num);
//	while (i <= 9)
//	{
//		printf("%d * %d = %d\n", num, i, num * i);
//		i++;
//	}
//}


//i�� 11�� �ƴϰ� �ϵ���
//#include<stdio.h>
//int main()
//{
//	int i = 1, sum = 0;
//	while (i <= 10)
//	{
//		sum = sum + i;
//		if (i == 10)
//		{
//			break;
//		}
//		i++;
//		
//		
//	}
//	printf("while�� ���� ���� i= %d", i);
//	printf("1���� 10������ �� : %d", sum);
//}

//break ���� ����Ǹ� ���� ����� "�ݺ����� ���"�� ���������� �˴ϴ�.


//1���� 10���� ���߿� ¦������ Ȧ������ �� ���ϱ�
//#include<stdio.h>
//int main()
//{
//	int i = 1, jjsum = 0, hsum = 0;
//	while (i <= 10)
//	{
//		if (i % 2 == 0)
//		{
//			jjsum += i;
//		}
//		else
//		{
//			hsum += i;
//		}
//		i++;
//	}
//	printf("¦�������� �� : %d\n", jjsum);
//	printf("Ȧ�������� �� : %d", hsum);
//}

// ��ü ������
//2�� ~9�ܱ��� ��� 1��

//#include<stdio.h>
//int main()
//{
//	int i = 2;
//	while (i <= 9)
//	{
//		int j = 1;
//		printf("===%d��===\n", i);
//		while (j <= 9)
//		{
//			printf("%d X %d = %d\n", i, j, i * j);
//			j++;
//		}
//		i++;
//	}
//}

//������ ���� ���
//#include<stdio.h>
//int main()
//{
//	int i = 9;
//	while (i >= 2)
//	{
//		printf("%d��\n", i);
//		int j = 9;
//		while (j >= 1)
//		{
//			printf("%d * %d = %d\n", i, j, i * j);
//			j--;
//		}
//		i--;
//	}
//
//}

//���� ���̸� �Է¹޾� ���� ��ŭ�� �ﰢ�� ���
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("�ﰢ�� ���� �Է� : ");
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("�ﰢ�� ���� �Է� : ");
//	scanf_s("%d", &n);
//	int i = 1; 
//	while (i <= n)
//	{
//		int j = 1;
//		while (j <= i)
//		{
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("�ﰢ�� ���� �Է� : ");
//	scanf_s("%d", &num);
//	int i = 1;
//
//	while (i <= num)
//	{
//		int j = 1;
//		while (j <= i)
//		{
//			printf("*");
//			j++;
//		}
//		i++;
//		printf("\n");
//	}
//}
//
////������ڵ�
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("�ﰢ�� ���� �Է� : ");
//	scanf_s("%d", &num);
//	int i = 0;
//
//	while (i < num)
//	{
//		int j = 0;
//		while (j <= i)
//		{
//			printf("*");
//			j++;
//		}
//		i++;
//		printf("\n");
//	}
//}


