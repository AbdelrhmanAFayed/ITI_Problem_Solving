#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void plusMinus(int arr_count, int* arr) {
    int pos = 0 ;
    int neg = 0 ;
    int zero = 0 ;
    int i = 0 ;
    for(i = 0 ; i < arr_count ; i++)
    {
        if (arr[i] == 0)
        {
            zero++ ;
        }
        else if (arr[i] > 0)
        {
            pos++ ;
        }
        else 
        {
            neg++ ;

        }
    }
    float res = (float)pos / arr_count ;

    printf("%.4f\n",res);

    res = (float)neg /arr_count ;

    printf("%.4f\n",res);

    res = (float) zero /arr_count ;
    printf("%.4f\n",res);

}
 

void main (void)
{
 

}