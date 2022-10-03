#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define EASY_COUNT 10
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*********************************\n");
	printf("******1.play*********************\n");
	printf("******0.exit*********************\n");
}
void  InitBoard(char Board[ROWS][COLS], int row, int col,char set)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			Board[i][j] = set;
		}
	}
}
void DisplayBoard(char Board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0; x <=col; x++)
	{
		printf("%d ", x);
	}
	printf("\n");
	for (x = 1; x <= row; x++)
	{
		printf("%d ", x);
		for (y = 1; y <= col; y++)
		{
			printf("%c ",Board[x][y]);
		}
		printf("\n");
	}
}
void Setmine(char Board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//设置雷的数目
	int x = 0;
	int y = 0;
	while (count >= 1)
	{
		x = rand() % row + 1;//获得的值一定在（1-9）之间
		y = rand() % col + 1;
		if (Board[x][y] == '0')//判断坐标是否已经被设置成了雷
		{
			Board[x][y] = '1';//不是雷的话，将此坐标设置成雷
			count--;//count从10开始减，所需要雷的个数减1；直到设置雷的个数满10为止，循环结束
		}
	}
}
int getmine(char mine[ROWS][COLS],int x,int y)//计算用户输入坐标周围8个坐标位置上雷的个数，将周围雷的个数情况反馈给用户
{
	return mine[x + 1][y] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x - 1][y + 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y + 1]-8*'0';
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)//通过计算用户输入坐标的次数来判断游戏的胜利
	//当用户输入的次数达71次时，说明用户未被炸死，棋盘上剩下未被点击的的位置，全为雷
	{
		printf("请输入要排雷的坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = getmine(mine, x, y);//计算输入坐标周围雷的数目
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入的坐标不合法,重新输入");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，扫雷成功");
	}

}

void game()
{
	//1.初始化棋盘，我们建立两个棋盘，一个show棋盘用来向用户展示的棋盘，一个mine棋盘背后存放雷的棋盘
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//2.创建一个函数,初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//3.向用户打印这个棋盘show
	//创建一个函数打印棋盘
	DisplayBoard(show, ROW, COL);
	//4.在mine棋盘中布置雷
	Setmine(mine, ROW, COL);
	//5.雷设置好了，那么下一步就是排雷了
	Findmine(mine, show, ROW, COL);

}

int main()
{
	srand((unsigned int) time(NULL)); //时间戳，获取任意的一个数字
	int input = 0;
	do
	{
		menu();
		printf("输入你的选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("进入游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入正确的编号\n");
			break;
		}
	} while (input);
	return 0;
}






















































