#pragma warning(disable:4996)//��������������(4996�� ����)
#include<stdio.h>
#include<string.h>
// ���ڿ��� ������

// ���� ǥ�����

// ��ǻ�Ϳ����� ������ ���ڿ� �����ڵ带 �ٿ��� ǥ���Ѵ�.
// �ƽ�Ű�ڵ�(ASKII code) : ǥ������ 8��Ʈ �����ڵ�
// 0 ~ 127������ ���ڸ� �̿��� ����ǥ��

// �����ڵ�(unicode) : ǥ������ 16��Ʈ �����ڵ�
// �������� ��� ���ڸ� �ϰ��ǰ� ǥ���ϰ� �ٷ� �� �ֵ��� ����

// ���� ���
//#include<stdio.h>
//int main()
//{
//	char code1 = 'A';
//	char code2 = 65;
//
//	printf("code1 = %c,code1 = %d\n", code1, code1);
//	printf("code2 = %c,code2 = %d", code2, code2);
//}

// �ƽ�Ű�ڵ� ���
//#include<stdio.h>
//int main()
//{
//	// ��ȣ���� (unsigned) ������ ǥ���� �� ���Ǵ� Ű����
//	unsigned char code;
//
//	for (code = 0; code < 128; code++)
//	{
//		printf("�ƽ�Ű �ڵ� %d�� %c�Դϴ�.\n", code, code);
//	}
//}
//
//#include<stdio.h>
//int main()
//{
//	char good[5] = "Good";
//	char* bad = "good!";
//	printf("%s %s\n", good, bad);
//	
//
//	/*good[0] = 'H';
//	printf("%s", good);*/
//	/*good[] = "New good";*/ //�迭��� ���ڿ��� ���ο� �ּҰ� �Ҵ��� �Ұ���.
//	/*bad[0] = 's'*/;//�Ұ���(������ ������ ���� ��ȭ�� ���� ����ó����. //������ ��� ���ڿ��� ���Ť� ��ڰ��� �Ҵ� X
//	printf("%s", good);
//}

// ���� ����� ���̺귯��
//int getchar(void) : �ϳ��� ���ڸ� �о ��ȯ�Ѵ�.
//void putchar(int c) : ���� c�� ����� ���ڸ� ����Ѵ�.
//scanf("%c",&c) : �ϳ��� ���ڸ� �о ���� c�� �����Ѵ�.
//printf("%c",c) : ���� c�� ����� ���ڸ� ����Ѵ�.

//#include<stdio.h>
//int main()
//{
//	int ch;
//	while (1)
//	{
//		ch = getchar();
//		if (ch == 'q')
//		{
//			break;
//		}
//		putchar(ch);
//	}
//}

// ���ڿ� ���� ����� �Լ�
//#include<stdio.h>
//int main()
//{
//	char str[10];
//	printf("���ڿ��� �Է� : ");
//	fgets(str, 10, stdin);//fgets():���ڿ��� �Է¹���.
//	//stdin : �⺻������ Ű���� �Է��� �޾Ƶ��̳�.
//	//10 ; 10�ڸ������� ���(==10����Ʈ����)
//	puts(str);
//}

// ���ڿ� ó�� �Լ�
//#pragma warning(disable:4996)//��������������(4996�� ����)
//#include<stdio.h>
//#include<string.h> //c����� ǥ�� ���̺귯���� ��� ���� �� �ϳ���.

//string.h �ֿ��Լ�

//strlen(str) : ���ڷ� ���޵� �ּ��� ���ڿ����� NULL ���ڸ� ������ ���ڿ� ���̸� ��ȯ
//strcpy(str1,str2) : �ι��� ���ڷ� ���޵� �ּ��� ���ڿ��� ù��° ������ �ּҿ� ����
//strncpy(str1,str2,count) : �ι�° ���ڷ� ���޵� �ּ��� ���ڿ��� ù���� ������ �ּҿ� �����ϵ� ���ϴ� ������ŭ�� ����.
//strcat(str1,str2) : �ι�° ���ڷ� ���޵� �ּ��� ���ڿ��� ù���� ���ڷ� ���޵� �ּ��� ���ڿ��� �̾� ���̱�
//strcmp(str1,str2) : ���ڷ� ���޵� �� ���ڿ��� ���Ͽ� ������ ���ٸ� 0�� ���������� 0�� �ƴ� ���� ��ȯ

//int main()
//{
//	//strcpy()�Լ��� c���� ���ڿ��� ������ �� ���Ǵ� �Լ�
//
//	//strcpy �Լ��� ù���� ���ڷ� ���޵� ���ڿ��� ũ�⸦ �˻����� �����Ƿ�, ������ ���ڿ��� ũ�Ⱑ �ι��� ���ڷ� ���޵�
//	//���ڿ����� ũ�� ���� �����÷ο�(overflow)�� �߻��� �� �ִ�. 
//
//	char src[] = "Hello world";
//	char dest[20];
//	strcpy(dest, src);
//	printf("����� ���ڿ� : %s", dest);
//}
//int main()
//{
//	//strncpy()�Լ��� strcpy �Լ��� �ٸ��� ������ ���ڿ��� ���̸� ���� O
//	//strncpy()�Լ��� �ι�° ���ڷ� ���޵� ���ڿ��� ũ�⸸ŭ�� ���ڿ��� �����Ѵ�.
//	//�� ���� �����÷ο츦 ������ �� ������ ������ ���ڿ��� �� ���� ���� ���� X, ���� ������ ���ڿ� ���� 
//	//�� ���ܹ��ڸ� �߰�������Ѵ�.
//
//	char src[] = "Hello world";
//	char dest[20];
//	strncpy(dest, src, sizeof(dest));//sizeof : ���� �Ǵ� �ڷ����� ũ�⸦ ��ȯ
//	dest[sizeof(dest) - 1] = '\0'; //������ ���ڿ��� ���� �� ���� ���� �߰�
//	printf("����� ���ڿ� : %s\n", dest);
//}

// ���ڿ� �̾���̱�, ���ڿ� ��
//int main()
//{
//	char str1[50] = "Korea";
//	char str2[50] = "Korea";
//
//	//str1�� ���ڿ� ���̱�
//	strcat(str1, "IT");
//	printf("%s\n", str1);
//
//	//str2�� ���ڿ� ���̱�
//	strcat(str2, "COOK");
//	printf("%s\n", str2);
//
//	//str1�� str2�� ��
//
//	//strcmp : ���ڿ��� ���� �� ���Ǵ� �Լ�
//	printf("�� ��� : %d\n", strcmp(str1, str2)); //0�̸� ����, 0�� �ƴϸ� �ٸ�.
//}

//int main()
//{
//	char str1[20];
//	char str2[20];
//
//	printf("ù��° ���ڿ� �Է� : ");
//	/*scanf_s("%s", str1,20);*/
//	fgets(str1, sizeof(str1), stdin);
//	printf("�ι��� ���ڿ� �Է� : ");
//	/*scanf_s("%s", str2,20);*/
//	fgets(str2, sizeof(str2), stdin);
//	int tr = strcmp(str1, str2);
//	if (tr == 0)
//	{
//		printf("�� ���ڿ��� �����ϴ�.");
//	}
//	else
//	{
//		printf("�� ���ڿ��� �ٸ��ϴ�.");
//	}
//}

//1. ���Ŵ��� ����Ͽ� ������ �Է¹޾� ��� ���� 0 �� ��������� Ȯ���ϴ� ���α׷�
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("�� �Է� : ");
//	scanf_s("%d", &a);
//
//	if (a == 0)
//	{
//		printf("�Է��� ������ 0");
//	}
//	else if (a < 0)
//	{
//		printf("�Է��� ������ ����");
//	}
//	else
//	{
//		printf("�Է��� ������ ���");
//	}
//}

//2�ݺ����� ����Ͽ� 1���� 10������ ���� ����
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i < 11; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//}
//
//3. 1���� �迭�� ����Ͽ� 5�� ������ Ű�ǵ�� �Է¹ް� ���� ���ض�
//#include<stdio.h>
//int main()
//{
//	int arr[5];
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("���� �Է� : ");
//		scanf_s("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%d", sum);
//}

//4. �����͸� ����Ͽ� �ΰ��� ������ �Է¹޾� �� �հ� ���� ���ϴ� ���α׷��� �ۼ��ض�
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	int* pa;
//	int* pb;
//	pa = &a;
//	pb = &b;
//	printf("�� �� �Է� : ");
//	scanf_s("%d%d", pa, pb);
//	printf("�� ���� �� : %d", *pa + *pb);
//	printf("�� ���� �� : ");
//	/*if (*pa > *pb)
//	{
//		printf("%d", *pa - *pb);
//	}
//	else
//	{
//		printf("%d", *pb - *pa);
//	}*/
//	int temp;
//	if (b > a)
//	{
//		temp = b;
//		b = a;
//		a = temp;
//	}
//	printf("%d", *pa - *pb);
//}

