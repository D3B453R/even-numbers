//=============================================================
//Autor: Maximilian Müller
//Datum: 29.04.2020
//Funktion: Gerade Zahlen ausgeben
//=============================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,i;

    for(i=0; i<368; i++)
    {
        a++;
        if(a%2==0)
        {
            printf("%d\t", a);
        }
        if(a%16==0)
        {
            printf("\n");
        }
    }

    return 0;
}
