//typedef ������ ������ �����ϴ� �ڷ����� �� �̸��� �ο��ϴ� ������ 
// ������ ������ �ڷ��� ������ �����ϰ� ���ش�.

//typedef int myint;

//myint�� int�� ������ ���� ������ Ÿ������ ����Ѵ�. int�� ���� �� �ִ� ��� ������ myint�� ��� ����

//#include<stdio.h>
//typedef int INT;
//typedef int* PINT;
//typedef unsigned int UINT;
//
//int main()
//{
//	//���� ������ ����� �ڷ��� �̸��� ���� ����
//	typedef char CHAR;
//	typedef char* STR;
//
//	//typedef ���� ���� �ڷ����� ���� �ڷ����� ������ ���� ����
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
////typedef Ű���带 ����Ͽ� struct {int x; int y;��� ����ü�� Point��� ���ο� ������ Ÿ������ ����.
////���� Point�� ����ü�� ������ ����� �����ϸ�, ��ǥ���� �����ϴ� �뵵�� ���
//
//#include<stdio.h>
//int main()
//{
//	Point p = { 3,4 };
//	printf("%d %d", p.x, p.y);
//}

//Point�� ������ �����ϰ� �ʱ�ȭ�ϰ� ����ϴ� �ڵ�
//p������ Point ������ Ÿ������ ����Ǿ� ������, �ʱⰪ���� {3,4}�� �Ҵ��Ѵ�.

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
//	PERSON human = { "�ڸ���",15 };
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
////.Person ����ü�� ����� 3���� ��� ������ �����ϴ� �迭�� ����� ����ϴ� ���α׷� �ۼ�
//int main()
//{
//	Person people[3];
//
//	strcpy(people[0].name, "��");
//	people[0].age = 21;
//	people[0].height = 163.5;
//	
//	strcpy(people[1].name, "��");
//	people[1].age = 21;
//	people[1].height = 163.5;
//
//	strcpy(people[2].name, "��");
//	people[2].age = 21;
//	people[2].height = 163.5;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("�̸� : %s\n", people[i].name);
//		printf("���� : %d\n", people[i].age);
//		printf("Ű : %f\n", people[i].height);
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
//	strcpy(people[0].name, "��");
//	people[0].age = 21;
//	people[0].height = 164.3;
//	people[0].id = 2023;
//
//	strcpy(people[1].name, "��");
//	people[1].age = 21;
//	people[1].height = 164.3;
//	people[1].id = 2023;
//
//	strcpy(people[2].name, "��");
//	people[2].age = 21;
//	people[2].height = 164.3;
//	people[2].id = 2023;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("�̸� : %s\n", people[i].name);
//		printf("���� : %d\n", people[i].age);
//		printf("Ű : %.2f\n", people[i].height);
//		printf("�й� : %d\n", people[i].id);
//		printf("==============================\n");
//	}
//}