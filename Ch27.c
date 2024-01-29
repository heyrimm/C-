// �ڷᱸ�� : ��ǻ�� ���п��� �����͸� �����ϰ� �����ϴ� ����� �����ϴ� ������ ��
// ��, �����͸� �����ϰ� �����ϴµ� ���Ǵ� ������ �ǹ��Ѵ�. 

// �ڷᱸ���� �����͸� ȿ�������� ó���ϰ� �˻��ϱ� ���� ���ȴ�.
// �����͸� ����ȭ�ϰ� �����ϴ� ����� �����Ѵ�.
// �ڷᱸ���� ��ǻ�� ���п��� �ſ� �߿��� ������ �Ѵ�. 

// �Ϲ����� �ڷᱸ������ �迭, ���Ḯ��Ʈ, ����, ť, Ʈ��, �׷��� ���� �ִ�.

// ����(Stack) : �����͸� �Ͻ������� �����ϴ� �ڷᱸ�� �� �ϳ�.
// ������ �����͸� �������� �׾ƿø� ��ó�� ��������, �������� ���԰� ������
// �� ������ �Ͼ��. �̸�  LIFO(Last In, First Out). ���� �������� ���Ե� �����Ͱ� 
// ���� ���� �����ȴ�.

// ť(Queue) : �����͸� �����ϴ� �ڷᱸ�� �� �ϳ�. �Ͻ������� ������.
// ť�� �����͸� ���� ���� ���� ���������� FIFO(First In, First Out)������ �Ǿ��ִ�.
// 1������ �� �����Ͱ� ���� ���� �������� ��Ģ�� ������. 

// ��ũ�� ����Ʈ(Linked List) : �����͸� ���������� �����Ϲ� �ڷᱸ���̴�. 
// ��ũ�� ����Ʈ�� ���(Node)�� ����� �̷�����ִ�.
// �� ���� �����Ϳ� ���� ��带 ����Ű�� ������(Pointer)�� �����Ѵ�. 
// ������ ���� NULL ���� ����Ű�� �����͸� ������.

//<Array_List> : �迭����Ʈ : ȸ������, ���������� ���� �� ��
//<LInked_list> : ���� ����Ʈ : ������ ����

// ���(Node) : �ڷᱸ������ �����͸� �����ϰ�, �ٸ� ������ ������ ���� �����͸� ����� �����ȴ�.
// ���� �����Ҵ� �޸𸮸� ����Ͽ� �����ȴ�.

// Ʈ��(Tree) : ���� ������ ������ �ڷ� ����, �ϳ��� ��Ʈ(root) ��忡�� �����Ͽ� ��������
// �ڽ� ���� �̷���� �����̴�. �� ���� �θ� ���� �ڽ� ��带 ����Ű�� ������(Pointer)�� ������ �ִ�.

// -> ������ : ����ü �����͸� ����� �� ���Ǵ� ������.

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int x;
	int y;
}Node;

int main()
{
	Node* node; //node ����ü�� ����Ű�� ������ ���� node ����
	node = (Node*)malloc(sizeof(Node)); //���� �޸� �Ҵ�
	node ->x = 10; //node�� ����Ű�� ����ü��  x ����� 10�� ����
	node->y = 20; //node�� ����Ű�� ����ü�� y�� ����� 20�� ����

	printf("%d\n", node -> x);
	printf("%d\n", node->y);
}