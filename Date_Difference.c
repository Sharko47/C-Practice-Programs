#include <stdio.h>
#include <stdlib.h>
int days_in_months_fun(int,int);
int main(int argc, char const *argv[])
{
    int days,months,years,days2,months2,years2,difference_days = 0,days_in_months;
    int difference_weeks,difference_years;
    printf("Enter the First Date in DD/MM/YY Format without '/'\n");
    scanf("%d %d %d",&days,&months,&years);
    printf("Enter the Second Date in DD/MM/YY Format without '/'\n");
    scanf("%d %d %d",&days2,&months2,&years2);
    if(months == months2 && days == days2 && years == years2){
        printf("Both are Same Date!!\n");
        exit(0);
    }else if(days > 31 || days2 > 31){
        printf("Invalid Dates!!\n");
        exit(0);
    }
    difference_years = years2 - years;
    days_in_months = days_in_months_fun(months,years);
    while(1){
        
        if(days>=days_in_months){
            months = months + 1;
            days = 1;
            if(months>12){
                years = years + 1;
                months = 1;
            }
            days_in_months = days_in_months_fun(months,years);
        }
        if((days == days2) && (months == months2) && (years == years2)){
            break;
        }
        difference_days = difference_days + 1;
        days = days + 1;
    }
    difference_weeks = difference_days/7;
    printf("Difference in Days = %d\n",difference_days);
    printf("Difference in Weeks = %d\n",difference_weeks);
    printf("Difference in Years = %d\n",difference_years);
    return 0;
}
int days_in_months_fun(int months,int years){
    int dm;
    if(months == 2){
        dm = 28;
        if((years%400 == 0)&&(years%100!=0 && years%4 == 0)){
            dm = 29;
        }
    }else if(months == 1 || months == 3 || months == 5 || months == 8 || months == 10 || months == 12){
        dm = 31;
    }else
    {
        dm = 30;
    }
    
    return dm;
}