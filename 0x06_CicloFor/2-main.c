#include <stdio.h>

int main()
{
  	int N = 0;
	int i = 0;
  	printf("Introduzca un numero :\n");
  	scanf("%d", &N);
  	
  	printf("\n La lista del numero %d es : \n", N);  	
	for(i = N; i >= 1; i--)
  	{
    	printf(" %d \n", i);
  	}
  
  	return 0;
}
