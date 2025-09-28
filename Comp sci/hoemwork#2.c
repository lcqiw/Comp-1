
#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[])
/*
{
    double a;
    double b;
    double c;
    double x;
    double y;
    double f;
    f =((3+(4*x)/5)- ((10(y-5)(a+b+c))/x))+ (9(4/x) +(9+x/y))
    f =( (4/3(r+34))- (9(a+bc))+ ((3+d(2+a))/a+bd) )
    f = ((5.5 * pow(r+2.5,2.5+t))
} 
*/
{
int score = 80;
if (score >= 60) {
           printf("D");
} else if (score>=70){
 printf("C");
} else if (score >=80){
    printf("B");
} else if (score >=90){
    printf("A");
} else{
    printf("F");
}
return 0;
}