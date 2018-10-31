#include<stdio.h>
#include<conio.h>
void main()
{
    int a[4],b[4],s[3],sum[50],ans[4],m,ch,cin,c[4]={0,0,0,1},temp[4];
    int i,j,k=0;
    printf("enter a 4 bit binary no. A:");
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);
    printf("enter a 4bit binary no. B:");
    for(i=0;i<4;i++)
        scanf("%d",&b[i]);
    printf("enter mode select:\n 1.Arithmetic\n 0.Logical \n");
    scanf("%d",&m);
    if(m==1)
    {
    do{
        printf("\nEnter operation:\n 000.Add\n 001.Subtract\n 010.Increment A\n 011.Increment B\n 100.Decrement A\n 101.Decrement B\n 110.Exit\n");
        for(i=0;i<3;i++)
        scanf("%d",&s[i]);
        ch=(s[0]*4+s[1]*2+s[2]);
        switch(ch)
        {
            case 0:{
                    printf("Addition\n");
                    printf("enter cin:");
                    scanf("%d",&cin);
                    for(i=3;i>=0;i--)
                    {
                    if((a[i]+b[i]+cin)==2)
                    {
                    sum[k]=0;
                    cin=1;
                    k++;
                    }
                    else if((a[i]+b[i]+cin)==3)
                    {
                    sum[k]=1;
                    cin=1;
                    k++;
                    }
                    else
                    {
                    sum[k]=(a[i]+b[i]+cin);
                    cin=0;
                    k++;
                    }
                    }
                    if(cin==1)
                    {
                    sum[k]=1;
                    k++;
                    }
                    printf("sum of two 4 bit nos. is \n");
                    for(i=k-1;i>=0;i--)
                    {
                    printf("%d",sum[i]);
                    }
                    break;
                    }
           case 1:  {
                    printf("Subtraction\n");
                    printf("enter cin:");
                    scanf("%d",&cin);
                    for(i=0;i<4;i++)
                    {
                        temp[i]=b[i];
                    }
                    i=3;
                    k=0;
                    while(b[i]!=1)
                    i--;
                    for(j=i-1;j>=0;j--)
                    {
                    b[j]=1-b[j];
                    }
                    for(i=3;i>=0;i--)
                    {
                    if((a[i]+b[i]+cin)==2)
                    {
                    sum[k]=0;
                    cin=1;
                    k++;
                    }
                    else if((a[i]+b[i]+cin)==3)
                    {
                    sum[k]=1;
                    cin=1;
                    k++;
                    }
                    else
                    {
                    sum[k]=(a[i]+b[i]+cin);
                    cin=0;
                    k++;
                    }
                    }
                    if(cin==1)
                    {
                    printf("subtraction of b from a is positive ");
                    for(i=k-1;i>=0;i--)
                    {
                    printf("%d",sum[i]);
                    }
                    }
                    else
                    {
                    printf("subtraction of b from a is negative ");
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
                    for(i=0;i<4;i++)
                    {
                        b[i]=temp[i];
                    }
                    break;
                    }
             case 2:{
                    printf("Increment A\n");
                    cin=0;
                    k=0;
                    for(i=3;i>=0;i--)
                    {
                    if((a[i]+c[i]+cin)==2)
                    {
                    sum[k]=0;
                    cin=1;
                    k++;
                    }
                    else if((a[i]+c[i]+cin)==3)
                    {
                    sum[k]=1;
                    cin=1;
                    k++;
                    }
                    else
                    {
                    sum[k]=(a[i]+c[i]+cin);
                    cin=0;
                    k++;
                    }
                    }
                    if(cin==1)
                    {
                    sum[k]=1;
                    k++;
                    }
                    printf("Incremented A is: \n");
                    for(i=k-1;i>=0;i--)
                    {
                    printf("%d",sum[i]);
                    }
                    for(i=0;i<4;i++)
                    {
                        a[i]=sum[3-i];
                    }
                    break;
                    }
             case 3:{
                    printf("Increment B\n");
                    cin=0;
                    k=0;
                    for(i=3;i>=0;i--)
                    {
                    if((c[i]+b[i]+cin)==2)
                    {
                    sum[k]=0;
                    cin=1;
                    k++;
                    }
                    else if((c[i]+b[i]+cin)==3)
                    {
                    sum[k]=1;
                    cin=1;
                    k++;
                    }
                    else
                    {
                    sum[k]=(c[i]+b[i]+cin);
                    cin=0;
                    k++;
                    }
                    }
                    if(cin==1)
                    {
                    sum[k]=1;
                    k++;
                    }
                    printf("Incremented B is: \n");
                    for(i=k-1;i>=0;i--)
                    {
                    printf("%d",sum[i]);
                    }
                    for(i=0;i<4;i++)
                    {
                        b[i]=sum[3-i];
                    }
                    break;
                    }
             case 4:{
                    printf("Decrement A:\n");
                    cin=0;
                    c[0]=c[1]=c[2]=0;
                    c[3]=1;
                    i=3;
                    k=0;
                    while(c[i]!=1)
                    i--;
                    for(j=i-1;j>=0;j--)
                    {
                    c[j]=1-c[j];
                    }
                    for(i=3;i>=0;i--)
                    {
                    if((a[i]+c[i]+cin)==2)
                    {
                    sum[k]=0;
                    cin=1;
                    k++;
                    }
                    else if((a[i]+c[i]+cin)==3)
                    {
                    sum[k]=1;
                    cin=1;
                    k++;
                    }
                    else
                    {
                    sum[k]=(a[i]+c[i]+cin);
                    cin=0;
                    k++;
                    }
                    }
                    if(cin==1)
                    {
                    printf("\nDecrement of A is positive ");
                    for(i=k-1;i>=0;i--)
                    {
                    printf("%d",sum[i]);
                    }
                    }
                    else
                    {
                    printf("\n Decrement of A is negative ");
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
                    for(i=0;i<4;i++)
                    {
                        a[i]=sum[i];
                    }
                    break;
                    }
             case 5:{
                    printf("Decrement B:\n");
                    cin=0;
                    k=0;
                    i=3;
                    c[0]=c[1]=c[2]=0;
                    c[3]=1;
                    while(c[i]!=1)
                    i--;
                    for(j=i-1;j>=0;j--)
                    {
                    c[j]=1-c[j];
                    }
                    for(i=3;i>=0;i--)
                    {
                    if((c[i]+b[i]+cin)==2)
                    {
                    sum[k]=0;
                    cin=1;
                    k++;
                    }
                    else if((c[i]+b[i]+cin)==3)
                    {
                    sum[k]=1;
                   cin=1;
                    k++;
                    }
                    else
                    {
                    sum[k]=(c[i]+b[i]+cin);
                    cin=0;
                    k++;
                    }
                    }
                    if(cin==1)
                    {
                    printf("\nDecrement of B is positive ");
                    for(i=k-1;i>=0;i--)
                    {
                    printf("%d",sum[i]);
                    }
                    }
                    else
                    {
                    printf("\nDecrement of B is negative ");
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
                    for(i=0;i<4;i++)
                    {
                        b[i]=sum[i];
                    }
                    break;
                    }
          default:printf("Invalid choice\n");
                  break;
          }
       }while(ch!=6);
    }
    else if(m==0)
    {
    do{
        printf("Enter operation:\n 000.Complement A\n 001.Complement B\n 010.A or B\n 011.A and B\n 100.Exit\n");
        for(i=0;i<3;i++)
        scanf("%d",&s[i]);
        ch=(s[0]*4+s[1]*2+s[2]);
        switch(ch)
        {
        case 0:{
                for(i=0;i<4;i++)
                {
                    if(a[i]==1)
                        a[i]=0;
                    else
                        a[i]=1;
                }
                printf("Complemented A is:");
                for(i=0;i<4;i++)
                {
                    printf("%d",a[i]);
                }
                break;
               }
        case 1:{
                for(i=0;i<4;i++)
                {
                    if(b[i]==1)
                        b[i]=0;
                    else
                        b[i]=1;
                }
                printf("Complemented B is:");
                for(i=0;i<4;i++)
                {
                    printf("%d",b[i]);
                }

                break;
               }
        case 2:{
                for(i=0;i<4;i++)
                {
                    if(a[i]||b[i]==1)
                    c[i]=1;
                else
                    c[i]=0;
                }
                printf("A or B is:");
                for(i=0;i<4;i++)
                {
                    printf("%d",c[i]);
                }
                break;
               }
        case 3:{
                for(i=0;i<4;i++)
                {

                 if(a[i]&&b[i]==1)
                    c[i]=1;
                else
                    c[i]=0;
                }
                printf("A and B is:");
                for(i=0;i<4;i++)
                {
                    printf("%d",c[i]);
                }
                break;
               }
       default:printf("Invalid choice\n");
               break;
        }
     }while(ch!=4);

    }
}
