// 01 ������ �ޱ�

//#include<stdio.h>
//int main()
//{
//	int n1, n2 = 0;
//	printf("���� 1, 2 �Է� >>> ");
//	scanf_s("%d%d", &n1,&n2); //���� �����̽��� Ȥ�� ����Ű�� �������� ������ Ȯ��
//	// scanf_s : ǥ���Է���ġ(���� Ű����)�κ��� ���α׷� �������� ���� ���� �� ���
//	// "%d" : ���� ���Ŀ� �°� ���� �ްڴ�.
//	// &(����������, �ּҿ�����) : ������ �ּҰ��� ��ȯ
//	// n1 : ������
//
//	printf("�Է��� �� : %d %d\n", n1,n2);
//}

//����
// ���� 3���� �� ���� �޾Ƽ� ������ ��, ��, ���� ���

//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	printf("�� �� �Է� >>");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//	printf("���� %d\n", num1 + num2 + num3);
//	printf("���� %d\n", num1 - num2 - num3);
//	printf("���� %d\n", num1 * num2 * num3);
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
//	printf("�̸��� �Է��ϼ��� : ");
//	scanf("%s", name);
//	printf("���̸� �Է��ϼ��� : ");
//	scanf("%d", &age);
//
//	printf("������ �Է��ϼ��� : ");
//	scanf(" %c", &gender);
//
//	printf("�ּҸ� �Է��ϼ��� : ");
//	scanf("%s", addr);
//
//	
//	printf("1. �̸� : %s\n", name);
//	printf("2. ���� : %d��\n", age);
//	printf("3. ���� : %c\n", gender);
//	printf("4. �ּ� : %s", addr);
//	
//}