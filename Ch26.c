//typedef 선언은 기존에 존재하는 자료형에 새 이름을 부여하는 것으로 
// 복잡한 유형의 자료형 선언을 간결하게 해준다.

//typedef int myint;

//myint는 int와 완전히 같은 데이터 타입으로 취급한다. int가 사용될 수 있는 모든 곳에서 myint도 사용 가능

//#include<stdio.h>
//typedef int INT;
//typedef int* PINT;
//typedef unsigned int UINT;
//
//int main()
//{
//	//지역 내에서 사용할 자료형 이름에 대한 선언
//	typedef char CHAR;
//	typedef char* STR;
//
//	//typedef 선언 이후 자료형은 기존 자료형과 동일한 역할 수행
//	INT num = 3;
//	PINT ptr = &num;
//	UINT unum = 5;
//
//	CHAR ch = 'c';
//	STR str = "Hello";
//
//	printf("%d %d %d", num, *ptr, unum);
//}

//typedef struct
//{
//	int x;
//	int y;
//}Point;
//
////typedef 키워드를 사용하여 struct {int x; int y;라는 구조체를 Point라는 새로운 데이터 타입으로 정의.
////이제 Point는 구조체와 동일한 기능을 수행하며, 좌표값을 저장하는 용도로 사용
//
//#include<stdio.h>
//int main()
//{
//	Point p = { 3,4 };
//	printf("%d %d", p.x, p.y);
//}

//Point를 변수로 선언하고 초기화하고 출력하는 코드
//p변수는 Point 데이터 타입으로 선언되어 있으며, 초기값으로 {3,4}를 할당한다.

//typedef struct person {
//	char name[30];
//	int age;
//};
//
//typedef struct person PERSON;
//
//int main()
//{
//	Point position = { 30,60 };
//	PERSON human = { "코리아",15 };
//	printf("%d %d\n", position.x, position.y);
//	printf("%s %d\n", human.name, human.age);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//typedef struct
//{
//	char name[50];
//	int age;
//	float height;
//
//}Person;
//
////.Person 구조체를 사용해 3명의 사람 정보를 저장하는 배열을 만들고 출력하는 프로그램 작성
//int main()
//{
//	Person people[3];
//
//	strcpy(people[0].name, "박");
//	people[0].age = 21;
//	people[0].height = 163.5;
//	
//	strcpy(people[1].name, "박");
//	people[1].age = 21;
//	people[1].height = 163.5;
//
//	strcpy(people[2].name, "박");
//	people[2].age = 21;
//	people[2].height = 163.5;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("이름 : %s\n", people[i].name);
//		printf("나이 : %d\n", people[i].age);
//		printf("키 : %f\n", people[i].height);
//	}
//
//}

//2. 
//#include<stdio.h>
//#include<string.h>
//#pragma warning(disable:4996)
//typedef struct
//{
//	char name[50];
//	int age;
//	float height;
//	int id;
//}Person;
//
//int main()
//{
//	Person people[3];
//
//	strcpy(people[0].name, "박");
//	people[0].age = 21;
//	people[0].height = 164.3;
//	people[0].id = 2023;
//
//	strcpy(people[1].name, "박");
//	people[1].age = 21;
//	people[1].height = 164.3;
//	people[1].id = 2023;
//
//	strcpy(people[2].name, "박");
//	people[2].age = 21;
//	people[2].height = 164.3;
//	people[2].id = 2023;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("이름 : %s\n", people[i].name);
//		printf("나이 : %d\n", people[i].age);
//		printf("키 : %.2f\n", people[i].height);
//		printf("학번 : %d\n", people[i].id);
//		printf("==============================\n");
//	}
//}