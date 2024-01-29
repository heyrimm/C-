//반복문
// 프로그램에서 반ㅂ목적으로 실행되는 코드를 작성할 때 사용한다.

// 1.while문

//조건이 참인 동안 반복적으로 코드를 실행합니다. while문의 구조는 다음과 같다.

//while (조건식)
//{
//	//반복적으로 실행될 코드 예) 조건이 참이면 반복적으로 실행할 코드를 실행하고, 조건이 거짓이면 반복문을 종료한다.
//}

//#include<stdio.h>
//int main()
//{
//	//탈출용 변수
//	//탈출용 조건식
//	//탈출을 위한 연산식
//
//	int i = 1; //탈출용 변수
//	while (i <= 10)
//	{
//		printf("Hello\n");
//		i++; //탈출을 위한 연산식
//	}
// 
//}

//02 1부터 10까지의 합 구하기
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
//	printf("while문 종료 이후 i= %d", i);
//	printf("1부터 10까지의 합 : %d", sum);
//}

//키보드로부터 숫자 하나 num 을 입력받아서 1부터 N까지의 합 구하기
//#include<stdio.h>
//int main()
//{
//	int num = 0, sum = 0;
//	printf("숫자 하나 입력 : ");
//	scanf_s("%d", &num);
//	int i = 1;
//	while (i <= num)
//	{
//		sum += i;
//		i++;
//	}
//	printf("답은 : %d", sum);
//}

//구구단 출력하기 : 2단만
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
//구구단수 하나를 입력받아 구구단 출력
//#include<stdio.h>
//int main(void)
//{
//	int num = 0, i = 1;
//	printf("숫자 입력 : ");
//	scanf_s("%d", &num);
//	while (i <= 9)
//	{
//		printf("%d * %d = %d\n", num, i, num * i);
//		i++;
//	}
//}


//i가 11이 아니게 하도록
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
//	printf("while문 종료 이후 i= %d", i);
//	printf("1부터 10까지의 합 : %d", sum);
//}

//break 문이 실행되면 가장 가까운 "반복문의 블록"을 빠져나가게 됩니다.


//1부터 10까지 수중에 짝수끼지 홀수끼리 합 구하기
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
//	printf("짝수끼리의 합 : %d\n", jjsum);
//	printf("홀수끼리의 합 : %d", hsum);
//}

// 전체 구구단
//2딘 ~9단까지 출력 1번

//#include<stdio.h>
//int main()
//{
//	int i = 2;
//	while (i <= 9)
//	{
//		int j = 1;
//		printf("===%d단===\n", i);
//		while (j <= 9)
//		{
//			printf("%d X %d = %d\n", i, j, i * j);
//			j++;
//		}
//		i++;
//	}
//}

//구구단 역순 출력
//#include<stdio.h>
//int main()
//{
//	int i = 9;
//	while (i >= 2)
//	{
//		printf("%d단\n", i);
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

//문제 높이를 입력받아 높이 만큼의 삼각형 출력
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("삼각형 높이 입력 : ");
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
//	printf("삼각형 높이 입력 : ");
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
//	printf("삼각형 높이 입력 : ");
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
////강사님코드
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("삼각형 높이 입력 : ");
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


