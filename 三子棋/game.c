#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//把数组中每个值都初始化的函数
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

//把数组中每个元素都打印出来的函数
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	//3.打印所有行的数据
	for (int i = 0; i < row; i++)
	{
		//1.打印1行的数据
		for (int j = 0; j < col; j++)
		{
			
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf(" | ");
			}

		}
		printf("\n");

		//2.打印分隔符·
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

//玩家下棋的函数
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x;
	int y;

	printf("玩家走：>\n");

	while (1)
	{
		printf("请输入要下的坐标：");
		scanf("%d%d", &x, &y);
		//判断x,y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断该坐标是否被占用，如果没有输入*，否则重新输入
			if (board[x-1][y-1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}

			else
			{
				printf("该坐标已被占用，请输入合法的坐标:\n ");
			}
		}
		else
		{
			printf("请输入合法的坐标:\n ");
		}
	}
	
}

//电脑下棋的函数
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:\n");
	int x;
	int y;

	while (1)
   {
		//生成电脑走的随机数
		x = rand() % row;//使用rand函数之前必须先要调取srand函数，%是求余
		y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;

		}

     }

}

//判断是否平局,返回1表示棋盘满了，返回0表示没满
int IsFull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘没满
			}

		}

	}
	return 1;//棋盘满了
}

//判断输赢的函数
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断每一行是否相同
	for (int i = 0; i < row; i++)
	{
		if (board[i][0]==board[i][1]&& board[i][2] == board[i][1]&& board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断每一列是否相同
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断2个对角线是否相同
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[0][2] == board[1][1] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断是否平局，
	if (1 == IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	else
	{
		return 'C';
	}
}


