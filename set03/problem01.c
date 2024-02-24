#include <stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main()
{
    float x1,x2,y1,y2,distance;
    input(&x1,&x2,&y1,&y2);
    distance = find_distance(x1,x2,y1,y2);
    output(x1,x2,y1,y2,distance);
    return 0;
}

void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter the first x-cordinate:\n");
    scanf("%f",x1);
    printf("Enter the second x-cordinate:\n");
    scanf("%f",x2);
    printf("Enter the first y-cordinate:\n");
    scanf("%f",y1);
    printf("Enter the second y-cordinate:\n");
    scanf("%f",y2);
}

float find_distance(float x1, float y1, float x2, float y2)
{
    float distance;
    distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    return distance;
}

void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("distance between the pionts A(%f,%f) and B(%f,%f) is %f",x1,x2,y1,y2,distance);
}
