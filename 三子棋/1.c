#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h" //引自己的头文件要双引号“”


void menu()
{
	printf("********************\n");
	printf("***1.play  0.exit***\n");
	printf("********************\n");
}

//游戏整个算法的实现
void game()
{
	char ret = 0;
		//数组存放走去的棋盘信息
	char board[ROW][COL] = {0};//刚开始棋牌全部都是空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
        //先让玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//time函数的返回类型是unsigned，

	do
	{
		menu();
		printf("请选择：(0/1)>\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("请重新选择！");
			break;
		}
	} while (input);
}

int main()
{


	test();
		return 0;
}