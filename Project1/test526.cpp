#include<stdio.h>
#include<stdlib.h>

//判断是否为闰年
//bool Is_LeapYear(int year)
//
//{
//
//	bool res = false;
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		res = true;
//	
//	}
//	return res;
//	//或者return if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//
//}

//int main() 
//{
//	int year;
//	scanf_s("%d",&year);
//	bool b = Is_LeapYear(year);
//	
//	printf("%d",b);
//	return 0;
//}

//
//int GetYearMonth(int year, int month)
//{
//	static const int days[] = { 29,31,28,31,30,31,30,31,3130,31,30,31 };
//
//	if (month == 2 && Is_LeapYear(year))
//	{
//		month = 0;
//	}
//	return days[month];
//
//}

////成绩等级
//int main() {
//
//	char grade = '\0';
//	printf("input grade :(A,B,C,D,E): \n");
//	grade = getchar();
//		switch (grade)
//		{
//		case 'A':printf("90 - 100 \n")
//			;break;
//		case 'B':printf("80 - 89 \n")
//			;break;
//		case 'C':printf("70 - 79 \n")
//			;break;
//		case 'D':printf("60 - 69 \n");
//			break;
//		case 'E':printf("< 60 \n");
//			break;
//		default:
//			printf("input char error \n");
//			break;
//		}
//	return 0;
//}


//int main()
//{
//	
//	
//	for (int i = 1; i < 10;i++)
//	{
//		for (int j = 1; j <=i  ; j++)
//		{
//			printf("%d*%d=%2d   ", j,i,i * j);
//			
//		}
//		printf("\n");
//	}
//
//	
//}

void  Init_Ar(int ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		ar[i] = rand() % 100 + 1;

	}
}


void Swap_Ar(int* ar, int* br)

{
	
	int temp = *ar;
	*ar = *br;
	*br = temp;

}


void Print_Ar(int ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%4d", ar[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
}

void BubberSort(int ar[], int n)
{
	bool tag = true;
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (ar[j] > ar[j + 1])
			{
				Swap_Ar(&ar[j], &ar[j + 1]);
				tag = false;
			}
		}
		if (tag)
		break;
	}

	
}

int main()
{
	const int n = 100;
	int ar[n] = {};
	Init_Ar(ar, n);
	Print_Ar(ar, n);
	printf("**********************************************\n");
	BubberSort(ar, n);
	Print_Ar(ar, n);
	return 0;
}