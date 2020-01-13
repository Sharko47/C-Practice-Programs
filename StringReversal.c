#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[100] = "Sharukh",rev_str[100];
    //fgets(str,100,stdin);//Help to implement string bound checking.
    printf("Enter the String to be Reversed:\t");
    gets(str);//This does not maintain array bound checking thus can lead to problem of overwriting of data.
    printf("Before Reversing : %s\n",str);
    int i,length,j = 0;
    length = strlen(str)-1;
    for(i = length;str[j];i--){
        rev_str[j++] = str[i];
    }
    rev_str[j] = '\0';
    printf("After Reversing : %s",rev_str);
    return 0;
}
