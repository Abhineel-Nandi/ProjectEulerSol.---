#include <stdio.h>
/*  The sum of squares is n*(n +1)*(2*n +1) /12
    The square of sum of n numbers is  ( n*(n+1)/2 ) * ( n *(n +1)/2 )
    If we take the diffrence and solve it algebraically
    We get the diffrence to be  -
        ( 3 * n^4 + 2 * n^3 -3 * n^2 - 2 * n )/12
        so answer is the value of above expression
    To reduce number of multiplication operations  store value of  n^2 .
*/
main(){
        int num = 100 ;
        long temp =0 ;
        long diff ;
        temp =  num * num ; /* value of n^2 */
        diff = (3 * temp * temp + 2 * temp * num - 3 * temp -2 * num )/12 ;
        printf("%ld " , diff);
}