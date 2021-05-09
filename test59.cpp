#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
int t = 1;
int n = 0; //表示真假
class TGame
{
public:
	TGame();
	void print();
	void computer();
	void re_disp(); //重新显示棋盘
	void init_player();
	void game_judge(); //判断胜负
	void eat_computer();
	void eat_player(int i, int j, int x, int y);
private:
	char a[6][6];
	int i, j;
	char swap; //交换
	int win, fail;
};
TGame::TGame()
{
	win = 0;
	fail = 0;
}
void TGame::print()
{
	int s = 0;
	cout << "0 1 2 3 4 5" << endl;
	cout << " ┏-----┯-----┯-----┯-----┯-----┯-----┓ " << endl; //打印棋盘格子
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if ((i + j) % 2 == 0)
			{
				cout << " │ ";
				cout << ". "; //此处不能走
				a[i][j] = ' . ';
			}
			else
			{
				cout << " │ ";
				if ((i == 3) ||(i == 2))
				{
					cout << ' '; //空白可以走
					a[i][j] = ' ';
				}
				if (i >= 4)
				{
					cout << ' A'; //人的棋子
					a[i][j] = ' A';
				}
				else if (i <= 1)
				{
					cout << "B"; //电脑的棋子
					a[i][j] = ' B';
				}
			}
		}
		cout << " │ " << s;
		s++;
		cout << endl;
		if (s <= 5) //打印棋盘格子
		{
			cout << " ┣-----┿-----┿-----┿-----┿-----┿-----┫ ";
			cout << endl;
		}
		else
		{
			cout << " ┗-----┻-----┻-----┻-----┻-----┻-----┛ ";
			cout << endl;
		}
	}
}
void TGame::eat_player(int i, int j, int x, int y)
{
	if (a[i][j] == ' A')
		if ((a[i - 1][j - 1] == ' X') ||(a[i - 1][j + 1] == ' B'))
		{
			if ((a[x][y] == ' ') && (i == x + 2) && (j = y + 2))
			{
				swap = a[x][y];
				a[x][y] = a[i][j];
				a[i][j] = swap;
				a[i - 1][j - 1] = ' ';
				win++;
				n = 1;
				re_disp();
			}
			else if ((a[x][y] == ' ') && (i == x + 2) && (j == y - 2))
			{
				swap = a[x][y];
				a[x][y] = a[i][j];
				a[i][j] = swap;
				a[i - 1][j + 1] = ' ';
				win++;
				n = 1;
				re_disp();
			}
		}
}
void TGame::eat_computer()
{
	system("cls");
	for (i = 0; i < 4; i++)
		for (j = 5; j >= 0; j--)
		{
			if (a[i][j] == ' B')
			{
				if ((a[i + 2][j - 2] == ' ') && (a[i + 1][j - 1] == ' A'))
				{
					swap = a[i + 2][j - 2];
					a[i + 2][j - 2] = a[i][j];
					a[i][j] = swap;
					a[i + 1][j - 1] = ' ';
					fail++;
					n = 1;
					//cout<<"玩家吃掉一子"<<endl;
					re_disp();
				}
				else if ((a[i + 2][j + 2] == ' ') && (a[i + 1][j + 1] == ' A'))
				{
					swap = a[i + 2][j + 2];
					a[i + 2][j + 2] = a[i][j];
					a[i][j] = swap;
					a[i + 1][j + 1] = ' ';
					fail++;
					n = 1;
					//cout<<"玩家被吃掉一子"<<endl;
					re_disp();
				}
			}
		}
}
void TGame::computer()
{
	eat_computer();
	if (n == 0)
	{
		int s;
		for (i = 4; i >= 0; i--)
		{
			for (j = 4; j >= 0; j--)
			{
				s = j;
				if ((a[i + 1][j - 1] == ' ') && (a[i][j] == ' B'))
				{
					int t;
					t = a[i + 1][j - 1];
					a[i + 1][j - 1] = a[i][j];
					a[i][j] = t;
					break;
				}
				else if ((a[i + 1][j + 1] == ' ') && (a[i][j] == ' B'))
				{
					int t;
					t = a[i + 1][j + 1];
					a[i + 1][j + 1] = a[i][j];
					a[i][j] = t;
					break;
				}
			}
			if (s == j) break;
		}
	}
	n = 0;
	system("cls");
	cout << "电脑走了一步" << endl;
	if (n == 1)
		cout << "电脑吃掉了一子" << endl;
	re_disp();
}
void TGame::re_disp()
{
	int k;
	cout << " 0 1 2 3 4 5" << endl;
	cout << " ┏-----┯-----┯-----┯-----┯-----┯-----┓ " << endl;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
			cout << " │ " << a[i][j];
		cout << " │ " << i;
		k = i;
		k++;
		if (k <= 5)
		{
			cout << endl;
			cout << " ┣-----┿-----┿-----┿-----┿-----┿-----┫ ";
			cout << endl;
		}
		else
		{
			cout << endl;
			cout << " ┗-----┻-----┻-----┻-----┻-----┻-----┛ ";
			cout << endl;
		}
	}
}
void TGame::init_player()
{
	int i, j, x, y;
	cout << "请选择棋子的横纵坐标, 之后按回车键继续" << endl;
	cin >> i >> j;
	cout << "请选择你将下的位置坐标， 之后按回车键继续" << endl;
	cin >> x >> y;
	eat_player(i, j, x, y);
	if (n == 0)
	{
		if ((i == x + 1) && (j == y - 1) && (a[x][y] == ' ') && (a[i][j] == ' A'))
		{
			swap = a[x][y];
			a[x][y] = a[i][j];
			a[i][j] = swap;
		}
		else if ((i == x + 1) && (j == y + 1) && (a[x][y] == ' ') && (a[i][j] == ' A'))
		{
			swap = a[x][y];
			a[x][y] = a[i][j];
			a[i][j] = swap;
		}
		else
		{
			system("cls");
			re_disp();
			cout << "您选择的不是棋子请重新选择， 或者您落子的位置不正确" << endl;
			init_player();
		}
	}
	n = 0;
	re_disp();
}
void TGame::game_judge()
{
	int ch1 = 0, ch2 = 0;
	for (j = 0; j < 6; j++)
	{
		if (a[0][j] == ' ')
			ch1++;
		if (a[5][j] == ' B')
			ch2++;
	}
	if ((win > 3)|| (ch1 == 3))
	{
		cout << "YOU WIN !" << endl;
		t = 0;
	}
	if ((fail > 3) || (ch2 == 3))
	{
		cout << "YOU LOSE !" << endl;
		t = 0;
	}
}
void textbackground()
{
	system("color a1");
	return ;
}
int main()
{
	system("color a1");
	void textbackground(int color);
	system("cls");
	printf("\n----------------------------- 数 字 跳 棋 游 戏 ( 改 进 版 )------------------------------\n") ;
		cout << "玩家棋子是‘A’ ， 电脑棋子是‘B’ ， ‘. ’ 表示不可走。 " << endl;
	printf("\n\nPRESS ENTER TO START\n\n") ;
		getchar();
	system("cls");
	TGame game;
	game.print();
	while (t == 1)
	{
		game.init_player();
		game.computer();
		game.game_judge();
	}
	cout << "PRESS ENTER TO END"<<endl;
		getchar();
	cout << "------------------------------ G A M E	O V E R------------------------------";
		getchar();
	return 0;
}
