
#include <stdio.h>
#include <stdlib.h>
int select(float pfwt[], float n);
int i,indeex;
float pf[20],wt[20],pfwt[20],amt=0,m,max,n,rem=0;
void main()
{
   
    printf("Enter the no. of objects:");
    scanf("%f",&n);
    printf("Enter the weight constraint:");
    scanf("%f",&m);
    printf("Enter the profit and weight:");
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&pf[i],&wt[i]);
         pfwt[i]=pf[i]/wt[i];
    }
    rem=m;   
    while(rem!=0)
    {
        indeex=select(pfwt,n);
        if(wt[indeex]<=rem)
        {
            amt+=pf[indeex];
            rem-=wt[indeex];
            pfwt[indeex]=-1;
        }
        else
        {
            amt+=rem*pf[indeex]/wt[indeex];
            rem=0; 
        }
      
    }
    printf("Max profit is %f",amt);

}
int select(float pfwt[], float n)
{
    float max=0;
    int i,indeex=0;
    for(i=0;i<n;i++ )
    {
        if(pfwt[i]>max)
        {
            max=pfwt[i];
            indeex=i;
        }
    }
    return indeex;
}
