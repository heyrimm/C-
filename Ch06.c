// if문
// 조건문을 작성할 때 사용하는 구문이다. if문은 특정 조건이 참(True)인 경우에만 코드 블럭을 실행하고
// 조건이 거짓(False)인 경우 해당 코드 블럭을 건너뛰게 된다.

//if (조건식)
//{
//	//조건이 참인 경우 실행되는 코드 블럭
//}
//
////여기서 조건식은 참 또는 거짓을 판단할 수 있는 식이다. 조건식이 참이면 if문의 코드 블럭이 실행되며,
////조건식이 거짓이면 if문의 코드 블럭을 건너뛰게 된다. 
//
////if문은 또한 else문을 사용하여, 조건이 거짓인 경우에 실행할 코드 블럭도 지정할 수 있다.
//
//if (조건식)
//{
//	// 조건이 참인 경우 실행되는 코드 블럭
//}
//else
//{
//	// 조건이 거짓인 경우 실행되는 코드 블럭
//}

//if문은 중첩하여 사용이 가능해진다. 이 경우에 조건식에 따라 다양한 코드 블럭이 실행된다.
//if (조건식)
//{
//	//조건이 참인 경우 실행되는 코드 블럭
//	if (조건식 2)
//	{
//		//조건식 1과 2가 모두 참인 경우 실행되는 코드 블럭이 된다. 
//	}
//}
//
//else
//{
//	//조건이 거짓인 경우 실행되는 코드 블럭
//}

// 01 if 기본

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("정수를 입력하세요 >>> ");
//	scanf_s("%d", &num);
//	if (num % 2 == 0)
//	{
//		printf("%d는 짝수입니다. ", num);
//	}
//	
//	if (num % 2 == 1) //홀수냐
//	{
//		printf("%d는 홀수입니다. ", num);
//	}
//	//else //num%2==1
//	//{
//	//	printf("%d는 홀수입니다. ", num);
//	//}
//}

//02 문제
// 두 정수를 입력받아 두 수의 합이 짝수면 "두 수의 합이 짝수입니다."
//홀수면 "두 수의 합은 홀수입니다.
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("두 수 입력 : ");
//	scanf_s("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	if (sum % 2)
//	{
//		printf("홀수입니다.");
//	}
//	else
//	{
//		printf("짝수입니다.");
//	}
// return 0;
//}

//03
/*
정수값 하나를 입력받아 그 수가 num>=1 && num<=10이면 "정상범위의 값 입력!"을 출력, 아니면 잘못된 값을 입력하셨습니다. */
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("정수 입력 : ");
//	scanf_s("%d", &num);
//	if (num >= 1 && num <= 10)
//	{
//		printf("정상범위의 값 입력!");
//	}
//	else
//	{
//		printf("잘못된 값을 입력하셨습니다.");
//	}
// return 0;
//}


/*04 IF문 중첩
짝수이;면서 3의 배수이면 출력
홀수면서 5의 배수면 출력
*/
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("정수 입력 : ");
//	scanf_s("%d", &num);
//	if (num % 2 == 0)
//	{
//		if (num % 3 == 0)
//		{
//			printf("%d", num);
//		}
//	}
//	else
//	{
//		if (num % 5 == 0)
//		{
//			printf("%d", num);
//		}
//	}
//
//}


/*05
3의 배수면서 4의 배수라면 num은 3의 배수면서 4의배수 출력
3의 배수가 아니면서 5의 배수도 아니라면 num은 3의 배수도 아니며서 5의 배수도 아님!을 출력*/
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("정수 입력 : ");
//	scanf_s("%d", &num);
//
//	if (num % 3 == 0)
//	{
//		if (num % 4 == 0)
//		{
//			printf("%d는 3의 배수면서 4의 배수", num);
//		}
//	}
//	else
//	{
//		if (num % 5 != 0)
//			printf("%d는 3의 배수도 아니면서 5의 배수도 아님!", num);
//
//	}
//}

// 04 else-if //다중분기
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	printf("나이 입력 : ");
//	scanf("%d", &age);
//	/*순차실행*/
//	if (age >= 20)
//	{
//		printf("성인\n");
//	}
//	else if (age >= 8)
//	{
//		printf("취학아동\n");
//	}
//	else
//	{
//		printf("미취학아동\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	printf("성적 입력 : ");
//	scanf_s("%d", &score);
//	if (score >= 90)
//	{
//		printf("A학점");
//	}
//	else if (score >= 80)
//	{
//		printf("B학점");
//	}
//	else if (score >= 70)
//	{
//		printf("C학점");
//	}
//	else if (score >= 60)
//	{
//		printf("D학점");
//	}
//	else
//	{
//		printf("불합격");
//	}
//}

//#include<stdio.h>
//
//int main()
//{
//	int kor = 0;
//	int eng = 0;
//	int mat = 0;
//	int sum = 0;
//	float avg = 0;
//	printf("국어 영어 수학 점수 입력 : ");
//	scanf_s("%d%d%d", &kor, &eng, &mat);
//	sum = kor + eng + mat;
//	avg = sum / 3.0;
//	printf("%f\n", avg);
//	if (kor >= 40 && eng >= 40 && mat >= 40)
//	{
//		if (avg >= 60)
//		{
//			printf("합격");
//		}
//		else
//		{
//			printf("불합격");
//		}
//	}
//	else
//	{
//		printf("불합격");
//	}
//}