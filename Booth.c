#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,p,cn=4,q1=0,multiplicant,multiplier,temp[4],sum[50],bin=0,carry=0,ans;
    int a[]={0,0,0,0},m[]={0,0,0,0},q[]={0,0,0,0};
    printf("enter the value of multiplicant(between -7 to 7):\n");
    scanf("%d",&multiplicant);
    if(multiplicant>0)
    {
        i=0;
        while(multiplicant>0)
        {
            temp[i]=multiplicant%2;
            multiplicant/=2;
            i++;
        }
        p=3;
        for(k=0;k<i;k++)
        {
            m[p]=temp[k];
            p--;
        }
    }
    else
    {
        multiplicant*=-1;
         i=0;
        while(multiplicant>0)
        {
            temp[i]=multiplicant%2;
            multiplicant/=2;
            i++;
        }
        p=3;
        for(k=0;k<i;k++)
        {
            m[p]=temp[k];
            p--;
        }
        j=3;
       while(m[j]!=1)
          j--;
       for(k=j-1;k>=0;k--)
       {
        m[k]=1-m[k];
       }
    }
    printf("multiplicant is:\n");
    for(i=0;i<4;i++)
    {
        printf("%d\t",m[i]);
    }
    printf("\n");
    printf("enter the value of multiplier(between -7 to 7):\n");
    scanf("%d",&multiplier);
    if(multiplier>0)
    {
        i=0;
        while(multiplier>0)
        {
            temp[i]=multiplier%2;
            multiplier/=2;
            i++;
        }
        p=3;
        for(k=0;k<i;k++)
        {
            q[p]=temp[k];
            p--;
        }
    }
    else
    {
        multiplier*=-1;
         i=0;
        while(multiplier>0)
        {
            temp[i]=multiplier%2;
            multiplier/=2;
            i++;
        }
        p=3;
        for(k=0;k<i;k++)
        {
            q[p]=temp[k];
            p--;
        }
        j=3;
       while(q[j]!=1)
          j--;
       for(k=j-1;k>=0;k--)
       {
        q[k]=1-q[k];
       }
    }
    printf("multiplier is:\n");
    for(i=0;i<4;i++)
    {
        printf("%d\t",q[i]);
    }
    printf("\n");
    for(i=0;i<4;i++)
        {
            temp[i]=m[i];
        }
    printf("\nSTATUS:initialization\n");
    printf("A:");
    for(i=0;i<4;i++)
        printf("%d\t",a[i]);
    printf("Q:");
    for(i=0;i<4;i++)
        printf("%d\t",q[i]);
    printf("\n");
    while(cn>0)
    {
    if(q[3]==1 && q1==0)
     {
        printf("\nSTATUS:\t");
        printf("A<-A-M\t");
        i=3,k=3;
        while(m[i]!=1)
        i--;
        for(j=i-1;j>=0;j--)
        {
        m[j]=1-m[j];
        }
        bin=0;
        for(i=3;i>=0;i--)
        {
          if((a[i]+m[i]+bin)==2)
          {
            sum[k]=0;
            bin=1;
            k--;
         }
         else if((a[i]+m[i]+bin)==3)
         {
             sum[k]=1;
             bin=1;
             k--;
         }
        else
         {
            sum[k]=(a[i]+m[i]+bin);
            bin=0;
            k--;
         }
       }
       for(i=0;i<4;i++)
       {
        a[i]=sum[i];
       }
        printf("Right shift\n");
        q1=q[3],q[3]=q[2],q[2]=q[1],q[1]=q[0],q[0]=a[3],a[3]=a[2],a[2]=a[1],a[1]=a[0];
        for(i=0;i<4;i++)
        {
            m[i]=temp[i];
        }
        printf("A:");
        for(i=0;i<4;i++)
        {
        printf("%d\t",a[i]);
        }
        printf("Q:");
        for(i=0;i<4;i++)
        {
        printf("%d\t",q[i]);
        }
        printf("\n");
   }
    else  if(q[3]==0 && q1==1)
    {
        printf("STATUS:");
        k=3,carry=0;
        printf("A<-A+M\t");
        for(i=3;i>=0;i--)
        {
          if((a[i]+m[i]+carry)==2)
          {
            sum[k]=0;
            carry=1;
            k--;
          }
         else if((a[i]+m[i]+carry)==3)
          {
             sum[k]=1;
             carry=1;
             k--;
          }
        else
          {
            sum[k]=(a[i]+m[i]+carry);
            carry=0;
            k--;
          }
        }
    for(i=0;i<4;i++)
        a[i]=sum[i];
        printf("Right shift\n");
        q1=q[3],q[3]=q[2],q[2]=q[1],q[1]=q[0],q[0]=a[3],a[3]=a[2],a[2]=a[1],a[1]=a[0];
        printf("A:");
        for(i=0;i<4;i++)
        {
        printf("%d\t",a[i]);
        }
        printf("Q:");
        for(i=0;i<4;i++)
        {
        printf("%d\t",q[i]);
        }
        printf("\n");
   }
    else
   {
        printf("STATUS:");
        printf("Right shift\n");
        q1=q[3],q[3]=q[2],q[2]=q[1],q[1]=q[0],q[0]=a[3],a[3]=a[2],a[2]=a[1],a[1]=a[0];
        printf("A:");
        for(i=0;i<4;i++)
        {
        printf("%d\t",a[i]);
        }
        printf("Q:");
        for(i=0;i<4;i++)
        {
        printf("%d\t",q[i]);
        }
        printf("\n");
    }
    cn--;
 }
 p=0;
 for(i=0;i<4;i++)
 {
     temp[p]=a[i];
     p++;
 }
 for(i=0;i<4;i++)
 {
     temp[p]=q[i];
     p++;
 }
 printf("AQ=");
 for(i=0;i<p;i++)
 {
     printf("%d",temp[i]);
 }
 if(temp[0]==0)
 {
     ans=temp[0]*128+temp[1]*64+temp[2]*32+temp[3]*16+temp[4]*8+temp[5]*4+temp[6]*2+temp[7]*1;
     printf("\nMultiplication=%d",ans);
 }
 else
 {
     i=p-1;
     while(temp[i]!=1)
        i--;
     for(j=i-1;j>=0;j--)
     {
        temp[j]=1-temp[j];
     }
     ans=temp[0]*128+temp[1]*64+temp[2]*32+temp[3]*16+temp[4]*8+temp[5]*4+temp[6]*2+temp[7]*1;
     printf("\nMultiplication=-%d",ans);
 }
}



