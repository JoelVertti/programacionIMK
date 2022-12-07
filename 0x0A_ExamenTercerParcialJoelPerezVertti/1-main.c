#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char juego[10][10];

    for(int j=0;j<10;j++)
    {
        for(int i=0;i<10;i++)
        {
        juego[i][j]=' ';
        }
    }

    for(int j=1;j<11;j++)
    {
        for(int i=1;i<11;i++)
        {
        int num = rand () % 11;
            if(num % 2==0)
            {
                juego[i][j]='+';
            }
            else
            {
                juego[i][j]=' ';
            }
            printf(" %c ",juego[i][j]);
            }

    printf("\n");
    }

    printf("\n");
    
    int x=1;
    char juegopt2[10][10];
    
    while(x<10)
    {
        int cv=0;
        for(int j=1;j<11;j++)
        {
        for(int i=1;i<11;i++)
        {
        juegopt2[i][j]=juego[i][j];
        if(juego[i][j]=='+')
        {
            if(juego[i-1][j-1]=='+')
            {
                cv++;
            }

                if(juego[i][j-1]=='+')
                {
                    cv++;
                }
                    if(juego[i+1][j-1]=='+')
                    {
                        cv++;
                    }
                        if(juego[i-1][j]=='+')
                        {
                            cv++;
                        }
                            if(juego[i+1][j]=='+')
                            {
                                cv++;
                            }
                                if(juego[i-1][j+1]=='+')
                                {
                                    cv++;
                                }
                                    if(juego[i][j+1]=='+')
                                    {
                                        cv++;
                                    }
                                        if(juego[i+1][j+1]=='+')
                                        {
                                            cv++;
                                        }
                                            if(cv==2 || cv==3)
                                            {
                                                juegopt2[i][j]='+';
                                            }
                                                if(cv<2 || cv>3)
                                                {
                                                    juegopt2[i][j]=' ';
                                                }
        cv=0;
            
        }
        else if(juego[i][j]==' ')
        {
            if(juego[i-1][j-1]=='+')
            {
                cv++;
            }
                if(juego[i][j-1]=='+')
                {
                    cv++;
                }
                    if(juego[i+1][j-1]=='+')
                    {
                        cv++;
                    }
                        if(juego[i-1][j]=='+')
                        {
                            cv++;
                        }
                            if(juego[i+1][j]=='+')
                            {
                                cv++;
                            }
                                if(juego[i-1][j+1]=='+')
                                {
                                    cv++;
                                }
                                    if(juego[i][j+1]=='+')
                                    {
                                        cv++;
                                    }
                                        if(juego[i+1][j+1]=='+')
                                        {
                                            cv++;
                                        }
                                            if(cv==3)
                                            {
                                                juegopt2[i][j]='+';
                                            }
        cv=0;
        }
        
    }
    
    }
    printf("\n");

    for(int j=1;j<11;j++)
    {
        for(int i=1;i<11;i++)
        {
            printf(" %c ",juegopt2[i][j]);
        }
    printf("\n");
    }

    for(int j=1;j<11;j++)
    {
        for(int i=1;i<11;i++)
        {
            juego[i][j]=juegopt2[i][j];
        }
    }
    x++;
    }

    return 0;
}


