#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//��������ÿ��ֵ����ʼ���ĺ���
void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';

		}

	}


}

//��������ÿ��Ԫ�ض���ӡ�����ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	//3.��ӡ�����е�����
	for (int i = 0; i < row; i++)
	{
		//1.��ӡ1�е�����
		for (int j = 0; j < col; j++)
		{
			
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf(" | ");
			}

		}
		printf("\n");

		//2.��ӡ�ָ�����
		if(i<row-1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf(" | ");
				}

			}
			printf("\n");
		}

	}
}

//�������ĺ���
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x;
	int y;

	printf("����ߣ�>\n");

	while (1)
	{
		printf("������Ҫ�µ����꣺");
		scanf("%d%d", &x, &y);
		//�ж�x,y����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�жϸ������Ƿ�ռ�ã����û������*��������������
			if (board[x-1][y-1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}

			else
			{
				printf("�������ѱ�ռ�ã�������Ϸ�������:\n ");
			}
		}
		else
		{
			printf("������Ϸ�������:\n ");
		}
	}
	
}

//��������ĺ���
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������:\n");
	int x;
	int y;

	while (1)
   {
		//���ɵ����ߵ������
		x = rand() % row;//ʹ��rand����֮ǰ������Ҫ��ȡsrand������%������
		y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;

		}

     }

}

//�ж��Ƿ�ƽ��,����1��ʾ�������ˣ�����0��ʾû��
int IsFull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//����û��
			}

		}

	}
	return 1;//��������
}

//�ж���Ӯ�ĺ���
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж�ÿһ���Ƿ���ͬ
	for (int i = 0; i < row; i++)
	{
		if (board[i][0]==board[i][1]&& board[i][2] == board[i][1]&& board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж�ÿһ���Ƿ���ͬ
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж�2���Խ����Ƿ���ͬ
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[0][2] == board[1][1] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж��Ƿ�ƽ�֣�
	if (1 == IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	else
	{
		return 'C';
	}
}


