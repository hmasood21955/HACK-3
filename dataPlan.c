#include<stdio.h>
#include<math.h>
int main()
{
    float plan_gb = 30;
    int current_day = 0;
    float total_used_gb =0 ;
    printf("enter the current day:");
    scanf("%d",&current_day);
    
    printf("enter the plan gb:");
    scanf("%f",& total_used_gb);
    
    int days_remaining = 30 - current_day + 1;
    double avg_daily_usage = total_used_gb / current_day;
    double avg_daily_remaining = (plan_gb - total_used_gb) / days_remaining;
    
}