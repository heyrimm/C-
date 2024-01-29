// 구조체

// 구조체 -> 자바의 클래스, 파이썬의 클래스, C++

// 구조체 : 하나 이상의 변수를 한꺼번에 묶어서 만드는 '새로운 유형의 자료형'
// 구조체를 구성하는 각 변수는 각각의 메모리 공간을 할당받지만, 이것들은 구조체에 소개있어 
// 모두 하나의 정보를 표현하는 구조체 멤버로서 역할을 수행한다.

//struct 구조체 이름;
//{
//	데이터 타입 멤버1 이름;
//	데이터 타입 멤버2 이름;
//};
//
//구조체 이름은 새로 만들어질 구조체의 이름이며, 멤버 이름응ㄴ 구조체 내부에 있는 변수들의 이름이다.
//
//struct Person
//{
//	char name[20];
//	int age;
//	float height;
//};
//
//구조체를 선언할 떄는 다음과 같이 변수명을 지정하면서 선언한다.
//struct Person p1; //Person 구조체 타입의 변수 p1 선언
//
// p1 변수는 Person 구조체의 멤버인 name, age, height 각각 가지게 된다.
// 이 멤버들에 접근할 떄는 .연산자를 사용
//
//strcpy(p1.name, "John");
//


#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996);

//struct Person
//{
//	char name[20];
//	int age;
//	float height;
//};
//
//int main()
//{
//	struct Person p1;//Person 구조체 타입의 변수 p1 선언
//	strcpy(p1.name, "Koreait");
//	p1.age = 25;
//	p1.height = 175.5;
//
//	printf("%s", p1.name);
//	printf("%d", p1.age);
//	printf("%.1f", p1.height);
//
//	struct Person people[3];
//	strcpy(people[0].name, "코리아");
//	people[0].age = 30;
//	people[0].height = 180.0;
//
//	strcpy(people[1].name, "IT");
//	people[1].age = 30;
//	people[1].height = 180.0;
//
//	strcpy(people[2].name, "대구");
//	people[2].age = 30;
//	people[2].height = 180.0;
//
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("name ; %s\n", people[i].name);
//		printf("age ; %d\n", people[i].age);
//		printf("height ; %f\n", people[i].height);
//	}
//}

//struct person
//{
//	char name[30];
//	int age;
//};
//
//int main()
//{
//	//구조체 변수 선언과 동시에 초기화
//	struct person boy = { "김소년",12 };
//	struct person girl = { "이소녀",9 };
//
//	printf("소년의 이름은 %s이고 나이는 %d입니다.\n", boy.name, boy.age);
//	printf("소녀의 이름은 %s이고 나이는 %d입니다.", girl.name, girl.age);
//}

//문제 구조체 student 이름 학번 점수가 있습니다. 구조체를 사용하여 이름, 학번, 점수를 담으시오

//struct student
//{
//	char name[30];
//	int stdnum;
//	float score;
//};
//
//int main()
//{
//	struct student rim = { "박혜림",2023019,100.0 };
//	printf("입력한 학생 정보\n");
//	/*scanf_s("%s", &rim.name);
//	scanf_s("%d", &rim.stdnum);
//	scanf_s("%f", &rim.score);*/
//
//
//	printf("이름 : %s\n", rim.name);
//	printf("학번 : %d\n", rim.stdnum);
//	printf("점수 : %f", rim.score);
//}