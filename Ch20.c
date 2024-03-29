// C 언어의 메모리 구조

// 프로그램을 실행하면 운영체제는 메모리 공간을 마련한다.
// 메모리 공간은 효율적인 관리를 위해 유형과 목적에 따라 구분.

// 코드 영역 : 코드 영역은 프로그램의 코드를 저장하는 메모리 공간이다.
// 프로그램이 실행될 때 컴퓨터의 중앙처리장치(CPU)는 영역에 있는 코드를 정해진 순서대로 실행한다.
// (위에서부터 밑으로) (절차지향)

// 데이터 영역(전역 변수 영역) : 변수를 위해 할당되는 공간이다. 프로그램 시작과 동시에 메모리 공간에
// 할당된다. 프로그램이 종료될 때까지 사용가능한 상태를 유지한다. 프로그램 어디에서든 접근이 가능하다.

// 스택 영역 : 변수를 위해 할당되는 공간이다. 스택 영역에는 지역 변수와 함께 전달되는 인자가 저장된다.
// 함수 호출과 관련된 지역변수, 매개변수, 반환값, 반환주소 및 함수 호출에 필요한 다른 정보가 저장된다.

// 힙 영역 : (Heap)

// 프로그램에서 동적으로 할당된 메모리가 저장된다.
// 힘은 프로그램에서 필요한만큼 메모리를 동적으로 할당하고 해제할 수 있다.
// 일반적으로 메모리 누수와 같은 문제를 방지하기위해 힙에서 할당한 메모리는 반드시 
// 프로그램에서 해제해야 한다.

//1.

//#include<stdio.h>
//int addNum(int a, int b)
//{
//	int sum = a + b;
//	return sum;
//}
//int main()
//{
//	int num1 = 3;
//	int num2 = 5;
//	int result = addNum(num1, num2);
//	printf("결과 : %d", result);
//	return 0;
//}
// 
// num1과 num2는 main()내에 선언된 지역변수 a와 b는 addNum함수 내에 선언된 매개변수이다.
// 또한 sum은 addNum함수 내에서 선언된 지역변수이다.

//숙제 : 정수 num1,num2가 매개변수로 주어질 떄 num1을 num2로 나눈 몫을 
//return하도록 solution함수 완성해라
//0<num1<=100,0<num2<=200

//#include<stdio.h>
//int solution(int num1, int num2);
//int main()
//{
//	int ans, us1, us2;
//	printf("두 수 입력 : ");
//	scanf_s("%d%d", &us1, &us2);
//	ans = solution(us1, us2);
//	printf("%d를 %d로 나눴을 때 몫 : %d", us1, us2, ans);
//}
//int solution(int num1, int num2)
//{
//	int ans = 0;
//	ans = num1 / num2;
//	return ans;
//}