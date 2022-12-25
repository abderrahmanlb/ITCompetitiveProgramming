#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
    float x1,x2,y1,y2,dis;
    printf("entre the A coordinates\n");
    scanf("%f%f",&x1,&y1);
    printf("entre the b coordinates\n");
    scanf("%f%f",&x2,&y2);

    dis = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf ("the smallest distance is %f",dis);

    return 0 ;
}