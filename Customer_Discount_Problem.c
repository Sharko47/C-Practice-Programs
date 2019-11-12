#include <stdio.h>
#include <stdlib.h>
#define Discount(percent, price) (percent / 100) * price //Macro Function for Calculating Discount Price.

void Print_Net_Price(int discount_amount, float discount_percentage, int prod_price)
{
    //This Function Take three Parameters which Discount Amount, Discount Percentage for Different Customer Type
    //and Product Price to print after successfull execution.
    printf("\nYou've got %.2f Percentage Discount & the discount amount is = %d\n", discount_percentage, discount_amount);
    printf("The Price after applying discount = %d\n", (prod_price - discount_amount));
}

void bit8_microprocessor(int prod_price)
{
    //This Function takes a single argument i.e Product Price then perform operation for the Product(8-Bit Microprocessors).
    float discount_FOR_ALL = 10;                                    //Discount Variable for all type of customer.
    int discount_amount = 0;                                        //Variable to store discount amount after execution. Then pass it on to the Print_Net_Price Function.
    discount_amount = Discount(discount_FOR_ALL, prod_price);       //Calling macro "Discount" Function to perform opetion.
    Print_Net_Price(discount_amount, discount_FOR_ALL, prod_price); //Calling to print Amounts.
}

void bit16_microprocessor(int cust_choice, int prod_price)
{
    //This Function takes two argument i.e Customer Type and Product Price then perform operation for the Product(16-Bit Microprocessors).
    float discount_FOR_INDT_UNI = 5; //Variable to store discount percentage for Industry and University(Customer Type).
    float discount_FOR_GOVERN = 6;   //Variable to store discount percentage for Government.
    int discount_amount = 0;         //Variable to store discount amount after execution. Then pass it on to the Print_Net_Price Function.
    if (prod_price < 10000)
    {
        //This is block executes only for the product under 10000.
        printf("\nThere is no Discount for amount less than 10,000\n");
        printf("\nThe Price for the Product is %d\n", prod_price);
        exit(0);
    }
    else if (prod_price >= 10000)
    {
        //This else if block only executes if the product price is greater than or equal to 10000.
        if (cust_choice == 1 || cust_choice == 3)
        {
            //This if block executes for Customer Type 1,3 i.e Industry and University.
            discount_amount = Discount(discount_FOR_INDT_UNI, prod_price);
            Print_Net_Price(discount_amount, discount_FOR_INDT_UNI, prod_price);
        }
        else if (cust_choice == 2)
        {
            discount_amount = Discount(discount_FOR_GOVERN, prod_price);       //Calling macro "Discount" Function to perform opetion then Storing values to discount amount.
            Print_Net_Price(discount_amount, discount_FOR_GOVERN, prod_price); //Calling function to print Amounts.
        }
    }
}

void bit32_microprocessor(int cust_choice, int prod_price)
{
    //This Function takes two argument i.e Customer Type and Product Price then perform operation for the Product(32-Bit Microprocessors).

    float discount_FOR_UNIV = 7.5;      //Variable for Discount Percentage for University for all the products of all the price range.
    float discount_FOR_INDT_1 = 5.0;    //Variable for Discount Percentage for Industry for the price less than 50000.
    float discount_FOR_GOVERN_1 = 6.5;  //Variable for Discount Percentage for Government for the price less than 50000.
    float discount_FOR_INDT_2 = 7.5;    //Variable for Discount Percentage for Industry for the price more than 50000.
    float discount_FOR_GOVERN_2 = 8.5;  //Variable for Discount Percentage for Government for the price more than 50000.
    float discount_FOR_INDT_3 = 10.0;   //Variable for Discount Percentage for Industry for the price more than 1 Lakh.
    float discount_FOR_GOVERN_3 = 10.0; //Variable for Discount Percentage for Government for the price more than 1 Lakh.
    int discount_amount = 0;            //Variable to store discount amount after execution. Then pass it on to the Print_Net_Price Function.
    if (prod_price < 50000)
    {
        //This if block only executes when product price is less than 50000.
        if (cust_choice == 1)
        {
            //This if block executes for Customer Type 1 i.e Industry.
            discount_amount = Discount(discount_FOR_INDT_1, prod_price);
            Print_Net_Price(discount_amount, discount_FOR_INDT_1, prod_price);
        }
        else if (cust_choice == 2)
        {
            //This if block executes for Customer Type 2 i.e Government.
            discount_amount = Discount(discount_FOR_GOVERN_1, prod_price);
            Print_Net_Price(discount_amount, discount_FOR_GOVERN_1, prod_price);
        }
        else
        {
            //This if block executes for Customer Type 3 i.e University.
            discount_amount = Discount(discount_FOR_UNIV, prod_price);
            Print_Net_Price(discount_amount, discount_FOR_UNIV, prod_price);
        }
    }
    else if (prod_price >= 50000 && prod_price < 100000)
    {
        //This else if block executes when product price is greater than or equal to 50000 and less than 1 Lakh.
        if (cust_choice == 1)
        {
            //This if block executes for Customer Type 1 i.e Industry.
            discount_amount = Discount(discount_FOR_INDT_2, prod_price);
            Print_Net_Price(discount_amount, discount_FOR_INDT_2, prod_price);
        }
        else if (cust_choice == 2)
        {
            //This if block executes for Customer Type 2 i.e Government.
            discount_amount = Discount(discount_FOR_GOVERN_2, prod_price);
            Print_Net_Price(discount_amount, discount_FOR_GOVERN_2, prod_price);
        }
        else
        {
            //This if block executes for Customer Type 3 i.e University.
            discount_amount = Discount(discount_FOR_UNIV, prod_price);
            Print_Net_Price(discount_amount, discount_FOR_UNIV, prod_price);
        }
    }
    else if (prod_price >= 100000)
    {
        //This else if block executes only if product price is greater than or equal to 1 Lakh.
        if (cust_choice == 1)
        {
            //This if block executes for Customer Type 1 i.e Industry.
            discount_amount = Discount(discount_FOR_INDT_3, prod_price);
            Print_Net_Price(discount_amount, discount_FOR_INDT_3, prod_price);
        }
        else if (cust_choice == 2)
        {
            //This if block executes for Customer Type 2 i.e Government.
            discount_amount = Discount(discount_FOR_GOVERN_3, prod_price);
            Print_Net_Price(discount_amount, discount_FOR_GOVERN_3, prod_price);
        }
        else
        {
            //This if block executes for Customer Type 3 i.e University.
            discount_amount = Discount(discount_FOR_UNIV, prod_price);
            Print_Net_Price(discount_amount, discount_FOR_UNIV, prod_price);
        }
    }
}

int main() //This is Driver Function where the program starts executing.
{
    int customer_choice, product_choice, product_price;                                                                 //Variable for Choices and Product Price to take Inputs from User.
    char price_msg[] = "Please enter the price for the product you choosed:\t";                                         //Output Message String to show to the user upon Product Price asking.
    char customer_type[3][100] = {"1.Industry", "2.Government", "3.University"};                                        //String array for Customer Type which only 3.
    char product_type[3][100] = {"1) 8-Bit Microprocessors", "2) 16-Bit Microprocessors", "3) 32-Bit Microprocessors"}; //String array for Product Type which only 3.
    char choice_msg[] = "Please type the number of your choice:\t";                                                     //Output message for Choices.
    printf("What type of a customer you're?\n%s\n%s\n%s\n%s", customer_type[0], customer_type[1], customer_type[2], choice_msg);
    scanf("%d", &customer_choice);
    if (customer_choice < 1 || customer_choice > 3)
    {
        //This if block prompts on to the screen if user enters invalid choice.
        printf("\nPlease enter a valid choice given in the options.\n");
        exit(0); //Exit Function to Stop the programs from Further execution.
    }
    printf("\nWhich product do you want to buy?\n%s\n%s\n%s\n%s", product_type[0], product_type[1], product_type[2], choice_msg);
    scanf("%d", &product_choice);
    if (customer_choice == 1 && product_choice == 1)
    {
        //This if block only executes if Customer Type 1 and Product Type 1 entered.

        printf("\n\t\t\tYou're %s and the Product you've choosed is %s\n", customer_type[0], product_type[0]);
        printf("%s", price_msg);
        scanf("%d", &product_price);
        bit8_microprocessor(product_price); //This function performs operation when the product type is 1 i.e 8-Bit Microprocesssors.
    }
    else if (customer_choice == 1 && product_choice == 2)
    {
        //This if block only executes if Customer Type 1 and Product Type 2 entered.

        printf("\n\t\t\tYou're %s and Product you choosed is %s\n", customer_type[0], product_type[1]);
        printf("%s", price_msg);
        scanf("%d", &product_price);
        bit16_microprocessor(customer_choice, product_price); //This function performs operation when the product type is 2 i.e 16-Bit Microprocesssors.
    }
    else if (customer_choice == 1 && product_choice == 3)
    {
        //This if block only executes if Customer Type 1 and Product Type 2 entered.

        printf("\n\t\t\tYou're %s and Product you choosed is %s\n", customer_type[0], product_type[2]);
        printf("%s", price_msg);
        scanf("%d", &product_price);
        bit32_microprocessor(customer_choice, product_price); //This function performs operation when the product type is 3 i.e 32-Bit Microprocesssors.
    }
    else if (customer_choice == 2 && product_choice == 1)
    {
        printf("\n\t\t\tYou're %s and Product you choosed is %s\n", customer_type[1], product_type[0]);
        printf("%s", price_msg);
        scanf("%d", &product_price);
        bit8_microprocessor(product_price);
    }
    else if (customer_choice == 2 && product_choice == 2)
    {
        printf("\n\t\t\tYou're %s and Product you choosed is %s\n", customer_type[1], product_type[1]);
        printf("%s", price_msg);
        scanf("%d", &product_price);
        bit16_microprocessor(customer_choice, product_price);
    }
    else if (customer_choice == 2 && product_choice == 3)
    {
        printf("\n\t\t\tYou're %s and Product you choosed is %s\n", customer_type[1], product_type[2]);
        printf("%s", price_msg);
        scanf("%d", &product_price);
        bit32_microprocessor(customer_choice, product_price);
    }
    else if (customer_choice == 3 && product_choice == 1)
    {
        printf("\n\t\t\tYou're %s and Product you choosed is %s\n", customer_type[2], product_type[0]);
        printf("%s", price_msg);
        scanf("%d", &product_price);
        bit8_microprocessor(product_price);
    }
    else if (customer_choice == 3 && product_choice == 2)
    {
        printf("\n\t\t\tYou're %s and Product you choosed is %s\n", customer_type[2], product_type[1]);
        printf("%s", price_msg);
        scanf("%d", &product_price);
        bit16_microprocessor(customer_choice, product_price);
    }
    else if (customer_choice == 3 && product_choice == 3)
    {
        printf("\n\t\t\tYou're %s and Product you choosed is %s\n", customer_type[2], product_type[2]);
        printf("%s", price_msg);
        scanf("%d", &product_price);
        bit32_microprocessor(customer_choice, product_price);
    }
    else if (product_choice < 1 || product_choice > 3)
    {
        printf("\nPlease enter a valid choice given in the options.\n");
    }
    return 0;
}
