#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    //Super Duper Micros Sells 100 Super Dupers/per month
    //One Super Duper 500Rs
    //Operating cose 10,000
    //1,000 on Ads
    //If 2,000 on Ads profit of sales will be 120 Super Duper Micro per month
    float ads_budget = 1000, one_super_product = 500, operating_cost = 10000;
    int super_sales_month = 100;
    float net_profit = (one_super_product * super_sales_month) - (operating_cost + ads_budget);
    float new_net_profit;
    printf("Before Doubling-->\nNet Profit = %.2f\nAds Expense = %.2f\nSales = %d\n", net_profit, ads_budget, super_sales_month);
    register int i = 1;
    for (; i; i++)
    {
        ads_budget = ads_budget * 2;
        super_sales_month = (super_sales_month * 120 / 100);
        new_net_profit = (one_super_product * super_sales_month) - (operating_cost + ads_budget);
        printf("Month %d -->\nAds Expenses = %.2f\nSales = %d\nNet Profit = %.3f\n", i, ads_budget, super_sales_month, new_net_profit);
        if (new_net_profit < net_profit)
        {
            break;
        }
        net_profit = new_net_profit;
    }
    return 0;
}
