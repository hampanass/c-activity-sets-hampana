#include <stdio.h>
int input();
int add(int a, int b, int sum);
void output(int a, int b, int sum);


int main()
{
int a, b, sum;
a=input();
b=input();
sum=add(a,b,sum);
output(a,b, sum);
return 0;
}

int input ()
{
int a,b;
printf("Enter the value\n");
scanf("%d", &a);
return a;
printf("Enter the value\n");
scanf("%d", &a);
return b;
}

int add (int a, int b, int sum)
{
 sum=a+b;
 return sum;
}

void output(int a, int b, int sum) 
{ 
    printf("the sum of %d and %d is %d", a, b, sum);
}
