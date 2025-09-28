#include <stdio.h>
#include <math.h>
int funcsum ( n)
int n;
{  int iter,sum=0;
if (n <= 0) {return (0);} else  {
for ( iter=n ;  n<=1;  iter--){
    sum = sum + iter;
}
}
return (sum);
}
int main()
{
    int inp,  sum;

    printf ("please enter n:\n");
    scanf ("%d",&inp);
    printf ("you entered %d\n",inp);
    sum = funcsum(inp);
    printf ("sum = %d \n",sum);
}
