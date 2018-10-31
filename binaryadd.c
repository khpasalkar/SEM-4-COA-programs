#include<stdio.h>
#include<conio.h>
void main()
{
    int a[4];
    int b[4];
    int i,k=0;
    int carry;
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
    printf("enter carry:\n");
    {
      scanf("%d",&carry);
    }
    for(i=3;i>=0;i--)
    {
        if((a[i]+b[i]+carry)==2)
         {
            sum[k]=0;
            carry=1;
            k++;
         }
         else if((a[i]+b[i]+carry)==3)
         {
             sum[k]=1;
             carry=1;
             k++;
         }
        else
         {
            sum[k]=(a[i]+b[i]+carry);
            carry=0;
            k++;
         }
    }
    if(carry==1)
    {
        sum[k]=1;
        k++;
    }
    printf("sum of two 4 bit nos. is \n");
    for(i=k-1;i>=0;i--)
    {
        printf("%d",sum[i]);
    }
}

OUTPUT:
enter a four bit no. a
1
1
0
0
enter a four bit no. b
1
1
1
1
enter carry:
1
sum of two 4 bit nos. is
11100