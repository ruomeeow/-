#include<stdio.h>
#include"function.h"
#include"game.h"

int beginning()//开始菜单
{
	char a='m';
	printf("\n2048！开始后输入 w/s/a/d \n    对应 上/下/左/右 来玩儿！   (输van记得按回车)\n\n");
	printf("(为了方便打印 2,4,8,16... 替换为 1,2,3,4... 以此类推哒！)\n");
	printf("   (嫑按太急！！！游戏也要时间反应の（坏档寄负（\n");
	{printf("\n               >先请李吃块喵克力！owo\n");
	printf("\n         ____________________________________,............,");
	printf("\n       /  _ / _ / _ / _ / _ / _ / _ / _ / , -',,.-,-,--/  |\n");
	printf("\n     /  _ / _ / _ / _ / _ / _ / _ / , -' //  /-| //--/   /\n");
	printf("\n   /  _ / _ / _ / _ / _ / _ / , -' `-''--'  `' '-- /   /\n");
	printf("\n /  _ / _ / _ / _ / _ / _,:....................../   /\n");
	printf("\n|________________, '   Produced  by  Ruomiao !  |  /\n");
	printf("                 \"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"'\n\n"); }
	printf("  >要开始玩儿了嘛？owo\n");
	printf("        > o  x  \n\n>");
	scanf_s("%c", &a);

	if (a == 'o')
	{
		getchar();
		printf("\n   对了！李要玩儿hentai模式嘛？>w<          (合成目标是262144也就是18奥！\n");//变态模式选择1
		printf("            > o  x                        并且每次都新生成twoooooooo格子！)\n\n>");
		scanf_s("%c", &a);

		if (a == 'o')
			return 2;
		else if (a == 'x')
			printf("\n猴叭- -|||");
		return 1;
	}
	else if (a == 'x')
		return 0;
	else
		printf("Wtf???");
	return 0;
}
int main()
{
	int c = 0;//变态模式开关
	int reply = beginning();
	if (reply == 1)
		printf("\nFine!玩儿の开心奥！\n");
	else if (reply == 2)
	{
		printf("\nFine!试试就逝世！玩儿の开心奥！\n");
		c = 1;
	}
	else if (reply == 0)
	{
		printf("\nOK bye！\n");
		return 0;
	}

	int board[hang][lie];
top1:initboard(board, hang, lie);//初始化格子
	while (1)
	{
		game(board, hang, lie, c);//游戏
		int r=game(board, hang, lie,c);
		if (r == 6)//赢
		{
			char a = 'm';
			printf(">Nice job！！！你想去里世界玩儿嘛？\n");
			printf("> o  x  \n\n>");
			scanf_s("%c", &a);//变态模式选择2
			if (a == 'o')
			{
				printf("Hentai模式！合成目标是262144也就是18奥！并且每次都新生成两个格子！\n");
				printf("祝李好运- -+（）\n");
				c = 1;
				goto top1;
			}
			else if (a == 'x')
			{
				printf("Giao辞（）\n");
				return 0;
			}
			else
				printf("Wtf???\n");
			break;
		}
		else if (r == 7)//变态模式赢
		{
			printf("Awwwwwwwwwwwwwesome！\n");
			printf("不管李是找到了bug还是煎的打通了Hentai模式(若喵更倾向于前者\n现在都阔以找若喵要奖励哒！(绝对不只有安利xxx)\n");
			char a = 'm';
			printf("> o  x  \n\n>");
			scanf_s("%c", &a);
			if (a == 'o' || a == 'x')
			{
				break;
			}
			else
				break;
		}
		else if (r == 4)//输
		{
			printf("Booooooooooooooooom！\nTry again！\n");
			goto top1;
		}
	}
	return 0;
}
