#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[4],b[7];
printf("enter 4 bit binary no.\n");
for(i=0;i<4;i++)
scanf("%d",&a[i]);
b[0]=a[0];
b[1]=a[1];
b[2]=a[2];
b[4]=a[3];
if((a[0]+a[2]+a[4])%2==0)
  b[6]=0;
else
  b[6]=1;
if((a[0]+a[1]+a[4])%2==0)
  b[5]=0;
else
  b[5]=1;
if((a[0]+a[1]+a[2])%2==0)
  b[3]=0;
else
  b[3]=1;
printf("hamming code:\n");
for(i=0;i<7;i++)
    printf("%d",b[i]);
}
OUTPUT:
enter 4 bit binary no.
1
1
1
0
hamming code:
1111000

