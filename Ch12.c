// 만약에 학생이 5명 있다. 그런데 이들의 평균 성적을 계산해보자

//#include<stdio.h>
//int main()
//{
//	int sum = 0, score = 0;
//	float avg = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("성적 입력 : ");
//		scanf_s("%d", &score);
//		sum += score;
//	}
//	avg = (float)sum/5;
//	printf("평균 : %f", avg);
//}

// 배열(array)
// 배열이란 : 동일한 타입의 데이터가 여러개 저장되어있는 데이터 저장 장소(구조)
// 배열 안에 들어있는 각각의 데이터들은 정수로 되어있는 번호(첨자)에 의하여 접근
// 배열을 이용하면 여러 개의 값을 하나의 이름으로 처리할 수 있다. 

// 인덱스 : 배열 원소의 번호
// 
// data_type array_name[array_size];

//int arr[5] //크기가 5인 int형 배열 arr 정의

// 배열은 인덱스(index)를 사용하여 각 요소에 접근이 가능하다. 인덱스는 0부터 시작하여 배열의 크기보다 작아야 한다. 

// arr[0] = 10; //arr의 첫번째 요소에 10을 저장한다.
// arr[1] = 20; //arr의 두번째 요소에 20을 저장한다.

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 10, 20, 30, 40, 50 }; //요소 5개를 가지는 int형 배열
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}

// 배열의 선언
// int grade[10]
// int : 자료형, grade(배열이름) [10](배열크기)
// 자료형 : 배열 원소(타입)이 int형이라는 것을 의미
// 배열 이름 : 배열을 사용할 때 사용하는 이름이 grade
// 배열 크기 : 배열의 원소의 개수가 10
// ★인덱스 (배열 번호)는 항상 0부터 시작한다.

//#include<stdio.h>
//int main()
//{
//	int grade[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &grade[i]);
//	}
//	printf("==========\n");
//	printf("인덱스			값\n");
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
//		printf("학생들의 성적을 입력하세요 : ");
//		scanf_s("%d", &grade[i]);
//		sum += grade[i];
//	}
//	average = sum / 5;
//	printf("평균 성적 : %d", average);
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 0, }; //크기가 10인 int형 배열을 선언, 모든 요소를 0으로 초기화
//	double arr2[5]; 
//	char arr3[7] = "hello";
//	int arr4[6] = { 1, 2, 3, 4, 5, 6 }; //크기가 6인 int형 배열을 순서대로 초기화
//	int arr5[8] = { 1, 2, 3, 4, 5, 6, 7, 8 }; //
//	for (int i = 0; i < 5; i++)
//	{
//		printf("수 입력 : ");
//		scanf_s("%lf", &arr2[i]); //사용자로부터 값을 입력받아 arr의 요소에 저장
//	}
//	/*for (int i = 0; i < 10; i++)
//	{
//		printf("%d", arr1[i]);
//	}*/
//}

// 문제 : 배열 요소들 중에서 최솟값을 찾는 프로그램을 만드시오
//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 10, 5, 7, 3, 8 };
//	int min = arr[0]; //배열의 첫번째 값을 최소값으로 초기화
//	for (int i = 0; i < 5; i++)
//	{
//		if (min >= arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	printf("배열에서 가장 작은 값 : %d\n", min);
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
//	printf("배열에서 가장 작은 값 : %d\n", min);
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
//		printf("정수 입력 : ");
//		scanf_s("%d", &sum5[i]);
//		sum += sum5[i];
//	}
//	printf("총합은 %d", sum);
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


//배열에서 측정한 값을 찾아 그 위치를 출력하는 프로그램
//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 2, 5, 8, 1, 3 };
//	int fval = 0, find = 0;
//	printf("찾을 값을 입력하세요 : ");
//	scanf_s("%d", &fval);
//	for (int i = 0; i < 5; i++)
//	{
//		if (fval == arr[i])
//		{
//			printf("%d는 %d번째에 있습니다.", fval, i + 1);
//			find = 1;
//			break;
//		}
//		/*if (i == 4)
//		{
//			printf("찾는 값이 없습니다.");
//		}*/
//	}
//	if (!find) //찾는 값이 배열에 없는 경우
//	{
//		printf("배열에 없습니다.\n")
//	}
//}