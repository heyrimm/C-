//01 Switch(���ߺб�)
//���α׷��ֿ��� ���ǹ� �� �ϳ���, ���ǿ� ���� �ٸ� �ڵ带 ������ �� ���ȴ�.
//switch�������� �ϳ��� ������ ���� �������� ������ �����Ͽ� �� ���Ǹ��� ������ �ڵ带 �����Ѵ�.

//switch���� ����
//switch (����)
//{
//case ��1:
//	������ �ڵ� 1;
//	break;
//case ��2:
//	������ �ڵ� 2;
//	berak;
//
//default:
//	break;
//}

//case : if���̸鼭 else if���̱⵵ �ϴ�
//break : �ش� �ڵ带 �����ϰ��� ���߰� �����.
//default : else���̴�.(case�� ���� ���ప�� �ƹ��͵� ���� ���� ��)

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("���� �Է� : ");
//	scanf_s("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("1 �Է½� ����Ǵ� �ڵ� ��\n");
//		break;
//	case 2:
//		printf("2 �Է½� ����Ǵ� �ڵ� ��\n");
//		break;
//	case 3:
//		printf("3 �Է½� ����Ǵ� �ڵ� ��\n");
//		break;
//	case 4:
//		printf("4 �Է½� ����Ǵ� �ڵ� ��\n");
//		break;
//	default:
//		printf("�� �� ������ �Է� �� ����Ǵ� �ڵ� ��\n");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	printf("1~12�Է� : ");
//	scanf_s("%d", &month);
//	switch (month)
//	{
//	case 1:
//		printf("31");
//		break;
//	case 2:
//		printf("28");
//		break;
//	case 3:
//		printf("31");
//		break;
//	case 4:
//		printf("30");
//		break;
//	case 5:
//		printf("31");
//		break;
//	case 6:
//		printf("30");
//		break;
//	case 7:
//		printf("31");
//		break;
//	case 8:
//		printf("31");
//		break;
//	case 9:
//		printf("30");
//		break;
//	case 10:
//		printf("31");
//		break;
//	case 11:
//		printf("30");
//		break;
//	case 12:
//		printf("31");
//		break;
//	default:
//		printf("�߸��� �Է��Դϴ�.");
//		break;
//	}
//}

// ����1. �ΰ��� ���ڸ� �Է¹޾� ù��° ���ڰ� �� ��° ���ں��� ū��, ������, �Ǵ� �������� �Ǵ��ϴ� ���α׷��� ����ÿ�
//#include<stdio.h>
//int main()
//{
//	int num1 = 0, num2 = 0;
//	printf("�� �� �Է� : ");
//	scanf_s("%d%d", &num1, &num2);
//	if (num1 > num2)
//	{
//		printf("ù��° ���� �ι�° ������ ŭ");
//	}
//	else if (num1 == num2)
//	{
//		printf("ù��° ���� �ι�° ���� ����");
//	}
//	else
//	{
//		printf("ù��° ���� �ι�° ������ ����");
//	}
//
//	return 0;
//}
// 
//����2. ������ ���ڸ� �Է¹޾� ���� ū ���ڸ� ã�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//#include<stdio.h>
//int main()
//{
//	int num1 = 0, num2 = 0, num3 = 0;
//	printf("�� �� �Է� : ");
//	scanf_s("%d%d%d", &num1, &num2, &num3);
//	
//	if (num1 >= num2 && num1 >= num3)
//	{
//		printf("���� ū ���� %d", num1);
//	}
//
//	else if (num2 >= num1 && num2 >= num3)
//	{
//		printf("���� ū ���� %d", num2);
//	}
//
//	else 
//	{
//		printf("���� ū ���� %d", num3);
//	}
//	
//	
//}

//
//#include<stdio.h>
//int main()
//{
//	int num1, num2, num3;
//	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
//	scanf_s("%d%d%d", &num1, &num2, &num3);
//
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//		{
//			printf("num1�� ���� ŭ");
//		}
//		else //num1>num2 && num1 < num3
//		{
//			printf("num3�� ���� ŭ");
//		}
//	}
//	else //num1 < num2
//	{
//		if (num2 > num3) //num1<num2&&num2>num3
//		{
//			printf("num2�� ����ŭ");
//		}
//		else //num1<num2&&num2<num3
//		{
//			printf("num3�� ���� ŭ");
//		}
//	}
//
//}