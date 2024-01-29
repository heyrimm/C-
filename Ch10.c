//01 for문(기본)

//for문은 C언어에서 제공하는 반복문 중 하나로, 반복 횟수를 미리 정해놓고 반복을 수행하는 구조이다.

//for (초기식; 조건식; 증감식;)
//{
//	//조건이 참일 동안 수행할 코드
//}
//
//for문은 다음과 같이 동작한다.
//1. 초기식을 먼저 실행한다. 이때 초기식에서 선언된 변수는 for문의 블럭에서 사용될 수 있다.
//2. 조건식을 평가한다. 조건식이 참이면 반복문의 블록을 실행한다. 조건식이 거짓이면 반복문을 종료한다.
//3. 반복문의 블록을 실행한다.
//4. 증감식을 실행한다.
//5. 2번째 순서로 돌아가 조건식을 평가한다. 조건식이 참이면 반복문의 블록을 실행한다. 조건식이 거짓이면 반복문을 종료한다. 
//

//#include<stdio.h>
//int main()
//{
//	//탈출용 변수
//	//탈출용 조건식
//	//탈풀을 위한 연산식
//
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("Hello\n");
//		i++; //탈출을 위한 연산식
//	}
//
//}
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("i=%d\n", i);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 10; i++)
//	{
//		sum += i;
//	}
//	printf("1부터 10까지의 합 : %d\n", sum);
//}

//1번
//#include<stdio.h>
//int main()
//{
//	int N = 0, sum = 0;
//	printf("N 입력 : ");
//	scanf_s("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		sum += i;
//	}
//	printf("1부터 N까지의 합 : %d", sum);
//}

//2번 N의 구구단을 출력해라
//#include<stdio.h>
//int main()
//{
//	int N = 0;
//	printf("N 입력 : ");
//	scanf_s("%d", &N);
//	for (int i = 1; i <= 9; i++)
//	{
//		printf("%d X %d = %d\n", N, i, N * i);
//	}
//}

//3번
//#include<stdio.h>
//int main()
//{
//	for (int i = 2; i <= 9; i++)
//	{
//		printf("%d단\n", i);
//		for (int j = 1; j <= 9; j++)
//		{
//			printf("%d X %d = %d\n", i, j, i * j);
//		}
//	}
//}

//4번
//#include<stdio.h>
//int main()
//{
//	for (int i = 5; i >= 1; i--)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}	

//5. 1부터 100까지 수 중에서 홀수의 합과 짝수의 합을 출력
//#include<stdio.h>
//int main()
//{
//	int jjsum = 0, hsum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			jjsum += i;
//		}
//		else
//		{
//			hsum += i;
//		}
//	}
//	printf("짝수 합 : %d, 홀수 합 : %d", jjsum, hsum);
//}

//6. 1~100까지의 수 중 3과 5의 공배수 일때 FizzBuzz, 3의 배수일 떄는 Fizz 5의 배수일 때는 Buzz 그 외 수는
//그대로 출력

//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0 && i % 5 == 0) //3과 5의 공배수일 경우
//		{
//			printf("FizzBuzz\n");
//			continue;
//		}
//
//		if (i % 3 == 0)
//		{
//			printf("Fizz\n");
//		}
//		else if (i % 5 == 0)
//		{
//			printf("Buzz\n");
//		}
//		else
//		{
//			printf("%d\n", i);
//		}
//		
//	}
//}
//



