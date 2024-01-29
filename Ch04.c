// 01 정수값 받기

//#include<stdio.h>
//int main()
//{
//	int n1, n2 = 0;
//	printf("정수 1, 2 입력 >>> ");
//	scanf_s("%d%d", &n1,&n2); //값은 스페이스바 혹은 엔터키를 기준으로 다음값 확인
//	// scanf_s : 표준입력장치(보통 키보드)로부터 프로그램 방향으로 값을 받을 때 사용
//	// "%d" : 정수 서식에 맞게 값을 받겠다.
//	// &(참조연산자, 주소연산자) : 공간의 주소값을 반환
//	// n1 : 변수명
//
//	printf("입력한 값 : %d %d\n", n1,n2);
//}

//문제
// 정수 3개를 한 번에 받아서 세수의 합, 곱, 차를 출력

//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	printf("세 수 입력 >>");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//	printf("합은 %d\n", num1 + num2 + num3);
//	printf("차는 %d\n", num1 - num2 - num3);
//	printf("곱은 %d\n", num1 * num2 * num3);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char name[10];
//	int age;
//	char gender;
//	char addr[100];
//
//	printf("이름을 입력하세요 : ");
//	scanf("%s", name);
//	printf("나이를 입력하세요 : ");
//	scanf("%d", &age);
//
//	printf("성별을 입력하세요 : ");
//	scanf(" %c", &gender);
//
//	printf("주소를 입력하세요 : ");
//	scanf("%s", addr);
//
//	
//	printf("1. 이름 : %s\n", name);
//	printf("2. 나이 : %d세\n", age);
//	printf("3. 성별 : %c\n", gender);
//	printf("4. 주소 : %s", addr);
//	
//}