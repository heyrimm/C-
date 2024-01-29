//(자료)형변환

//자동형변환(암시적형변환) : 컴파일러에 의해 자동형변환
//강제형변환(명시적형변환) : 프로그래머(개발자)에 의한 강제형변환

//01 자동형변환
//자료형 변환 시 데이터 손실 가능성이 낮을 때 컴파일러(컴퓨터, C언어 프로그램)

// 자동형변환 순서
// char < short < int < long <long long < float < double
// 
//#include 다 안쳐도 #in치고 #include 뜨면 탭 누르면 #include 됨
// int main

//#include<stdio.h>
//int main()
//{
//	short svar = 10;
//	int ivar = svar; //ivar 은 short형으로도 충분히 받을 수 o, 굳이 int로 받을 필요가 없 
//	printf("ivar = %d\n", ivar);
//
//	char cvar = 'a';
//	ivar = cvar; //자동형변환
//	printf("ivar = %d\n", ivar);
//
//	long long lvar = ivar;
//	printf("lvar = %d\n", lvar); // (주의) 자동형변환
//	
//	float fvar = lvar;
//	//printf("fvar = %d\n", fvar); // %d : 정수 서식을 받음 , %f : 실수 서식을 받는다. => 0이 출력됨
//	printf("fvar = %f\n", fvar);
//}

// 02 강제형변환
// 프로그래머에 의해 특정한 자료형으로 강제 형변환 시키는 경우
// 단점 : 데이터 손실 가능성이 높다.

//#include<stdio.h>
//int main()
//{
//	// int : -21억 ~ +21억까지 ㄱㄴ , short : 약 -32000 ~ +32000
//	int ivar = 50000;
//	short svar = (short)ivar;
//	char cvar = (char)ivar;
//	printf("svar = %d\n", svar);
//	printf("svar = %d\n", cvar);
//}

// 03 연산 시 자동(강제)형변환 (나눗셈)
//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	int div = 4;
//	double r1 = num / div;
//	double r2 = (float)num / div;
//
//	printf("r1 = %f\n", r1); //2.000
//	printf("r2 = %f\n", r2); //2.5
//
//}
