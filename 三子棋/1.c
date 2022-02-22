#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h" //���Լ���ͷ�ļ�Ҫ˫���š���


void menu()
{
	printf("********************\n");
	printf("***1.play  0.exit***\n");
	printf("********************\n");
}

//��Ϸ�����㷨��ʵ��
void game()
{
	char ret = 0;
		//��������ȥ��������Ϣ
	char board[ROW][COL] = {0};//�տ�ʼ����ȫ�����ǿո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
        //�����������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//time�����ķ���������unsigned��

	do
	{
		menu();
		printf("��ѡ��(0/1)>\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("������ѡ��");
			break;
		}
	} while (input);
}

int main()
{


	test();
		return 0;
}