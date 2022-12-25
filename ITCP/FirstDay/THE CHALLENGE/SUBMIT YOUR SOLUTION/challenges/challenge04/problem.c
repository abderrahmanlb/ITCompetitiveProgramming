#include <stdio.h>
void main ()
{
    int tmp,t1[6]={1,5,6,7,9,10},t2[6]={2,3,12,11,20,4};
    for (int i=0;i<6;i++)
    {
        for (int j=i+1;j<6;j++)
        {
            if(t1[i]>t1[j])
            {
                tmp=t1[i];
                t1[i]=t1[j];
                t1[j]=tmp;
            }
        }
        for (int j=0;j<6;j++)
        {
            if(t1[i]>t2[j])
            {
                tmp=t1[i];
                t1[i]=t2[j];
                t2[j]=tmp;
            }
        }
    }
    for (int i=0;i<6;i++)
    {
        for (int j=i+1;j<6;j++)
        {
            if(t2[i]>t2[j])
            {
                tmp=t2[i];
                t2[i]=t2[j];
                t2[j]=tmp;
            }
        }
    }
    printf ("a= ");
    for (int i=0;i<6;i++)
    printf ("%d ",t1[i]);
    printf ("\nb= ");
    for (int i=0;i<6;i++)
    printf ("%d ",t2[i]);
    printf ("\n");

}