#include <stdio.h>

int main()
{
  	int N, i;
  
  	printf("Introduzca un numero :\n");
  	scanf("%d", &N);
  	
  	printf("\n La lista del numero %d es : \n", N);  	
	for(i = 1; i <= N; i++)
  	{
    	printf(" %d \n", i);
  	}
  
  	return 0;
}
