//#include<stdio.h>
// ������ �迭�� ����

// ������ �迭�� 2���� �̻��� �迭�� �ǹ��Ѵ�. 1���� �迭���� ������ �ٸ���.
// ���������� ����ϴ� �迭�� 2����, 3���� �迭�̴�.

//int arr1[10]; //���� ���̰� 10�� 1���� �迭
//int arr2[5][3]; //���� ���̰� 5, ���� ���̰� 3�� 2���� �迭
//int arr3[2][3][4]; //���̰� 2, ���� ���̰� 3, ���� ���̰� 4�� 3���� �迭

//int main()
//{
//	int arr[2][3] =
//	{
//		{1, 2, 3},{4, 5, 6}
//	};
//	//�迭�� ��� ��� ���
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	// �迭�� ��Ұ��� ��� 10���� ����
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			arr[i][j] = 10;
//		}
//	}
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

// ������ �迭 �μ�

//#define C���� ��ó���� ���ù��̴�. 
// ������ ���� ������ �����Ǹ� �ַ� ���, ��ũ�� �Լ� ���� �����ϴµ� ����Ѵ�.
//#define years 3
//#define products 5
//
//int sum(int grade[][products])
//{
//	int total = 0;
//	for (int i = 0; i < years; i++)
//	{
//		for (int j = 0; j < products; j++)
//		{
//			total += grade[i][j];
//		}
//	}
//	return total;
//}
//
//int main()
//{
//	int sales[years][products] = { {1, 2, 3,4, 5},{ 6, 7, 8, 9 , 10},{11,12 , 13, 14, 15 }
//};
//	int total_sale;
//	total_sale = sum(sales);
//	printf("�� ������ : %d", total_sale);
//}

//���� : �� �б��� 3���̸� �� �л����� �� �ݸ��� 5�� �ֽ��ϴ�.
// �� �л����� ������ 0������ �����ؼ� 14������ �ֽ��ϴ�.
// �б��� ��� ������ �̰�. ��ü �л����� ��� ������ �̾ƺ��ÿ�.


//float avg(int row, int arr[][5])
//{
//	int sum = 0;
//	float avg;
//	printf("%d�� ��� ���� : ", row + 1);
//	for (int j = 0; j < 5; j++)
//	{
//		sum += arr[row][j];
//	}
//	avg = sum / 5.0;
//	return avg;
//}
//
//int main()
//{
//	int total_sum = 0;
//	int arr[3][5] = { { 0, 1, 2, 3, 4 }, { 5, 6, 7, 8, 9 }, { 10,11,12,13,14 } };
//
//	printf("1�� ��� ���� : ");
//	int c_sum = 0;
//	for (int j = 0; j < 5; j++)
//	{
//		c_sum += arr[0][j];
//	}
//
//	float c_avg = c_sum / 5.0;
//	printf("%.2f\n", c_avg);
//
//	printf("2�� ��� ���� : ");
//	c_sum = 0;
//	for (int j = 0; j < 5; j++)
//	{
//		c_sum += arr[1][j];
//	}
//	
//	c_avg = c_sum / 5.0;
//	printf("%.2f\n", c_avg);
//
//	printf("3�� ��� ���� : ");
//	c_sum = 0;
//	for (int j = 0; j < 5; j++)
//	{
//		c_sum += arr[2][j];
//	}
//	
//	c_avg = c_sum / 5.0;
//	printf("%.2f\n", c_avg);
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			total_sum += arr[i][j];
//		}
//	}
//	float total_avg;
//	total_avg = total_sum / 15.0;
//	printf("�л� ��ü ��� ���� : %.2f", total_avg);
//
//}

//#define Class 3
//#define Students 5
//
//int main()
//{
//	int s[Class][Students] = {
//		{0, 1, 2,3 , 4},
//		{5, 6, 7, 8, 9},
//		{10,11,12,13,14}
//	};
//
//	int total_avg = 0;
//	for (int i = 0; i < Class; i++)
//	{
//		int avg = 0;
//		for (int j = 0; j < Students; j++)
//		{
//			avg += s[i][j];
//		}
//		printf("�б� %d�� ���� = %d\n", i + 1, avg / Students);
//		total_avg += avg;
//	}
//	printf("��ü �л����� ��� ���� = %d\n", total_avg / (Class * Students));
//}

// ���� 2 : Max_size�� 10�� �迭�� �ִ�. �� �迭 �ȿ� 1~10�� �����͸� ����ִ�. �迭 array���ٰ� ���� ��� ����غ���
//#define Max_size 10

//int main()
//{
//	int array[Max_size];
//	int i;
//	for (i = 0; i < Max_size; i++)
//	{
//		array[i] = i + 1;
//		printf("%d ", array[i]);
//	}
//	
//}

//int main()
//{
//	int a[Max_size] = { 1, 2, 3, 4, 5, 6, 7,8,9,10 };
//	int array[Max_size];
//	for (int i = 0; i < Max_size; i++)
//	{
//		array[i] = a[i];
//		printf("%d ", array[i]);
//	}
//}
//
//#define ROWS 3
//#define COLS 4
//
//int main()
//{
//	int matrix[ROWS][COLS];
//	int k = 1;
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS;j++)
//		{
//			matrix[i][j] = k;
//			printf("%d ", matrix[i][j]);
//			k++;
//		}
//		printf("\n");
//	}
//}
