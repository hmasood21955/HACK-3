#include<stdio.h>
#include<math.h>
int main()
{
    float plan_gb = 0;
    int current_day = 0;
    float total_used_gb =0 ;
    printf("enter the current day:");
    scanf("%d",&current_day);
    
    printf("enter the toatl gb used:");
    scanf("%f",& total_used_gb);

    printf("enetr plan gb used:");
    scanf("%f",&plan_gb); 
    
    int days_remaining = 30 - current_day + 1;
    double avg_daily_usage = total_used_gb / current_day;
    double avg_daily_remaining = (plan_gb - total_used_gb) / days_remaining;

    if (current_day > 30 || current_day < 1) 
    {
        printf("Invalid current day. It should be in the range 1 to 30.\n");
    } 
    else if (total_used_gb >= plan_gb)
    {
        printf("You have used up all your data for this month.\n");
    } 
    else if (avg_daily_usage > (plan_gb / 30)) 
    {
        printf("Overusing data. You have %.2f GB left, but should use no more than %.2f GB per day.\n", plan_gb - total_used_gb, plan_gb / 30);
    } 
    else if (avg_daily_usage < (plan_gb / 30)) 
    {
        printf("You're under your average daily usage. You have %.2f GB left and can use up to %.2f GB per day.\n", plan_gb - total_used_gb, avg_daily_remaining);
    } 
    else 
    {
        printf("You're right on track. You have %.2f GB left, and you can use %.2f GB per day.\n", plan_gb - total_used_gb, avg_daily_remaining);
    }
}