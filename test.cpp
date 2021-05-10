#include<iostream>
#include<cstring>
#include<string>
#include<string.h>
#include<stdio.h>
#define ok 1
#define error 0
#define maxsize 3 //停车场的最大容量，根据具体情况设置
using namespace std;
typedef struct  //时间的数据结构 
{
	int hour;
	int minute;
}date;
typedef struct  //汽车的信息数据结构 
{
	int getleave;
	char number[8];
	int Location;
	date time;
}car;
typedef struct  //构建栈 
{
	car* top;
	car* base;
	int stacksize;
}Sqstack;
int Initstack(Sqstack& s) //栈的初始化 
{
	s.base = new car[maxsize];
	if (!s.base)
		exit(error);
	s.top = s.base;
	s.stacksize = 2;
	return ok;
}
int pop(Sqstack& s, car& e)  //出栈 
{
	*s.top--;
	e = *s.top;
	return ok;
}
int push(Sqstack& s, car e)  //入栈 
{
	*s.top = e;
	*s.top++;
	return ok;
}
int Isemptystack(Sqstack& s)  //判断栈是否为空 
{
	if (s.top - s.base == 3)
		return error;
	else
		return ok;
}
typedef struct QNode  //定义队 
{
	car data;
	struct QNode* next;
}QNode, * Queueptr;
typedef struct
{
	Queueptr front;
	Queueptr rear;
}LinkQueue;
int InitQueue(LinkQueue& Q) //初始化队列 
{
	Q.front = Q.rear = new QNode;
	Q.front->next = NULL;
	return ok;
}
int InQueue(LinkQueue& Q, car e)  //入队 
{
	QNode* p;
	p = new QNode;
	p->data = e;
	p->next = NULL;
	Q.rear->next = p;
	Q.rear = p;
	return ok;
}
int OutQueue(LinkQueue& Q, car& e)  //出队 
{
	QNode* p;
	p = new QNode;
	p = Q.front->next;
	e = p->data;
	Q.front->next = p->next;
	if (Q.rear = p)
		Q.rear = Q.front;
	delete p;
	return ok;
}
int howlong(int hour1, int minute1, int hour2, int minute2) //计算时间 
{
	return (hour2 - hour1) * 60 + (minute2 - minute1);
}

car gettop(Sqstack s) { return *(s.top - 1); }
int main()
{
	Sqstack park, temp;
	LinkQueue lane;
	Initstack(park);
	Initstack(temp);
	InitQueue(lane);
	int price = 2, location1 = 0, location2 = 0;
	while (1)
	{
		car one;
		cout << "输入车牌号：";
		cin >> one.number;
		if (strcmp(one.number, "########") == 0)
			break;
		cout << "输入时刻：";
		cin >> one.time.hour >> one.time.minute;
		cout << "输入进出状态：";
		cin >> one.getleave;
		switch (one.getleave)
		{
		case 1:	if (Isemptystack(park))
		{
			push(park, one);
			location1++;
			one.Location = location1;
			cout << "车辆在停车场的位置为：" << one.Location << endl;

			cout << "********************************************" << endl;
		}
			  else
		{
			InQueue(lane, one);
			location2++;
			one.Location = location2;
			cout << "车辆在便道的位置为：" << one.Location << endl;
			cout << "********************************************" << endl;
		}
			  break;
		case 0:	int hour, minute, i;
			car e, t;
			do
			{
				pop(park, e);
				push(temp, e);
			} 		while (strcmp(e.number, one.number) != 0);
			cout << "出车车牌为：" << one.number << endl;
			cout << "出车时间为：" << one.time.hour << ":" << one.time.minute << endl;
			cout << "停车费用为：" << howlong(e.time.hour, e.time.minute, one.time.hour, one.time.minute) * price << "元" << endl;
			cout << "********************************************" << endl;
			while (temp.top != temp.base)
			{
				pop(temp, t);
				push(park, t);
				t.Location--;
			}
			OutQueue(lane, e);
			e.Location = maxsize;
			push(park, e);
			location2--;
			break;
		default:
			break;
		}
	}
	return 0;
}
