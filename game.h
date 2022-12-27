#pragma once

#include<stdio.h>
#include"function.h"

int movew(int board[][lie], int a, int b,int c)
{
	int j = 0;
	int k;
		for (a = hang; a >=0; a--)
		{
			for (b = 0; b < lie; b++)
			{
				if (board[a][b] == 0)//排序
				{
					for (k = 0; k < ge; k++)
					{
						if (board[a + 1][b] == number[k])
						{
							board[a][b] = number[k];
							board[a + 1][b] = 0;
						}
					}
				}
				if (board[a][b] != 0 && board[a + 1][b] == board[a][b])//合成(移动之前在移动方向上就贴一起的)
				{
					for (k = 0; k < ge; k++)
					{
						if (board[a][b] == number[k])
						{
							board[a][b] = *(p+1);
							board[a + 1][b] = 0;
						}
					}
				}
			}
		}
		for (a = 0; a < hang; a++)
		{
			for (b = 0; b < lie; b++)
			{
				if (board[a][b] == 0)//判断输？
				{
					j++;
				}
			}
		}
		if (board[a][b] == number[10] && c == 0)//赢
		{
			return 6;
		}
		else if (board[a][b] == number[17] && c == 1)//变态模式赢
		{
			return 7;
		}
		else if (j == 0)//输
		{
			return 4;
		}
}
int moves(int board[][lie], int a, int b, int c)
{
	int j = 0;
	int k;
	for (a = 0; a <hang; a++)
	{
		for (b = 0; b < lie; b++)
		{
			if (board[a][b] == 0)//排序
			{
				for (k = 0; k < ge; k++)
				{
					if (board[a - 1][b] == number[k])
					{
						board[a][b] = number[k];
						board[a - 1][b] = 0;
					}
				}
			}
			if (board[a][b] != 0 && board[a - 1][b] == board[a][b])//合成(移动之前在移动方向上就贴一起的)
			{
				for (k = 0; k < ge; k++)
				{
					if (board[a][b] == number[k])
					{
						board[a][b] = *(p + 1);
						board[a - 1][b] = 0;
					}
				}
			}
		}
	}
	for (a = 0; a < hang; a++)
	{
		for (b = 0; b < lie; b++)
		{
			if (board[a][b] == 0)//判断输？
			{
				j++;
			}
		}
	}
	if (board[a][b] == number[10] && c == 0)//赢
	{
		return 6;
	}
	else if (board[a][b] == number[17] && c == 1)//变态模式赢
	{
		return 7;
	}
	else if (j == 0)//输
	{
		return 4;
	}
}
int movea(int board[][lie], int a, int b, int c)
{
	int j = 0;
	int k;
	for (b = lie; b >= 0; b--)
	{
		for (a = 0; a <lie; a++)
		{
			if (board[a][b] == 0)//排序
			{
					for (k = 0; k < ge; k++)
					{
						int i = 0;
						if (i < (ge - k))//防止串行
						{
							if (board[a][b + 1] == number[k])
							{
								board[a][b] = number[k];
								board[a][b + 1] = 0;
							}
							i++;
						}
					}
			}
			if (board[a][b] != 0 && board[a][b + 1] == board[a][b])//合成(移动之前在移动方向上就贴一起的)
			{
					for (k = 0; k < ge; k++)
					{
						if (board[a][b] == number[k])
						{
							board[a][b] = *(p + 1);
							board[a][b + 1] = 0;
						}
					}
			}
		}
	}
	for (a = 0; a < hang; a++)
	{
		for (b = 0; b < lie; b++)
		{
			if (board[a][b] == 0)//判断输？
			{
				j++;
			}
		}
	}
	if (board[a][b] == number[10] && c == 0)//赢
	{
		return 6;
	}
	else if (board[a][b] == number[17] && c == 1)//变态模式赢
	{
		return 7;
	}
	else if (j == 0)//输
	{
		return 4;
	}
}
int moved(int board[][lie], int a, int b, int c)
{
	int j = 0;
	int k;
	for (b = 0; b <ge; b++)
	{
		for (a = 0; a < lie; a++)
		{
			if (board[a][b] == 0)//排序
			{
				for (k = 0; k < ge; k++)
				{
					int i = 0;
					if (i < (ge - k))//防止串行
					{
						if (board[a][b-1] == number[k])
						{
							board[a][b] = number[k];
							board[a] [b- 1] = 0;
						}
						i++;
					}
				}
			}
			if (board[a][b] != 0 && board[a][b - 1] == board[a][b])//合成(移动之前在移动方向上就贴一起的)
			{
				for (k = 0; k < ge; k++)
				{
					if (board[a][b] == number[k])
					{
						board[a][b] = *(p + 1);
						board[a ][b - 1] = 0;
					}
				}
			}
		}
	}
	for (a = 0; a < hang; a++)
	{
		for (b = 0; b < lie; b++)
		{
			if (board[a][b] == 0)//判断输？
			{
				j++;
			}
		}
	}
	if (board[a][b] == number[10] && c == 0)//赢
	{
		return 6;
	}
	else if (board[a][b] == number[17] && c == 1)//变态模式赢
	{
		return 7;
	}
	else if (j == 0)//输
	{
		return 4;
	}
}