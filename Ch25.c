// ����ü

// ����ü -> �ڹ��� Ŭ����, ���̽��� Ŭ����, C++

// ����ü : �ϳ� �̻��� ������ �Ѳ����� ��� ����� '���ο� ������ �ڷ���'
// ����ü�� �����ϴ� �� ������ ������ �޸� ������ �Ҵ������, �̰͵��� ����ü�� �Ұ��־� 
// ��� �ϳ��� ������ ǥ���ϴ� ����ü ����μ� ������ �����Ѵ�.

//struct ����ü �̸�;
//{
//	������ Ÿ�� ���1 �̸�;
//	������ Ÿ�� ���2 �̸�;
//};
//
//����ü �̸��� ���� ������� ����ü�� �̸��̸�, ��� �̸����� ����ü ���ο� �ִ� �������� �̸��̴�.
//
//struct Person
//{
//	char name[20];
//	int age;
//	float height;
//};
//
//����ü�� ������ ���� ������ ���� �������� �����ϸ鼭 �����Ѵ�.
//struct Person p1; //Person ����ü Ÿ���� ���� p1 ����
//
// p1 ������ Person ����ü�� ����� name, age, height ���� ������ �ȴ�.
// �� ����鿡 ������ ���� .�����ڸ� ���
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
//	struct Person p1;//Person ����ü Ÿ���� ���� p1 ����
//	strcpy(p1.name, "Koreait");
//	p1.age = 25;
//	p1.height = 175.5;
//
//	printf("%s", p1.name);
//	printf("%d", p1.age);
//	printf("%.1f", p1.height);
//
//	struct Person people[3];
//	strcpy(people[0].name, "�ڸ���");
//	people[0].age = 30;
//	people[0].height = 180.0;
//
//	strcpy(people[1].name, "IT");
//	people[1].age = 30;
//	people[1].height = 180.0;
//
//	strcpy(people[2].name, "�뱸");
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
//	//����ü ���� ����� ���ÿ� �ʱ�ȭ
//	struct person boy = { "��ҳ�",12 };
//	struct person girl = { "�̼ҳ�",9 };
//
//	printf("�ҳ��� �̸��� %s�̰� ���̴� %d�Դϴ�.\n", boy.name, boy.age);
//	printf("�ҳ��� �̸��� %s�̰� ���̴� %d�Դϴ�.", girl.name, girl.age);
//}

//���� ����ü student �̸� �й� ������ �ֽ��ϴ�. ����ü�� ����Ͽ� �̸�, �й�, ������ �����ÿ�

//struct student
//{
//	char name[30];
//	int stdnum;
//	float score;
//};
//
//int main()
//{
//	struct student rim = { "������",2023019,100.0 };
//	printf("�Է��� �л� ����\n");
//	/*scanf_s("%s", &rim.name);
//	scanf_s("%d", &rim.stdnum);
//	scanf_s("%f", &rim.score);*/
//
//
//	printf("�̸� : %s\n", rim.name);
//	printf("�й� : %d\n", rim.stdnum);
//	printf("���� : %f", rim.score);
//}