#pragma once
#include<stdio.h>
#include<stdlib.h>//�����������

#define hang 4
#define lie 4
#define ge 4

//int number[18] = { 2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144 };   ƭ���owo+
int number[18] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18 };
int* p = &number;

void initboard(int board[][lie], int a, int b)//��ʼ��
{
	for (a = 0; a < hang; a++)
	{
		for (b = 0; b < lie; b++)
		{
			board[a][b] = 0;
		}
	}
}
void print(int board[][lie], int a, int b)//��ӡ����
{
	for (a = 0; a < hang; a++)
	{
		for (b = 0; b < lie; b++)
		{
			printf("%d ", board[a][b]);
			if (board[a][b] < 10 && board[a][b]>=0)//�����Ű����
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
}
void creat(int board[][lie], int a, int b,int c)//��������
{
	int i = 0;
	top2:srand((unsigned)time(NULL));//ʹ�õ�ǰʱ�����������������ĳ�ʼ��

		int x = rand() % hang;
		int y = rand() % lie;
		if (board[x][y] == 0)//���������0��ʼ
		{
			board[x][y] = number[0];
		}
		else if (board[x][y] != 0)
			goto top2;
		if (c == 1 && i<1)
		{
			i++;
			goto top2;
		}
}
int game(int board[][lie], int a, int b,int c)
{
	while (1)
	{
		creat(board, hang, lie,c);
		print(board, hang, lie);

		char d='m';

		getchar();
		scanf_s("%c",&d);//�����ƶ�
		if (d == 'w')
		{
			int r = movew(board, a, b,c);
			if(r==6 || r==7 ||r==4)
			return r;
		}
		else if (d == 'a')
		{
			int r = movea(board, a, b,c);
			if(r==6 || r==7 ||r==4)
			return r;
		}
		else if (d == 's')
		{
			int r = moves(board, a, b,c);
			if(r==6 || r==7 ||r==4)
			return r;
		}
		else if (d == 'd')
		{
			int r = moved(board, a, b,c);
			if(r==6 || r==7 ||r==4)
			return r;
		}
		else
			printf("Wtf???\n");
		break;
	}
}

