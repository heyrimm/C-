//#include<stdio.h>
// 다차원 배열의 이해

// 다차원 배열은 2차원 이상의 배열을 의미한다. 1차원 배열과는 구조가 다르다.
// 실질적으로 사용하는 배열은 2차원, 3차원 배열이다.

//int arr1[10]; //가로 길이가 10인 1차원 배열
//int arr2[5][3]; //세로 길이가 5, 가로 길이가 3인 2차원 배열
//int arr3[2][3][4]; //높이가 2, 세로 길이가 3, 가로 길이가 4인 3차원 배열

//int main()
//{
//	int arr[2][3] =
//	{
//		{1, 2, 3},{4, 5, 6}
//	};
//	//배열의 모든 요소 출력
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	// 배열의 요소값을 모두 10으로 변경
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

// 다차원 배열 인수

//#define C언어에서 전처리기 지시문이다. 
// 컴파일 과정 이전에 생성되며 주로 상수, 매크로 함수 등을 정의하는데 사용한다.
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
//	printf("총 매출은 : %d", total_sale);
//}

//문제 : 각 학급은 3반이며 각 학생들은 각 반마다 5명씩 있습니다.
// 각 학생들의 성적은 0점부터 시작해서 14점까지 있습니다.
// 학급의 평균 성적을 뽑고. 전체 학생들의 평균 성적을 뽑아보시오.


//float avg(int row, int arr[][5])
//{
//	int sum = 0;
//	float avg;
//	printf("%d반 평균 성적 : ", row + 1);
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
//	printf("1반 평균 성적 : ");
//	int c_sum = 0;
//	for (int j = 0; j < 5; j++)
//	{
//		c_sum += arr[0][j];
//	}
//
//	float c_avg = c_sum / 5.0;
//	printf("%.2f\n", c_avg);
//
//	printf("2반 평균 성적 : ");
//	c_sum = 0;
//	for (int j = 0; j < 5; j++)
//	{
//		c_sum += arr[1][j];
//	}
//	
//	c_avg = c_sum / 5.0;
//	printf("%.2f\n", c_avg);
//
//	printf("3반 평균 성적 : ");
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
//	printf("학생 전체 평균 성적 : %.2f", total_avg);
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
//		printf("학급 %d의 성적 = %d\n", i + 1, avg / Students);
//		total_avg += avg;
//	}
//	printf("전체 학생들의 평균 성적 = %d\n", total_avg / (Class * Students));
//}

// 문제 2 : Max_size가 10인 배열이 있다. 이 배열 안에 1~10번 데이터를 담고있다. 배열 array에다가 수를 담고 출력해봐라
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
