#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void staircase(int n)
{
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;
    for (i = 0 ; i < n ; i++)
    {
        for(j = (n- i -1) ; j > 0 ; j--)
        printf(" ");
        
        for(k = 0 ; k < i+1 ; k++)
        printf("#");

        printf("\n");
    }

}

void main(void)
{
    staircase(6);
}