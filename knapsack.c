#include <stdio.h>
int main()
{
        int n,i,track=0;
        float m,rem=0.0,pfwt[10],profit[10],weight[10],max,amtpf=0;
        printf("Enter max weight constraint:");
        scanf("%f",&m);
        printf("Enter max no of objects:");
        scanf("%d",&n);
        printf("Enter the profit:");
        for(i=0;i<n;i++)
        {
            scanf("%f",&profit[i]);
        }
        printf("Enter the weight:");
        for(i=0;i<n;i++)
        {
            scanf("%f",&weight[i]);
        }
       
        for(i=0;i<n;i++)
        {
         pfwt[i]=(profit[i]/weight[i]);
        }
        
        rem=m;
        do
        {
            max=pfwt[0];
            for(i=1;i<n;i++)
            {
                if(pfwt[i]>=max)
                {
                    max=pfwt[i];
                    track=i;
                    
                }
            }
            printf("weight is:",weight[track]);
            pfwt[track]=0.0;
            if(rem>weight[track])
            {
                amtpf+=profit[track];
                rem-=weight[track];
                             
            }
            else
            {
               
                amtpf=amtpf+(rem*max);
                rem=0.0;
            }
        }while(rem!=0.0);

        printf("\n\nMAX PROFIT IS %f",amtpf);

}
