//힙영역

//C언어에서 동적 메모리 할당을 위해 사용되는 메모리 영역
//프로그램 실행 시, 컴파일러는 힙 영역에 메모리 공간을 동적으로 할당하고, 이를 프로그램에서
//사용할 수 있도록 한다.
//동적 메모리 할당을 이용하면, 프로그램의 실행 시간에 메모리 공간을 할당하고 해제할 수 있다.
//이는 프로그램의 유연성을 높이고, 메모리 사용량을 효율적으로 관리할 수 있도록 한다.
//힙 영역은 데이터의 크기에 제한이 없기 때문에 대용량 데이터의 처리 등에 유용하게 사용
//하지만 메모리 누수(memory leak)같은 문제가 발생할 가능성이 있기 때문에 주의해서 사용

#include<stdio.h>
//char* getString(char*str)
//{
//	
//	printf("좋아하는 과일은?");
//	fgets(str,100,stdin);
//	return str;
//}
//int main()
//{
//	char str[100];
//	char* result = getString(str);
//	printf("좋아하는 과일은? : %s", result);
//}
//#include<stdlib.h>
//char* getString(void)
//{
//	char* str = (char*)malloc(100 * sizeof(char));
//	printf("좋아하는 과일은?");
//	fgets(str, 100, stdin);
//	return str;
//}
//int main()
//{
//	char* result = getString();
//	printf("좋아하는 과일은? : %s", result);
//}

//#include<stdio.h>
//int ar()
//{
//	return 5;
//}
//int main()
//{
//	int a;
//	a = ar();
//	printf("%d", a);
//}

