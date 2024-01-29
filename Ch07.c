//01 Switch(다중분기)
//프로그래밍에서 조건문 중 하나로, 조건에 따라 다른 코드를 실행할 때 사용된다.
//switch문에서는 하나의 변수에 대해 여러가지 조건을 나열하여 각 조건마다 실행할 코드를 지정한다.

//switch문의 구조
//switch (변수)
//{
//case 값1:
//	실행할 코드 1;
//	break;
//case 값2:
//	실행할 코드 2;
//	berak;
//
//default:
//	break;
//}

//case : if문이면서 else if문이기도 하다
//break : 해당 코드를 실행하고나서 멈추게 만든다.
//default : else문이다.(case에 대한 실행값이 아무것도 맞지 않을 시)

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("정수 입력 : ");
//	scanf_s("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("1 입력시 실행되는 코드 블럭\n");
//		break;
//	case 2:
//		printf("2 입력시 실행되는 코드 블럭\n");
//		break;
//	case 3:
//		printf("3 입력시 실행되는 코드 블럭\n");
//		break;
//	case 4:
//		printf("4 입력시 실행되는 코드 블럭\n");
//		break;
//	default:
//		printf("그 외 나머지 입력 시 실행되는 코드 블럭\n");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	printf("1~12입력 : ");
//	scanf_s("%d", &month);
//	switch (month)
//	{
//	case 1:
//		printf("31");
//		break;
//	case 2:
//		printf("28");
//		break;
//	case 3:
//		printf("31");
//		break;
//	case 4:
//		printf("30");
//		break;
//	case 5:
//		printf("31");
//		break;
//	case 6:
//		printf("30");
//		break;
//	case 7:
//		printf("31");
//		break;
//	case 8:
//		printf("31");
//		break;
//	case 9:
//		printf("30");
//		break;
//	case 10:
//		printf("31");
//		break;
//	case 11:
//		printf("30");
//		break;
//	case 12:
//		printf("31");
//		break;
//	default:
//		printf("잘못된 입력입니다.");
//		break;
//	}
//}

// 문제1. 두개의 숫자를 입력받아 첫번째 숫자가 두 번째 숫자보다 큰지, 작은지, 또는 같은지를 판단하는 프로그램을 만드시오
//#include<stdio.h>
//int main()
//{
//	int num1 = 0, num2 = 0;
//	printf("두 수 입력 : ");
//	scanf_s("%d%d", &num1, &num2);
//	if (num1 > num2)
//	{
//		printf("첫번째 수가 두번째 수보다 큼");
//	}
//	else if (num1 == num2)
//	{
//		printf("첫번째 수와 두번째 수가 같음");
//	}
//	else
//	{
//		printf("첫번째 수가 두번째 수보다 작음");
//	}
//
//	return 0;
//}
// 
//문제2. 세개의 숫자를 입력받아 가장 큰 숫자를 찾아 출력하는 프로그램을 작성하시오.
//#include<stdio.h>
//int main()
//{
//	int num1 = 0, num2 = 0, num3 = 0;
//	printf("세 수 입력 : ");
//	scanf_s("%d%d%d", &num1, &num2, &num3);
//	
//	if (num1 >= num2 && num1 >= num3)
//	{
//		printf("가장 큰 수는 %d", num1);
//	}
//
//	else if (num2 >= num1 && num2 >= num3)
//	{
//		printf("가장 큰 수는 %d", num2);
//	}
//
//	else 
//	{
//		printf("가장 큰 수는 %d", num3);
//	}
//	
//	
//}

//
//#include<stdio.h>
//int main()
//{
//	int num1, num2, num3;
//	printf("세 개의 숫자를 입력하세요 : ");
//	scanf_s("%d%d%d", &num1, &num2, &num3);
//
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//		{
//			printf("num1이 가장 큼");
//		}
//		else //num1>num2 && num1 < num3
//		{
//			printf("num3이 가장 큼");
//		}
//	}
//	else //num1 < num2
//	{
//		if (num2 > num3) //num1<num2&&num2>num3
//		{
//			printf("num2가 가장큼");
//		}
//		else //num1<num2&&num2<num3
//		{
//			printf("num3이 가장 큼");
//		}
//	}
//
//}