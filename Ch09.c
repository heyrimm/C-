// 01 break;
// 반복문 탈출에 사용 or switch의 case 탈출에 사용

//#include<stdio.h>
//int main()
//{
//	int temp = 0;
//	int sum = 0;
//	while (1)
//	{
//		printf("값 입력(만약 -1을 만나면 종료) : ");
//		scanf_s("%d", &temp);
//		if (temp == -1)
//		{
//			break;
//		}
//		sum += temp;
//	}
//	printf("누적 합 : %d", sum);
//}

//02 중첩 while문 전체 벗어나기
// 5 X 5 = 25까지만 출력하기 나머지는 출력 X
// flag값 + if 사용해서 벗어나기
//#include<stdio.h>
//int main()
//{
//	int dan = 2;
//	int i = 1;
//	int flag = 0;//반복 중에 사용하는 값
//	while (dan <= 9)
//	{
//		i = 1;
//		while (i <= 9)
//		{
//			printf("%d * %d = %d\n", dan, i, dan * i);
//			if (dan == 5 && i == 5)
//			{
//				flag = 1;
//				break;
//			}
//			i++;
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//		dan++;
//	}
//}

//03 continue;
// continue는 C언어에서 제공하는 제어문 중 하나로 반복문에서 사용된다. 
// continue를 만나면 현재 실행 중인 반복문의 나머지 부분을 건너뛰고, 다음 반복을 시작한다.

//1부터 10까지의 수 중에 3의 배수는 제외하고 출력
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i % 3 == 0)
//		{
//			i++;
//			continue;
//		}
//		printf("i = %d\n", i);
//		i++;
//	}
//}

//while문에서 continue와 break를 사용해 1부터 100까지 수 중 5의 배수만 더하고, 50을 넘어가면 반복문 중단.
//#include<stdio.h>
//int main()
//{
//	int i = 1, sum = 0;
//	while (i <= 100)
//	{	
//		if (i % 5 == 0)
//		{
//			sum += i;
//			if (sum > 50)
//			{
//				break;
//			}
//			printf("%d\n", sum);
//		}
//		i++;
//	}
//}

//강사쌤 코드
//#include<stdio.h>
//int main()
//{
//	int sum = 0, i = 1;
//	while (i <= 100)
//	{
//		if (i % 5 != 0)
//		{
//			i++;
//			continue;
//		}
//		sum += i;
//		printf("%d\n", i);
//		printf("더한 값(while문)%d\n", sum);
//		if (sum > 50)
//		{
//			break;
//		}
//		i++;
//	}
//	printf("더한 값 : %d\n", sum);
//}