#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//
//int main()
//{
//	const int a = 10;
//	int b = 0;
//	//int* ip = &a;//a是常变量，不能用普通指针接收，通过强转就可以
//	int* ip = (int*)&a;
//
//	*ip = 100;
//	b = a;
//	
//
//	printf("&a => %p  a => %d\n",&a,a);//&a => 00EAFDB0  a => 10
//	printf("&b => %p  b => %d\n", &b, b);//&b = > 00EAFDA4  b = > 10
//	printf("ip => %p  *ip => %d\n", ip,*ip);//ip = > 00EAFDB0 * ip = > 100
//	return 0;
//}


//strlen求字符串长度

//方法1
//size_t 就是 unsigned int
//size_t my_strlen(const char* str) 
//{
//	assert(str != nullptr);
//	int count = 0;
//	while (*str++!='\0')
//	{
//		//*str++;//跟while循环里面的*src++等价
//		count++;
//	}
//	return count;
//}

//方法2
//size_t my_strlen(const char* str)
//{
//	assert(str != nullptr);
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//		//递归,(str+1)相当于str++,再次进入函数str从第二个字符开始计算
//	}
//	else
//	{
//		return 0;
//	}
//}


//方法3
size_t my_strlen(const char* str)
{
	assert(str != nullptr);

	char* start = (char*)str;

	while (*str !='\0')
	{
		str++;
	}
	return str - start;
}



//int main()
//{
//
//	char ar[] = "hello";
//	int len = my_strlen(ar);
//	printf("%d\n", len);
//	return 0;
//	
//}

//方法1
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != nullptr && src != nullptr);
//
//	//while (*src!='\0')
//	//{
//	//	*dest++ = *src++;
//
//	//}
//	
//	while (*dest++ = *src++);//与上面while循环等价
//	*dest = '\0';
//}


//方法2
char* my_strcpy(char* dest, char* src)
{
	assert(dest != nullptr && src != nullptr);
	char* p =  dest;
	while (*src!='\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return dest;
}


//int my_strcmp(const char* first, const char* second)
//{
//	assert(first!=nullptr && second!=nullptr);
//	while (*first !='\0' && *second !='\0')
//	{
//		if (*first != *second) 
//		{
//			break;
//		}
//		first++;
//		second++;
//
//	}
//	return *first - *second;
//}


int my_strcmp(const char* first, const char* second)
{

	assert(first!=nullptr && second!=nullptr);
	int k = 0;
	while ((k = *first - *second) == 0 && *first++ && *second++);

	return k;
}
int main()
{
	char str1[20] = { "yangjilong" };
	char str2[20] = {};
	char str3[20] = { "hello" };
	my_strcpy(str1,my_strcpy(str2,str3));
	printf("%s\n",str2);

	char stra[] = "abcde";
	char strb[] = "abcde";
	int ret = my_strcmp(stra, strb);
	printf("%d\n",ret);
	return 0;
}