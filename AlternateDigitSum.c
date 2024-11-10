#include<stdio.h>
int main()
{
    int num,sum1=0,sum2=0,r1,r2;
    scanf("%d",&num);
    while(num)
    {
      r1=num%10;
      sum1=sum1+r1;
      num=num/10;
      r2=num%10;
      sum2=sum2+r2;
      num=num/10;
    }
    if(sum1==sum2)
    {
        printf("Alternate digit sum is same.\n");
    }
    else
    {
        printf("Alternate digit sum is not same.");
    }
}