#include <stdio.h>

int main(int argc, char const *argv[])
{
	float x,y;
	scanf("%f %f", &x, &y);

	if (x == y && x == 0) printf("Origem\n");
	else if  (x == 0) printf("Eixo Y\n");
	else if (y == 0) printf("Eixo X\n");
	else if (x > 0 && y > 0) printf("Q1\n");
	else if (x > 0 && y < 0)  printf("Q4\n");
	else if (x < 0 && y < 0)  printf("Q3\n");
	else if (x < 0 && y > 0) printf("Q2\n");

	return 0;
}