// ���࿡ �л��� 5�� �ִ�. �׷��� �̵��� ��� ������ ����غ���

//#include<stdio.h>
//int main()
//{
//	int sum = 0, score = 0;
//	float avg = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("���� �Է� : ");
//		scanf_s("%d", &score);
//		sum += score;
//	}
//	avg = (float)sum/5;
//	printf("��� : %f", avg);
//}

// �迭(array)
// �迭�̶� : ������ Ÿ���� �����Ͱ� ������ ����Ǿ��ִ� ������ ���� ���(����)
// �迭 �ȿ� ����ִ� ������ �����͵��� ������ �Ǿ��ִ� ��ȣ(÷��)�� ���Ͽ� ����
// �迭�� �̿��ϸ� ���� ���� ���� �ϳ��� �̸����� ó���� �� �ִ�. 

// �ε��� : �迭 ������ ��ȣ
// 
// data_type array_name[array_size];

//int arr[5] //ũ�Ⱑ 5�� int�� �迭 arr ����

// �迭�� �ε���(index)�� ����Ͽ� �� ��ҿ� ������ �����ϴ�. �ε����� 0���� �����Ͽ� �迭�� ũ�⺸�� �۾ƾ� �Ѵ�. 

// arr[0] = 10; //arr�� ù��° ��ҿ� 10�� �����Ѵ�.
// arr[1] = 20; //arr�� �ι�° ��ҿ� 20�� �����Ѵ�.

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 10, 20, 30, 40, 50 }; //��� 5���� ������ int�� �迭
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}

// �迭�� ����
// int grade[10]
// int : �ڷ���, grade(�迭�̸�) [10](�迭ũ��)
// �ڷ��� : �迭 ����(Ÿ��)�� int���̶�� ���� �ǹ�
// �迭 �̸� : �迭�� ����� �� ����ϴ� �̸��� grade
// �迭 ũ�� : �迭�� ������ ������ 10
// ���ε��� (�迭 ��ȣ)�� �׻� 0���� �����Ѵ�.

//#include<stdio.h>
//int main()
//{
//	int grade[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &grade[i]);
//	}
//	printf("==========\n");
//	printf("�ε���			��\n");
//	printf("==========\n");
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d          %d\n", i, grade[i]);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int grade[5];
//	int sum = 0;
//	int average;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("�л����� ������ �Է��ϼ��� : ");
//		scanf_s("%d", &grade[i]);
//		sum += grade[i];
//	}
//	average = sum / 5;
//	printf("��� ���� : %d", average);
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 0, }; //ũ�Ⱑ 10�� int�� �迭�� ����, ��� ��Ҹ� 0���� �ʱ�ȭ
//	double arr2[5]; 
//	char arr3[7] = "hello";
//	int arr4[6] = { 1, 2, 3, 4, 5, 6 }; //ũ�Ⱑ 6�� int�� �迭�� ������� �ʱ�ȭ
//	int arr5[8] = { 1, 2, 3, 4, 5, 6, 7, 8 }; //
//	for (int i = 0; i < 5; i++)
//	{
//		printf("�� �Է� : ");
//		scanf_s("%lf", &arr2[i]); //����ڷκ��� ���� �Է¹޾� arr�� ��ҿ� ����
//	}
//	/*for (int i = 0; i < 10; i++)
//	{
//		printf("%d", arr1[i]);
//	}*/
//}

// ���� : �迭 ��ҵ� �߿��� �ּڰ��� ã�� ���α׷��� ����ÿ�
//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 10, 5, 7, 3, 8 };
//	int min = arr[0]; //�迭�� ù��° ���� �ּҰ����� �ʱ�ȭ
//	for (int i = 0; i < 5; i++)
//	{
//		if (min >= arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	printf("�迭���� ���� ���� �� : %d\n", min);
//
//	return 0;
//}

//#include<stdio.h>
//int findval(int arr[]);
//int min;
//int main() 
//{
//	int arr[5] = { 10, 5, 7, 3, 8 };
//	min = findval(arr);
//	printf("�迭���� ���� ���� �� : %d\n", min);
//	
//	return 0;
//	
//}
//int findval(int arr[5])
//{
//	int min = arr[0];
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (min >= arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	return min;
//}

//#include<stdio.h>
//int main()
//{
//	int sum5[5]; int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("���� �Է� : ");
//		scanf_s("%d", &sum5[i]);
//		sum += sum5[i];
//	}
//	printf("������ %d", sum);
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 18, 21, 30, 5, 9, 11, 10 };
//	int max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (max <= arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//}

//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int temp = 0;
//
//	for(int i = 0; i < 2; i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[4 - i];
//		arr[4 - i] = temp;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//�迭���� ������ ���� ã�� �� ��ġ�� ����ϴ� ���α׷�
//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 2, 5, 8, 1, 3 };
//	int fval = 0, find = 0;
//	printf("ã�� ���� �Է��ϼ��� : ");
//	scanf_s("%d", &fval);
//	for (int i = 0; i < 5; i++)
//	{
//		if (fval == arr[i])
//		{
//			printf("%d�� %d��°�� �ֽ��ϴ�.", fval, i + 1);
//			find = 1;
//			break;
//		}
//		/*if (i == 4)
//		{
//			printf("ã�� ���� �����ϴ�.");
//		}*/
//	}
//	if (!find) //ã�� ���� �迭�� ���� ���
//	{
//		printf("�迭�� �����ϴ�.\n")
//	}
//}