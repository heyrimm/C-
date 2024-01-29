//01 산술연산자(+, -, *, /, %)

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a + b = %d\n",a+b);
//	printf("a - b = %d\n",a-b);
//	printf("a * b = %d\n",a*b);
//	printf("a / b = %d\n",a/b);
//	printf("a %% b = %d\n",a%b); //나머지를 구하는 연산자. %출력하고 싶으면 %% 두개 쓰기
//
//}

// 02 복합대입연산자(+=, -=, *=, /=)

//#include<stdio.h>
//int main()
//{
//	int a = 10, b = 20;
//	a += b; // a = a + b => a는 30이 됨
//	printf("a = %d\n", a);
//	a -= b; //a = a - b => a = 30 - 20 = 10
//	printf("a = %d\n", a);
//	a *= b; //a = a*b = 10 *20 = 200
//	printf("a = %d\n", a);
//	a /= b; //a = a/b = 200/20 = 10
//	printf("a = %d\n", a);
//}

// 03 비교연산자

// 참 : 0이 아닌 모든 값(대표값 1)
// 거짓 : 0 => 전류가 흐르지 X

//#include<stdio.h>
//int main()
//{
//	int a = 10, b = 20, c = 0;
//	printf("a == b? %d\n", a == b); //a는 b랑 같은가? 0
//	printf("a > b? %d\n", a > b);   //0
//	printf("a >= b? %d\n", a >= b); //0
//	printf("a < b? %d\n", a < b);   //1
//	printf("a <= b? %d\n", a <= b); //1
//	printf("a != b? %d\n", a != b); // ! : not 연산자, 반대 ex)참 => 거짓, 거짓 => 참 1
//
//	return 0;
//
//}

// 04 논리연산자

//#include<stdio.h>
//int main()
//{
//	//AND연산자(&&)
//	//1. 왼쪽의 조건식이 거짓이면 오른쪽 조건식을 평가하지 않는다. 
//	//2. "&&" 연산자는 일반적으로 "||" 연산자보다 우선순위가 높다.
//	//3. "&&" 연산자의 결과는 논리값(참 또는 거짓)
//	
//	/*int a = 10, b = 20;
//	printf("a > 10 && a > 20 ? %d\n", a > 10 && a > 20);
//	printf("a == 10 && a < 20? %d\n", a == 10 && a < 20);*/
//
//	//OR 연산자(||)
//	// 1. 둘 중 하나만 맞아도 참을 반환한다. 
//	int a = 5, b = 9;
//	printf("a == b || a < b? %d\n", a == b || a < b);
//
//	//NOT 연산자 (!)
//	printf("!참 ? %d\n", !10);
//	printf("!거짓 ? %d\n", !0);
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("세 수를 입력 >> ");
//	scanf_s("%d%d%d", &a, &b, &c);
//
//	printf("a==b && a>10 && b>10? = %d\n", a == b && a > 10 && b > 10); 
//	printf("a > b && a!=0? = %d\n", a > b && a != 0); 
//	printf("a > 5 || b<10? = %d\n", a > 5 || b < 10);
//	printf("a > b && a>c && a!=0? = %d", a > b && a > c && a != 0);
//
//}


// 05 증감연산자(++, --)
// 전치연산자(++a, --a) : 변수값을 1증가(혹은 1감소) 이후에 다른 연산 처리
// 후치연산자(a++, a--) : 다른 연산 처리 이후에 1증가(혹은 1감소)

//#include<stdio.h>
//int main()
//{
//	int a = 10, b = 20, c = 0, d = 0, e = 0;
//	c = ++a + ++b; // a = 11, b = 21 => c = 32
//	d = a++ + b++; // a + b를 해서 d에 저장한 다음, a에 +1, b에 +1 a = 12, b = 22, d = 32
//	e = ++a + b-- + ++c + d--;//a = 13, b = 21, c = 33, d = 31 // e = 13 + 22 + 33 + 32 = 100
//	printf("%d %d %d %d %d", a, b, c, d, e);
//	
//}

//06 응용 증감 연산자 + 논리연산자

//#include<stdio.h>
//int main()
//{
//	int a = 1, b = 1, c = 0, d = 5;
//
//	c = --a && b++; // a = 0, b = 1 //c = 0&&1 = 0 //b가 연산 후 2가 되지 않는 이유? and 연산이기때문에 앞에 --a가 이미 0이라 b++ 를 실행 XX
//	d = ++a && b++; // d = 1 && 1 = 1, a = 1, b = 2
//	//1 2 0 1
//	printf("%d %d %d %d", a, b, c, d);
//}

// 07 삼항연산자
// (조건식)참인경우 실행코드 : 거짓인 경우 실행코드

//#include<stdio.h>
//int main()
//{
//	int a = 40, b = 20;
//	(a > b) ? printf("큰 수 : %d\n", a) : printf("큰 수 : %d\n", b);
//	// 삼항연산자는 if문으로 대체
//}


// 짝수와 홀수 구분
// 키보드로 값을 입력받아서 삼항 연산자를 통해 받은 값이 짝수인지 홀수인지 출력


//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("정수 입력 : ");
//	scanf_s("%d", &a);
//  //1. 짝/홀수 구분
//	(a % 2 == 0) ? printf("짝수입니다.") : printf("홀수입니다");
//}
//


//#include<stdio.h>
//int main()
//{
//	int a=0;
//	printf("정수 입력 : ");
//	scanf_s("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("짝수입니다.");
//	}
//	else
//	{
//		printf("홀수입니다.");
//	}
//
//	return 0;
//}

//// 먼저 키보드로 값을 받아서 3의 배수가 맞는지, 아닌지를 확인하시오.
//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("정수 입력 : ");
//	scanf_s("%d", &a);
//	(a % 3 == 0) ? printf("a는 3의 배수입니다. ") : printf("a는 3의 배수가 아닙니다. ");
//}

//#include<stdio.h>
//int main()
//{
//	int n = 54321;
//
//	printf("오른쪽 끝한자리 = %d\n", n % 10);
//	printf("오른쪽 끝두자리 = %d\n", n % 100);
//	printf("오른쪽 끝세자리 = %d\n", n % 1000);
//	printf("오른쪽 끝네자리 = %d\n", n % 10000);
//
//	printf("================\n");
//
//	printf("왼쪽 끝 한자리 = %d\n", n / 10000);
//	printf("왼쪽 끝 두자리 = %d\n", n / 1000);
//	printf("왼쪽 끝 세자리 = %d\n", n / 100);
//	printf("왼쪽 끝 네자리 = %d\n", n / 10);
//
//}

//#include<stdio.h>
//int main()
//{
//	int n = 54321; int j = 0;
//	for (int i = 10; i <= 10000; i *= 10)
//	{
//		j = j + 1;
//		printf("오른쪽 끝%d자리 = %d\n", j, n % i);
//
//	}
//
//	j = 0;
//	printf("================\n");
//
//	for (int k = 10000; k >= 10; k /= 10)
//	{
//		j = j + 1;
//		printf("왼쪽 끝%d자리 = %d\n", j, n / k);
//	}
//}