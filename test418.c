#include<stdio.h>
#include<stdlib.h>

struct student

{
	int num;

	char* name;

	char sex;

	int age;

}stu[5] = { {1001,"顾奈",'F',18},{1002,"顾陌",'M',19},{1003,"顾城",'F',19},{1004,"李花",'F',19},{1005,"张三",'M',18} };

  int main()

{
	int i;

	struct student* ps;

	printf("Num\tName\t\tSex\tAge\t\n");

	// 用指针变量输出结构体数组元素。

		for (ps=stu;ps<stu+5;ps++)

			printf("%d\t%-10s\t%c\t%d\t\n",ps->num,ps->name,ps->sex,ps->age);

	// 用数组下标法输出结构体数组元素学号和年龄。

		for (i=0;i<5;i++)

			printf("%d\t%d\t\n", stu[i].num, stu[i].age);

}
