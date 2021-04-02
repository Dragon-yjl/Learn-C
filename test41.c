#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define MAX_ROW  9
#define MAX_COL  9
#define MINE_COUNT  10

int Menu() {
	printf("==================\n");
	printf("欢迎来到扫雷游戏!\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("==================\n");
	printf("请输入您的选项:\n");
	int choice = 0;
	scanf("%d",&choice);
	return choice;
}

void Init(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL]) {
	//1.先初始化showMaP,把所有位置设成*
	memset(showMap, '*', MAX_ROW * MAX_COL);
	//2.在初始化mineMap,所有位置设成‘0’
	//随机找10个位置设成地雷
	srand((unsigned int)time(0));//设置随机种子
	memset(mineMap, '0', MAX_ROW * MAX_COL);
	int count = MINE_COUNT;
	while (count>0) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mineMap[row][col]=='1') {
			//这已经是雷了，重新随机
			continue;
		}
		mineMap[row][col] = '1';
		count--;
	}
}
void Print(char showMap[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			printf("%c ", showMap[row][col]);
		}
		printf("\n");
	}
}

//row,col都是输出型函数
void Input(char showMap[MAX_ROW][MAX_COL],int* row,int* col) {
	while (1) {
		printf("请输入翻开位置的坐标(row,col):");
		scanf("%d %d", row, col);//已经是指针，不用取地址
		if (*row < 0 || *row >= MAX_ROW || *col < 0 || *col >= MAX_COL) {
			//输入了非法数据
			printf("您的输入有误！\n");
			continue;
		}
		if (showMap[*row][*col] != '*') {
			//当前位置已经被翻开
			printf("当前位置已经被翻开！\n");
			continue;
		}
		break;//用户输入完毕，检验完毕
	}
}

int CheckMine(char mineMap[MAX_ROW][MAX_COL],
	int row,int col) {
	if (mineMap[row][col]=='1') {
		return 1;
	}
	return 0;
}

int CheckLastBlank(int* count) {
	//思路是记录当前翻开格子的数量
	//格子数量达到71个，游戏胜利
	//进入函数就应该增加count
	*count += 1;
	if (*count==71) {
		return 1;
	}
	return 0;
}

void Update(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL],
	int row, int col) {
	//翻开指定位置之后要把则个位置的*替换成一个数字
	//需要先统计这个数字周围8个格子中有几个雷
	int count = 0;
	for (int r = row - 1; r <= row + 1;r++) {
		for (int c = col - 1; c <= col + 1;c++) {
			if (r < 0 || r >= MAX_ROW 
				|| c < 0 || c >= MAX_COL) {
				continue;
			}
			if (r==row&&c==col) {
				continue;//当前位置在中心不需要判定
			}
			if (mineMap[r][c]=='1') {
				count++;
			}
		}
	}
	//需要把数字转成对应的字符
	//ascll码中，字符01234连续的
	showMap [row][col] = count+'0';
}

void Game() {
	//1.先创建两个地图，并初始化
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	int count = 0;
	Init(showMap, mineMap);
	while (1) {
		//2.打印地图
		Print(showMap);
		//3.提示玩家输入要翻开的坐标，并检验
		int row = 0;
		int col = 0;
		Input(showMap,&row, &col);
		//4.检查当前位置是否有雷，如果是，则游戏失败
		if (CheckMine(mineMap,row,col)) {
			Print(mineMap);
			printf("你踩雷了！游戏失败！\n");
			break;
		}
		//5.检查当前位置是否使最后一个位置，如果是，则游戏胜利
		if (CheckLastBlank(showMap)) {
			printf("恭喜你，扫雷成功!\n");
			break;
		}
		//6.更新翻开的当前位置，吧*替换成一个数字
		Update(showMap,mineMap, row,col);
	}
}
int main() {
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}else if (choice == 0) {
			printf("goodbye!\n");
			break;
		}else {
			printf("您的输入有误！\n");
		}
	}
	return 0;
}