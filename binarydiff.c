#include<stdio.h>
#include<conio.h>
void main()
{
    int a[4];
    int b[4];
    int i,j,k=0;
    int bin;
    int sum[20];
    printf("enter a four bit no. a\n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter a four bit no. b\n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("enter borrow:\n");
    {
      scanf("%d",&bin);
    }
    i=3;
    while(b[i]!=1)
       i--;
    for(j=i-1;j>=0;j--)
    {
        b[j]=1-b[j];
    }
    printf("2's complement of b is ");
    for(i=0;i<4;i++)
        printf("%d",b[i]);
    for(i=3;i>=0;i--)
    {
        if((a[i]+b[i]+bin)==2)
         {
            sum[k]=0;
            bin=1;
            k++;
         }
         else if((a[i]+b[i]+bin)==3)
         {
             sum[k]=1;
             bin=1;
             k++;
         }
        else
         {
            sum[k]=(a[i]+b[i]+bin);
            bin=0;
            k++;
         }
    }
    if(bin==1)
    {
        printf("\nsubtraction of b from a is positive ");
        for(i=k-1;i>=0;i--)
        {
        printf("%d",sum[i]);
        }
    }
    else
    {
         printf("\nsubtraction of b from a is negative ");
         k=0;
         while(sum[k]!=1)
        k++;
        for(j=k+1;j<4;j++)
        {
           sum[j]=1-sum[j];
        }
       for(i=3;i>=0;i--)
        {
        printf("%d",sum[i]);
        }
    }
}

OUTPUT:
enter a four bit no. a
1
1
1
0
enter a four bit no. b
1
0
1
0
enter borrow:
1
2's complement of b is 0110
subtraction of b from a is positive 0101

enter a four bit no. a
1
0
1
0
enter a four bit no. b
1
1
1
0
enter borrow:
1
2's complement of b is 0010
subtraction of b from a is negative 0011
