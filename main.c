//=============================================================
//Autor: Maximilian M�ller
//Datum: 29.04.2020
//Funktion: Gerade Zahlen ausgeben
//=============================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 368;
    int c;

    while(a<b)
    {
        a++;
        c=a%2;
        if(c==0)
        {
            printf("%d, ", a);
        }
    }

    return 0;
}
