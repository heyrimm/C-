// : 주석 : 컴퓨터가 못읽음 (개발자만 읽을 수 있다.)

// 01 C언어 기본 구조

// 주석 : 블럭지정 ->  ctrl + k + c
//주석 해제 : 블럭지정 -> ctrl + k + u

//#include<stdio.h> //#include : 전처리문 (무엇을 추가하겠다.)
////					//<stdio.h> 헤더파일 (기본 입출력 함수호출용)
////					//standard input output
//
//int main(void)		//  main 함수 헤더
//{					// main 함수 본체가 시작됨.	
//	printf("Hello World"); //printf : C언어에서 제공하는 기본 라이브러리 함수
//	return 0;		// main  함수 종료 시 전달되는 값(리턴값)
//}					// main 함수 본체 끝

// main 함수 : 최초로 실행되는 함수 (특별한 함수) ★ main 함수는 하나만 존재해야 한다. 
// 라이브러리 함수 : 개발 편의를 위해 미리 만들어져 제공되는 함수
// 예 : printf() 모니터 출력 함수, scanf() : 키보드 입력 함수
// 사용자 정의 함수 : 프로그래머에 의해 제작된 함수 예) int a = 10;


// 02 ESCAPE 문자
// 기존 문자 용도인(정보 표시)에서 벗어나 특정기능 처리를 위해(제어 문자) 사용되는 특수 문자
// \를 앞에 붙여 특정 문자를 사용한다.
// \n 개행(줄바꿈, 줄내림)
// \b 백스페이스
// \a 알람픔(비프음)
// \r 캐리지 리턴(행의 처음으로 이동)
// \t 탭키만큼 커서 이동(8칸)

//#include<stdio.h>
//int main()
//{
//	printf("Hello World!\n");
//}

// 03 ESCAPE 문자

//#include<stdio.h>
//int main()
//{
//	printf("boy\tgirl");
//	printf("up\rdown");
//}

//1 줄바꿈 문자를 적절히 사용해서 3라인으로 끊어서 출력을 해보세요.

//#include<stdio.h>
//int main()
//{
//	printf("1번 문제\n");
//	printf("나의 이름은 박혜림입니다.\n");
//	printf("나는 21살이고\n");
//	printf("사는 곳은 달서구입니다.\n");
//	printf("\n");
// 
//	printf("2번 문제\n");
//	printf("제품코드 제품명 수량 단가\n");
//	printf("1010\t 노트북  10  100\n");
//	printf("2020\t 휴대폰  20  110\n");
//	printf("3030\t 태블릿  30  90");
//  return 0;
//}

/*다음과 같이 출력해보세요*/

