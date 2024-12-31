#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int diagonalDifference(int arr_rows, int arr_columns, int ** arr) 
{
    int i,j ;
    j = arr_columns - 1  ; 
    int firstsum = 0 ;
    int secsum = 0 ;
    for (i = 0 ; i < arr_rows ; i++)
    {
        firstsum = firstsum + arr[i][i] ;
        secsum   = secsum   + arr[i][j] ; 
        j-- ;
    }

    firstsum = firstsum - secsum ;
    firstsum = abs(firstsum) ;
    return firstsum ;

}
 

void main (void)
{
    int n = 3 ;

    int** arr = malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++) 
    {
        
        *(arr + i) = malloc(n * (sizeof(int)));

    }

    arr[0][0] = 2; arr[0][1] = 2; arr[0][2] = 2;
    arr[1][0] = 2; arr[1][1] = 2; arr[1][2] = 2;
    arr[2][0] = 2; arr[2][1] = 2; arr[2][2] = 2;
    
    int diff = diagonalDifference(3,3,arr) ;

    printf("%d",diff); 


}