#include <stdio.h>

int main()
{
    char ALF = 'a';

    printf("El alfabeto de A-Z es: \n");
    while(ALF<='z')
    {
        printf("%c\n", ALF);
        ALF++;
    }

    return 0;
}