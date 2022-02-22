#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h> //srand������ͷ�ļ�
#include<time.h> //time������ͷ�ļ�


//��ʼ�����̵ĺ�������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ���̵ĺ�������
void DisplayBoard(char board[ROW][COL],int row,int col);
//������ĺ�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������ĺ�������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ�ĺ���������״̬�����1-*������1-#��������Ϸ-C��ƽ��-Q
char IsWin(char board[ROW][COL], int row, int col);
//�ж������Ƿ����ˣ�����1��ʾ�������ˣ�����0����ʾ����û��
int IsFull(char board[ROW][COL], int row, int col);