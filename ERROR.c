#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[7],b[3];
printf("enter 7 bit hamming code:\n");
for(i=0;i<7;i++)
scanf("%d",&a[i]);
if((a[0]+a[2]+a[4]+a[6])%2==0)
  b[2]=0;
else
  b[2]=1;
if((a[0]+a[1]+a[4]+a[5])%2==0)
  b[1]=0;
else
  b[1]=1;
if((a[0]+a[1]+a[2]+a[3])%2==0)
  b[0]=0;
else
  b[0]=1;
printf("error code:\n");
for(i=0;i<3;i++)
    printf("%d",b[i]);
n=4*b[0]+2*b[1]+b[2]; //converting binary to decimal
printf("\nerror is present in %dth bit",n);
}
OUTPUT:
enter 7 bit hamming code:
1
0
1
1
0
0
0
error code:
110
error is present in 6th bit
