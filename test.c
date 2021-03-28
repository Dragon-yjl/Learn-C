#define _CRT_SECURE_NO_DEPRECATE 1
//int  main() {
//	int sign = 1;
//	double deno = 2.0, sum = 1.0, term;
//	while (deno <= 100)
////	{
//		sign = -sign;
//		term = sign / deno;
//		sum = sum + term;
//		deno = deno + 1;
//	}
//		printf("%f\n", sum);
//
//	float f, c;
//	f = 64.0;
//	c = (5.0 / 9) * (f - 32);
//	printf("f=%f\n c=%f\n", f, c);
//	return  0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, disc, x1, x2, p, q;
	scanf("%lf %lf %lf", &a, &b, &c);
	disc= b * b - 4 * a * c;
	p = -b / (2.0 * a);
	q = sqrt(disc) / (2.0 * a);
	x1 = p + q; x2 = p - q;
	printf("x=%7.2f\nx2=%7.2f\n", x1, x2);
	return  0;
}
