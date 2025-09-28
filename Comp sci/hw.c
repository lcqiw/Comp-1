#include <stdio.h>
#include <math.h>


int main(int argc, char* argv[])
{
    float term = 1;
    float sum = 1;
    float sum_last = 0;
    float n = 1;
    float fact = 1;
    int x;
    printf("please enter a value for x: ");
    scanf ("%d", &x);

    do
    {
        fact = fact * n;
        term = pow(x, n) / fact; 
        sum_last = sum;
        sum = sum + term;
        n = n + 1;
    } while (sum != sum_last);  //compare within some episolon...
    printf("The sum is %f\n", sum);

    return 0;
}
 
 /*
 term = 1.
     sum = 1.
     sum_last = 0.
n=1
do while sum != sum_last
          term = x^n/(n!)
          sum_last = sum
          sum = sum + term
end do*/