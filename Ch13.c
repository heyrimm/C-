// ������
// 1. �����͸� ����ؾ��ϴ� ����
// 1.1 : �޸��� �ּҸ� �����ؼ� �پ��� ���ٰ� ������ ����.
// 1.2 : ���� �Ҵ�� (������)�� ���ٰ� ������ ����
// 1.3 : �޸� ������ ȿ�������� ���

// 1. �޸��� �ּҸ� ����ϴ� ������.(�޸��� ���뿡 ���� ������ �� �ִ�.)
// 2. ������ �޸𸮿� ����ȴ�. �޸𸮴� ����Ʈ ������ �׼��� �ȴ�.
// 3. ������ ũ�⿡ ���� �����ϴ� �޸� ������ �޶�����. 

// 2) ������ �ּ�
//
// ���� : �޸� ���� �������. �� ��ġ�� �˸� ����� �����ϴ�.

// ��ġ�� - �ּ�

// ������ �ּҸ� ����ϴ� ������ : & (���� ������, �ּ� ������)
// ���� i�� �ּ� : &i

// �ڹٿ���
// ���� Ÿ�� = int, boolean, char
// ���� Ÿ�� = String, integer
// 

//#include<stdio.h>
//int main()
//{
//	int i = 10;
//	char c = 69;
//	float f = 12.3;
//	//%p : 16����
//	printf("i�� �ּ� : %p\n", &i);
//	printf("c�� �ּ� : %p\n", &c);
//	printf("f�� �ּ� : %p\n", &f);
//}

// �����Ϳ� ������

// �ּ� ������ : int a;      &a 
// ��� : ���� �տ� �ٿ� ����ϸ� ������ �Ҵ�� �޸��� ���� �ּҰ��� ���Ѵ�. 
// int a = 10;      : �޸� �ȿ����� 100���� ~ 103�������� 4����Ʈ ������ 10�� ����
// a + 20           : �޸� 100���� ~ 103�������� 4����Ʈ�� ����� ���� 20�� ���ϴ� ���� ����
// ��� : ���������� �޸� �����̳� ���� ������ ��� ����

// ������ ũ��, �޸� �Ҵ� ���
// �����Ϸ�(��ǻ��), �ü���� ���� �ٸ� �� �ִ�. 

// ������ : char* pc; int* pi, double* pd;  
// ��� : ���� �ּҰ��� �����ϴ� ������, ����Ű�� �ڷ����� ǥ���Ͽ� �����Ѵ�.

// �������� ������ : *pi = 10; 
// ��� : �����Ϳ� ����ϸ�, �����Ͱ� ����Ű�� ������ ����Ѵ�. 

// *�� �ǹ� : 
// 1. ������ ���� �� 
// 2. �������� �ǹ� (�Ž��� �ö󰣴�)

//#include<stdio.h>
//int main()
//{
//
//	int a; // �Ϲ� ���� ����
//	int* pa; //������ ����(�ּҰ��� ���� �� �ִ� ������ ����)
//
//	pa = &a; // �����Ϳ� a�� �ּҸ� ����
//	*pa = 10; // �����ͷ� ���� a�� 10�� �����Ѵ�.
//	a = 20;
//
//	printf("�����ͷ� a�� ��� : %d\n", *pa);
//	printf("���������� a�� ��� : %d", a); // ���� a ���
//
//}

//#include<stdio.h>
//int main()
//{
//	int i = 3000;
//	int* p = &i; //������ ������ ����
//
//	printf("&i = %n\n", &i);
//	printf("p = %p\n", p);
//	printf("i = %d\n", i);//������ �� ���
//	printf("*p = %d", *p);//�����͸� ���� ���� ���� �� ���
//}

//������ ��� �� ������
//1.

//#include<stdio.h>
//int main()
//{
//	//�������� Ÿ�԰� ������ Ÿ���� ��ġ�ؾ� �Ѵ�.
//	int i;
//	double* pd;
//	pd = &i;
//	*pd = 36.5;
//
//	printf("%f\n", pd);
//}

// 2.
//#include<stdio.h>
//int main()
//{
//	//�ʱ�ȭ : ������ �迭, ����ü ���� ó������ ���� �Ҵ��ϴ� ���� �ǹ��Ѵ�.
//	int* p;
//	*p = 100; //������ �ڵ�
//
//	printf("%d\n", *p);
//}

//3.
// 1. �����Ͱ� �ƹ��͵� ����Ű�� ���� ���� ��� NULL�� �ʱ�ȭ
// 2. NULL �����͸� ������ ���� �����ϸ� �ϵ����� ������ �� �ִ�.
// 3. �������� ��ȿ�� ���� �Ǵ��� ����.

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int* p_num = NULL;
//
//	if (p_num == NULL)
//	{
//		printf("������ ������ NULL�� ����ŵ�ϴ�.\n");
//	}
//	else
//	{
//		printf("������ ������ NULL�� ������Ű �ʽ��ϴ�.\n");
//	}
//}

// scanf_s �Լ��� ����ڷκ��� �Է¹��� ��, �޸� ������ ����� ������ �����ϱ� ���� 
// �Է°��� ������ ������ �ּҸ� �Է��ؾ��Ѵ�.

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p_a = &a;
//	printf("a = %d", *p_a);
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, temp = 0;
//	int* pa = &a;
//	int* pb = &b;
//	printf("�� �� �Է� : ");
//	scanf_s("%d%d", pa, pb);
//	temp = *pa; //temp = a
//	*pa = *pb; // a = b;
//	*pb = temp; //b = temp(���� a)
//	printf("�ٲ� �� �� : %d %d", a, b);
//}
