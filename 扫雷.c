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
	int count = EASY_COUNT;//�����׵���Ŀ
	int x = 0;
	int y = 0;
	while (count >= 1)
	{
		x = rand() % row + 1;//��õ�ֵһ���ڣ�1-9��֮��
		y = rand() % col + 1;
		if (Board[x][y] == '0')//�ж������Ƿ��Ѿ������ó�����
		{
			Board[x][y] = '1';//�����׵Ļ��������������ó���
			count--;//count��10��ʼ��������Ҫ�׵ĸ�����1��ֱ�������׵ĸ�����10Ϊֹ��ѭ������
		}
	}
}
int getmine(char mine[ROWS][COLS],int x,int y)//�����û�����������Χ8������λ�����׵ĸ���������Χ�׵ĸ�������������û�
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
	while (win < row * col - EASY_COUNT)//ͨ�������û���������Ĵ������ж���Ϸ��ʤ��
	//���û�����Ĵ�����71��ʱ��˵���û�δ��ը����������ʣ��δ������ĵ�λ�ã�ȫΪ��
	{
		printf("������Ҫ���׵�����:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("��ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = getmine(mine, x, y);//��������������Χ�׵���Ŀ
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("��������겻�Ϸ�,��������");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬ɨ�׳ɹ�");
	}

}

void game()
{
	//1.��ʼ�����̣����ǽ����������̣�һ��show�����������û�չʾ�����̣�һ��mine���̱������׵�����
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//2.����һ������,��ʼ������
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//3.���û���ӡ�������show
	//����һ��������ӡ����
	DisplayBoard(show, ROW, COL);
	//4.��mine�����в�����
	Setmine(mine, ROW, COL);
	//5.�����ú��ˣ���ô��һ������������
	Findmine(mine, show, ROW, COL);

}

int main()
{
	srand((unsigned int) time(NULL)); //ʱ�������ȡ�����һ������
	int input = 0;
	do
	{
		menu();
		printf("�������ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������ȷ�ı��\n");
			break;
		}
	} while (input);
	return 0;
}






















































