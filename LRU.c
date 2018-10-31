#include<stdio.h>

void main()
{
    int frame[20],i,j,n1,n2,n,count=0,s[50],p,q,r,k=0,match=0;
    float ratio;
    printf("enter the page frame size:\n");
    scanf("%d",&n1);
    printf("enter the size of string:\n");
    scanf("%d",&n2);
    printf("enter the string:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n1;i++)
    {
        frame[i]=0;
    }
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(s[i]==frame[j])
            {
                match=1;
                p=j;
                break;
            }
        }
        printf("\n");
        if(match==1)
        {
            count++;
            while(p>0)
            {
                frame[p]=frame[p-1];
                p--;
            }
            frame[0]=s[i];
            printf("hit\t");
        }
        else if(k<n1)
        {
            q=k;
            while(q>0)
            {
                  frame[q]=frame[q-1];
                  q--;
            }
            frame[0]=s[i];
            k++;
            printf("miss\t");
        }
        else
        {
            q=n1-1;
            while(q>0)
            {
                frame[q]=frame[q-1];
                q--;
            }
            frame[0]=s[i];
            printf("miss\t");
            k++;
        }
        match=0;
    for(n=0;n<n1;n++)
        printf("%d\t",frame[n]);
    }
    printf("\nno. of page faults=%d\n",count);
    ratio=(count*1.0)/n2;
    printf("hit ratio=%f\n",ratio);
}
