//#include<stdio.h>
// �������� ������
// �������� �����Ͷ� ������ ������ ����Ű�� �� �ٸ� ������ �ǹ��ϸ�, 
// ���� ������, Ȥ�� ���������� ��� �Ѵ�.

// ������ ���� : �޸��� �ּҰ��� �����ϴ� ����. ������ ���� ���� �ϳ��� �����̹Ƿ� �ʿ���
// �޸� ������ �Ҵ�޾� ����ϰ� �ִ�. ���� ������ ������ �����ϰ� �ִ� �޸� ������ ����
// �ּҰ��� �����ϴ� ���� �����ϴ�.

// �̸� �����ϴ� ������ �ΰ� �������� �����͸� �����Ѵٰ� �Ͽ� ���� �����Ͷ�� �Ѵ�.

// �̱� ������ : �⺻���� �������� ����

// int x = 10;
// int* p = &x; //p�� x�� �ּҰ��� ����Ű�� �������̴�.

// ���� ������ : �����͸� �����ϴ� ����. �ش� �����Ͱ� ����Ű�� �޸� �ּҸ� �����Ͽ� 
// ���� �аų� �� �� �ִ�. �ٽ� ���� ���� �����ʹ� �����͸� ����Ű�� �������̴�.

//int x = 10;
//int* p = &x; //p�� x�� �ּҰ��� ����Ű�� �������̴�. 
//int** q = &p; //q�� p�� �ּҰ��� ����Ű�� �������̴�.
//**q = 20; //x�� ���� 20���� ����

// ���� �����͸� �̿��Ͽ� �迭���� �ּڰ��� ã�� �Լ� ����


//void findmin(int* arr, int size, int* result)
//{
//	*result = *arr;//�ּڰ��� ������ ������ ù��° ��ҷ� �ʱ�ȭ
//	for (int i = 1; i < size; i++)
//	{
//		if (*(arr + i) < *result)
//		{
//			*result = *(arr + i);
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 5, 2, 8, 3, 7 };
//	int size = sizeof(arr) / sizeof(arr[0]); //�迭�� ũ�⸦ ���
//	int min; // �ּڰ��� ������ ������ ����
//	findmin(arr, size, &min);
//	printf("�迭���� �ּڰ��� %d\n", min);
//}
//#include<stdio.h>
//void findmin(int** arr, int size, int* result)
//{
//	*result = **arr;//�ּڰ��� ������ ������ ù��° ��ҷ� �ʱ�ȭ
//	for (int i = 1; i < size; i++)
//	{
//		if (*(*arr + i) < *result)
//		{
//			*result = *(*arr + i);
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 5, 2, 8, 3, 7 };
//	int* ptr = arr;
//	int** doubleptr = &ptr;
//	int size = sizeof(arr) / sizeof(arr[0]); //�迭�� ũ�⸦ ���
//	int min; // �ּڰ��� ������ ������ ����
//	findmin(doubleptr, size, &min);
//	printf("�迭���� �ּڰ��� %d\n", min);
//}
// 
//#include<stdio.h>
//int main()
//{
//	int num = 3;
//	int* ptr1 = &num;
//	int** dptr = &ptr1;
//	int* ptr2;
//	printf("%p %p\n", ptr1, dptr);
//	printf("%d %d", num, **dptr);
//	ptr2 = *dptr;//==ptr2 = ptr1; => ptr2 = &num;   //dptr1�� ����Ű�� ptr1�� ���� ptr2�� ����, ptr2�� num�� �ּҸ� ����Ų��.
//	*ptr2 = 9;//*(&num) = num = 9;                  //ptr2�� ����Ű�� ������ 9�� ����, ������ num�� ���� �ٲ��.
//	printf("%d %d %d", num, **dptr, *ptr2);
//}

//#include<stdio.h>
//void swap(int** ptr1, int** ptr2);
//
//int main()
//{
//	int num1 = 10, num2 = 20;
//	int* ptr1 = &num1, * ptr2 = &num2;
//
//	printf("�ٲ�� �� : \n");
//	printf("num1 = %d, num2 = %d\n", num1, num2);
//	swap(&ptr1, &ptr2);
//
//	printf("�ٲ� �� : \n");
//	printf("num1 = %d, num2 = %d", num1, num2);
//}
//void swap(int** ptr1, int** ptr2)
//{
//	int temp = 0;
//	temp = **ptr1;
//	**ptr1 = **ptr2;
//	**ptr2 = temp;
//}

// ���� : ���� �����͸� ����Ͽ� ���ڿ��� �������� ����Ѵ�.
//#include<stdio.h>
//#include<string.h>
//void printreverse(char** dpt,int size);
//int main()
//{
//	char* str = "hello";
//	int len = strlen(str); //5
//	printreverse(&str,len);
//	return 0;
//}
//
//void printreverse(char** dpt,int size)
//{
//	for (int i = size - 1; i >= 0; i--)
//	{
//		printf("%c ", *(*dpt + i));
//	}
//}
// 
// 
// 
//#include<stdio.h>
//#include<string.h>
//void printReverse(char** dptr);
//
//int main()
//{
//	char* str = "hello world!";
//	printReverse(&str);
//	return 0;
//}
//
//void printReverse(char** dptr)
//{
//	int len = strlen(*dptr);
//
//	for(int i = len; i >= 0; i--)
//	{
//		printf("%c", *(*dptr+i));
//	}
//}



//#include<stdio.h>
//#include<string.h>
//void printreverse(char**str);
//int main()
//{
//	char* str = "hello world!";
//	printreverse(&str);
//	return 0;
//}
//void printreverse(char** str)
//{
//	int len = strlen(*str);//12
//	for (int i = len - 1; i >=0; i--)
//	{
//		printf("%c", *(*str + i));
//	}
//}

// ��Ʈ : strlen�� ���� ã�ƺ��ÿ�. for�� ���
//strlen(str) : ���ڷ� ���޵� �ּ��� ���ڿ����� NULL ���ڸ� ������ ���ڿ� ���̸� ��ȯ
//���ڿ� == �迭
//str[] = "hello world"
//strlen(str) => 11
//[0]~[10]
//0 - 10
//1 - 9
//2 - 8
//3-7
//46
//#include<stdio.h>
//#include<string.h>
//void printReverse(char* str);
//
//int main()
//{
//	char str[] = "hello world";
//	printReverse(str);
//	return 0;
//}
//
//void printReverse(char* str)
//{
//	int size = strlen(str); //11
//	for (int i = 0; i < size / 2; i++)//
//	{
//		char c;
//		c = *(str + i);//0
//		*(str + i) = *(str + size - 1 - i);
//		*(str + size - 1 - i) = c;
//	}
//	printf("%s", str);
//}

// ���� �����Ϳ� Call-by-reference

// �� ��� ��� �Լ� ȣ�� �� �μ��� ���޵� ������ ���� ������ �� �ִ�.
// �׷��� ���� �����ʹ� ������ ������ ����Ű�� �����͸� �ٷ�� �Ϳ� ����
// Call - by - reference�� ������ �ּҸ� �����ϴ� ���̴�. �׷��� �� �����ϰ� �������� ���
// ���� �����ʹ� �ʿ��� ��쿡�� ����ϴ� ���� ����. 

// �Լ� ������
// �Լ� ������ : �Լ��� �ּҸ� �����ϱ� ���� �����͸� �ǹ��Ѵ�. �Լ� �����͸� �̿��ϸ� �Լ��� ����Ű��
// �����͸� �����ϰ� �̸� �̿��Ͽ� �Լ��� ȣ���� �� �ִ�.

// �� : 

//int(*fp)(int);
// ����Ÿ�� (*�������̸�)(�Ű�����)
// ������ �̸� = �Լ��̸�
// �Ű����� = �Ű�����Ÿ��

//int square(int num)
//{
//	return num * num;
//}
//
//int main()
//{
//	int (*fp)(int);
//	//fp��� �Լ� �����͸� ����
//	fp = square;
//	//square��� �Լ��� �ּҸ� fp�� �����Ѵ�.
//
//	printf("square(5) = %d\n", square(5));
//	printf("(*fp)(5) = %d\n", (*fp)(5));
//}

