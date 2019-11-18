#include <stdio.h>
#include <stdlib.h>
#define ISLOWER(ch) (ch>=97 && ch<=122)
#define ISUPPER(ch) (ch>=65 && ch<=90)
#define TOLOWER(ch) (ch+32)
#define TOUPPER(ch) (ch-32)
int main(int argc, char const *argv[])
{
    char character,show_Char;
    printf("Enter any A-Z Character to Convert it into Lower Case or Upper Case:\t");
    scanf("%c",&character);
    if(ISLOWER(character)){
        show_Char = TOUPPER(character);
        printf("Upper Case of %c = \"%c\"",character,show_Char);
        
    }
    else if (ISUPPER(character))
    {
        show_Char = TOLOWER(character);
        printf("Lower Case of %c = \"%c\"",character,show_Char);
    }else
    {
        printf("Invalid Input only Characters allowed from A-Z or a-z");
    }
    return 0;
}