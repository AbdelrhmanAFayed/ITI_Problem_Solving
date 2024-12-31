#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int birthdayCakeCandles(int candles_count, int* candles)
{
    int max = 0 ;
    int i = 0 ; 
    int count = 0 ;

    for(i = 0 ; i < candles_count ; i++)
    {
        if(candles[i] > max)
        {
            max = candles[i] ; 
            count = 1 ;
        }
        else if (candles[i] == max)
        {
            count++ ;
        }

    }

    return count ;
}



void main(void)
{



}