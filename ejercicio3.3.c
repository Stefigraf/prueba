#include <stdio.h>


int Entero( void);

int main()
{
	int v;
	setbuf(stdout, NULL);
	v= Entero();
	printf("el numero es %d", v);
	return 0;
}
int Entero( void)
{
	int num;

	printf("ingrese un numero entero: ");
	fflush(stdin);
	scanf("%d", &num);

	 return num;
}
