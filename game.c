#include<stdio.h>
#include"function.h"
#include"game.h"

int beginning()//��ʼ�˵�
{
	char a='m';
	printf("\n2048����ʼ������ w/s/a/d \n    ��Ӧ ��/��/��/�� �������   (��van�ǵð��س�)\n\n");
	printf("(Ϊ�˷����ӡ 2,4,8,16... �滻Ϊ 1,2,3,4... �Դ������գ�)\n");
	printf("   (����̫����������ϷҲҪʱ�䷴Ӧ�Σ������ĸ���\n");
	{printf("\n               >������Կ���������owo\n");
	printf("\n         ____________________________________,............,");
	printf("\n       /  _ / _ / _ / _ / _ / _ / _ / _ / , -',,.-,-,--/  |\n");
	printf("\n     /  _ / _ / _ / _ / _ / _ / _ / , -' //  /-| //--/   /\n");
	printf("\n   /  _ / _ / _ / _ / _ / _ / , -' `-''--'  `' '-- /   /\n");
	printf("\n /  _ / _ / _ / _ / _ / _,:....................../   /\n");
	printf("\n|________________, '   Produced  by  Ruomiao !  |  /\n");
	printf("                 \"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"'\n\n"); }
	printf("  >Ҫ��ʼ������owo\n");
	printf("        > o  x  \n\n>");
	scanf_s("%c", &a);

	if (a == 'o')
	{
		getchar();
		printf("\n   ���ˣ���Ҫ���hentaiģʽ�>w<          (�ϳ�Ŀ����262144Ҳ����18�£�\n");//��̬ģʽѡ��1
		printf("            > o  x                        ����ÿ�ζ�������twoooooooo���ӣ�)\n\n>");
		scanf_s("%c", &a);

		if (a == 'o')
			return 2;
		else if (a == 'x')
			printf("\n���- -|||");
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
	int c = 0;//��̬ģʽ����
	int reply = beginning();
	if (reply == 1)
		printf("\nFine!����ο��İ£�\n");
	else if (reply == 2)
	{
		printf("\nFine!���Ծ�����������ο��İ£�\n");
		c = 1;
	}
	else if (reply == 0)
	{
		printf("\nOK bye��\n");
		return 0;
	}

	int board[hang][lie];
top1:initboard(board, hang, lie);//��ʼ������
	while (1)
	{
		game(board, hang, lie, c);//��Ϸ
		int r=game(board, hang, lie,c);
		if (r == 6)//Ӯ
		{
			char a = 'm';
			printf(">Nice job����������ȥ����������\n");
			printf("> o  x  \n\n>");
			scanf_s("%c", &a);//��̬ģʽѡ��2
			if (a == 'o')
			{
				printf("Hentaiģʽ���ϳ�Ŀ����262144Ҳ����18�£�����ÿ�ζ��������������ӣ�\n");
				printf("ף�����- -+����\n");
				c = 1;
				goto top1;
			}
			else if (a == 'x')
			{
				printf("Giao�ǣ���\n");
				return 0;
			}
			else
				printf("Wtf???\n");
			break;
		}
		else if (r == 7)//��̬ģʽӮ
		{
			printf("Awwwwwwwwwwwwwesome��\n");
			printf("���������ҵ���bug���Ǽ�Ĵ�ͨ��Hentaiģʽ(������������ǰ��\n���ڶ�����������Ҫ�����գ�(���Բ�ֻ�а���xxx)\n");
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
		else if (r == 4)//��
		{
			printf("Booooooooooooooooom��\nTry again��\n");
			goto top1;
		}
	}
	return 0;
}
