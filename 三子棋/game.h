#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h> //srand函数的头文件
#include<time.h> //time函数的头文件


//初始化棋盘的函数声明
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘的函数声明
void DisplayBoard(char board[ROW][COL],int row,int col);
//人下棋的函数声明
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋的函数声明
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢的函数：四种状态：玩家1-*，电脑1-#，继续游戏-C，平局-Q
char IsWin(char board[ROW][COL], int row, int col);
//判断棋盘是否满了，返回1表示棋盘满了；返回0，表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col);