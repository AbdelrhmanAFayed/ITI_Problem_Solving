#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long aVeryBigSum(int ar_count, long* ar) 
{
    int i ;
    double sum ;
    for (i = 0 ; i < ar_count ; i++)
    {
        sum = sum + ar[i] ;
    }
    
    return sum ;
}

 

void main (void)
{
 

}