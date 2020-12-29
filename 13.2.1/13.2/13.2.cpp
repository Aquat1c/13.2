#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#define N 2
#define DIFF(x, z) (x - z)
#define MULTIP(x, y, z) (x*y, y*z, z*x, z*y)
#define SQR(x) (x)*(x)
#define MIN(left,right) ((left)<(right))?(left):(right) 
#define MAX(left,right) ((left)>(right))?(left):(right) 
#define PRINTI(w) puts("Value"); \
 printf(#w"= %d\n",w)
#define PRINTR(w) puts ("Result: "); \
  printf (#w "=% f \ n",(float)w)

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y, z,
		left, right, // auxiliary variables
		result; // minimum (maximum) between two (three) numbers
	char ch;
	do
	{
#if N > 3
		puts("Determine the maximum number between the three ");
		puts("Enter 3 numbers (x,y,z)");
		scanf_s("%d", &x);
		PRINTI(x);
		scanf_s("%d", &y);
		PRINTI(y);
		scanf_s("%d", &z);
		PRINTI(z);
		left = DIFF(x, z);
		left = SQR(left);
		right = DIFF(x, y);

		result = MIN(left, right);
		PRINTR(result);
		puts("Repeat? y/n"); ch = _getch();
#else N <= 3
		{
			puts("Find the minimum among the two");
			puts("Enter 3 numbers (x,y,z)");
			scanf_s("%d", &x);
			PRINTI(x);
			scanf_s("%d", &y);
			PRINTI(y);
			scanf_s("%d", &z);
			PRINTI(z);
			left = DIFF(x, y);
			right = MULTIP(x,y, z);
			result = MAX(left, right)+MIN(left,right);
			PRINTR(result);
			puts("continue? (y/n) "); ch = _getch(); }
#endif 
	} while (ch == 'y' || ch == 'Y');
}
