#include<stdio.h>
int main()
{
    int array[5]={1,2,3,4,5};
    int i, max;

     printf("Hole Array :\n");
     for(i=0;i<5;i++)
     {
         printf("%d ",array[i]);
     }
     max = array[0];

     for(i=1;i<5;i++)
     {
         if(max<array[i])
         {
             max=array[i];
         }
     }
     printf("\nMinimum value : %d  ",max);

    return 0;
}
