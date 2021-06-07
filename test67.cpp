#include<stdio.h>
#include<assert.h>

//void Left_Move_Ar(int* ar,int n)
//{
//	assert(ar != nullptr);
//
//	int tmp = ar[0];
//	for (int i = 0; i < n - 1; ++i)
//	{
//		ar[i] = ar[i + 1];
//	}
//	ar[n - 1] = tmp;
//
//}
//
//void Print(int* ar, int n)
//{
//	assert(ar != nullptr);
//	for (int i = 0; i < n - 1; ++i)
//	{
//		printf("%d\n",ar[i]);
//	}
//
//}
//int main()
//{
//	const int n = 10;
//	int ar[n] = { 12,23,34,45,56,67,78,89,90,100 };
//
//	Left_Move_Ar(ar, n);
//	Print(ar, n); 
//	return 0;

//
//int main()
//{
//	const int n = 10;
//	int ar[n] = { 12,23,34,45,56,67,78,89,90,100 };
//	int tmp = ar[0];
//	for (int i = 0; i < n - 1; i++)
//	{
//		ar[i] = ar[i+1];
//	}
//	ar[n - 1] = tmp;
//	for (int i = 0; i < n - 1; ++i)
//	{
//		printf("%d\n",ar[i]);
//	}
//	return 0;
//}


void my_strcpy(char* dest,const char* src)
{

	assert(dest != nullptr && src != nullptr);
	char* p = dest;
	while (*src !='\0')
	{

		*p = *src;
		p++;
		src++;
	}

	*p = '\0';
}

//char* my_strcpy(char* dest, char* src)
//{
//
//	assert(dest != nullptr && src != nullptr);
//	char* p = dest;
//	while (*src != '\0')
//	{
//
//		*p = *src;
//		p++;
//		src++;
//	}
//
//	*p = '\0';
//	return dest;
//}
//
//
//int main()
//{
//	char stra[10] = "yhping";
//	char strb[10];
//	char strc[10];
//
//	//my_strcpy(strb, stra);
//	//my_strcpy(strc, strb);
//	//printf("%s", strb);
//	//printf("\n");
//	//printf("%s",strc);
//	//return 0;
//
//
//	my_strcpy(strc, my_strcpy(strb, stra));
//	printf("stra: %s\n",stra);
//	printf("strb: %s\n", strb);
//	printf("strc: %s\n", strc);
//
//	
//	return 0;
//}


//int my_strcmp(const char* first, const char* second)
//{
//
//	assert(first != nullptr && second != nullptr);
//	while (*first != '\0' && *second != '\0')
//	{
//		if (*first != *second) {
//			break;
//
//		}
//
//		++first;
//		++second;
//	}
//	return (*first - *second);
//}

//或
int my_strcmp(const char* first, const char* second)
{
	assert(first != nullptr && second != nullptr);
	int k = 0;
	while ((k = *first - *second) == 0 && *first++ && *second++);
		return k;
}
int main()
{

	char stra[] = "yhping";
	char strb[] = "yhpang";
	int dest = my_strcmp(stra, strb);
	printf("%d\n",dest);

	return 0;
}