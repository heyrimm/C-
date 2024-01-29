#pragma warning(disable:4996)//보안취약점경고무시(4996번 오류)
#include<stdio.h>
#include<string.h>
// 문자열과 포인터

// 문자 표현방법

// 컴퓨터에서는 각각의 문자에 숫자코드를 붙여서 표시한다.
// 아스키코드(ASKII code) : 표준적인 8비트 문자코드
// 0 ~ 127까지의 숫자를 이용한 문자표현

// 유니코드(unicode) : 표준적인 16비트 문자코드
// 전세계의 모든 문자를 일관되게 표현하고 다룰 수 있도록 설계

// 문자 상수
//#include<stdio.h>
//int main()
//{
//	char code1 = 'A';
//	char code2 = 65;
//
//	printf("code1 = %c,code1 = %d\n", code1, code1);
//	printf("code2 = %c,code2 = %d", code2, code2);
//}

// 아스키코드 출력
//#include<stdio.h>
//int main()
//{
//	// 부호없는 (unsigned) 정수를 표현할 떄 사용되는 키워드
//	unsigned char code;
//
//	for (code = 0; code < 128; code++)
//	{
//		printf("아스키 코드 %d는 %c입니다.\n", code, code);
//	}
//}
//
//#include<stdio.h>
//int main()
//{
//	char good[5] = "Good";
//	char* bad = "good!";
//	printf("%s %s\n", good, bad);
//	
//
//	/*good[0] = 'H';
//	printf("%s", good);*/
//	/*good[] = "New good";*/ //배열기반 문자열은 새로운 주소값 할당이 불가능.
//	/*bad[0] = 's'*/;//불가능(실행은 되지만 값의 변화가 없고 예외처리됨. //포인터 기반 문자열은 개ㅕㄹ 요솟값이 할당 X
//	printf("%s", good);
//}

// 문자 입출력 라이브러리
//int getchar(void) : 하나의 문자를 읽어서 반환한다.
//void putchar(int c) : 변수 c에 저장된 문자를 출력한다.
//scanf("%c",&c) : 하나의 문자를 읽어서 변수 c에 저장한다.
//printf("%c",c) : 변수 c에 저장된 문자를 출력한다.

//#include<stdio.h>
//int main()
//{
//	int ch;
//	while (1)
//	{
//		ch = getchar();
//		if (ch == 'q')
//		{
//			break;
//		}
//		putchar(ch);
//	}
//}

// 문자열 단위 입출력 함수
//#include<stdio.h>
//int main()
//{
//	char str[10];
//	printf("문자열을 입력 : ");
//	fgets(str, 10, stdin);//fgets():문자열을 입력받음.
//	//stdin : 기본적으로 키보드 입력을 받아들이낟.
//	//10 ; 10자리까지만 허용(==10바이트까지)
//	puts(str);
//}

// 뮨자열 처리 함수
//#pragma warning(disable:4996)//보안취약점경고무시(4996번 오류)
//#include<stdio.h>
//#include<string.h> //c언어의 표준 라이브러리의 헤더 파일 중 하나다.

//string.h 주요함수

//strlen(str) : 인자로 전달된 주소의 문자열에서 NULL 문자를 제외한 문자열 길이를 반환
//strcpy(str1,str2) : 두번쨰 인자로 전달된 주소의 문자열을 첫번째 인자의 주소에 복사
//strncpy(str1,str2,count) : 두번째 인자로 전달된 주소의 문자열을 첫번쨰 인자의 주소에 복사하되 원하는 개수만큼만 복사.
//strcat(str1,str2) : 두번째 인자로 전달된 주소의 문자열을 첫번쨰 인자로 전달된 주소의 문자열에 이어 붙이기
//strcmp(str1,str2) : 인자로 전달된 두 문자열을 비교하여 내용이 같다면 0을 같지않으면 0이 아닌 값을 반환

//int main()
//{
//	//strcpy()함수는 c언어에서 문자열을 복사할 때 사용되는 함수
//
//	//strcpy 함수는 첫번쨰 인자로 전달된 문자열의 크기를 검사하지 않으므로, 복사할 문자열의 크기가 두번쨰 인자로 전달된
//	//문자열보다 크면 버퍼 오버플로우(overflow)가 발생할 수 있다. 
//
//	char src[] = "Hello world";
//	char dest[20];
//	strcpy(dest, src);
//	printf("복사된 문자열 : %s", dest);
//}
//int main()
//{
//	//strncpy()함수는 strcpy 함수와 다르게 복사할 문자열의 길이를 지정 O
//	//strncpy()함수는 두번째 인자로 전달된 문자열의 크기만큼만 문자열을 복사한다.
//	//단 버퍼 오버플로우를 방지할 수 있지만 복사한 문자열의 널 종단 문자 포함 X, 따라서 복사할 문자열 끝에 
//	//널 종단문자를 추가해줘야한다.
//
//	char src[] = "Hello world";
//	char dest[20];
//	strncpy(dest, src, sizeof(dest));//sizeof : 변수 또는 자료형의 크기를 반환
//	dest[sizeof(dest) - 1] = '\0'; //복사한 문자열의 끝에 널 종단 문자 추가
//	printf("복사된 문자열 : %s\n", dest);
//}

// 문자열 이어붙이기, 문자열 비교
//int main()
//{
//	char str1[50] = "Korea";
//	char str2[50] = "Korea";
//
//	//str1에 문자열 붙이기
//	strcat(str1, "IT");
//	printf("%s\n", str1);
//
//	//str2에 문자열 붙이기
//	strcat(str2, "COOK");
//	printf("%s\n", str2);
//
//	//str1과 str2를 비교
//
//	//strcmp : 문자열을 비교할 떄 사용되는 함수
//	printf("비교 결과 : %d\n", strcmp(str1, str2)); //0이면 같음, 0이 아니면 다름.
//}

//int main()
//{
//	char str1[20];
//	char str2[20];
//
//	printf("첫번째 문자열 입력 : ");
//	/*scanf_s("%s", str1,20);*/
//	fgets(str1, sizeof(str1), stdin);
//	printf("두번쨰 문자열 입력 : ");
//	/*scanf_s("%s", str2,20);*/
//	fgets(str2, sizeof(str2), stdin);
//	int tr = strcmp(str1, str2);
//	if (tr == 0)
//	{
//		printf("두 문자열은 같습니다.");
//	}
//	else
//	{
//		printf("두 문자열은 다릅니다.");
//	}
//}

//1. 조거눈을 사용하여 정수를 입력받아 양수 음수 0 중 어느것인지 확인하는 프로그램
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("수 입력 : ");
//	scanf_s("%d", &a);
//
//	if (a == 0)
//	{
//		printf("입력한 정수는 0");
//	}
//	else if (a < 0)
//	{
//		printf("입력한 정수는 음수");
//	}
//	else
//	{
//		printf("입력한 정수는 양수");
//	}
//}

//2반복문을 사용하여 1부터 10까지의 합을 구해
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i < 11; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//}
//
//3. 1차원 배열을 사용하여 5개 정수를 키ㅗ드로 입력받고 함을 구해라
//#include<stdio.h>
//int main()
//{
//	int arr[5];
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("정수 입력 : ");
//		scanf_s("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%d", sum);
//}

//4. 포인터를 사용하여 두개의 정수를 입력받아 그 합과 차를 구하는 프로그램을 작성해라
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	int* pa;
//	int* pb;
//	pa = &a;
//	pb = &b;
//	printf("두 수 입력 : ");
//	scanf_s("%d%d", pa, pb);
//	printf("두 수의 합 : %d", *pa + *pb);
//	printf("두 수의 차 : ");
//	/*if (*pa > *pb)
//	{
//		printf("%d", *pa - *pb);
//	}
//	else
//	{
//		printf("%d", *pb - *pa);
//	}*/
//	int temp;
//	if (b > a)
//	{
//		temp = b;
//		b = a;
//		a = temp;
//	}
//	printf("%d", *pa - *pb);
//}

