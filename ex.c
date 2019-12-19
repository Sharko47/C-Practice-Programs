#include<stdio.h>
int staticFun(int i){
    static int b;
    b = i + 1;
    return b;
}

int main(int argc, char const *argv[])
{
    int i = 1,a;
    for(;i<=10;i++){
        a = staticFun(i);
        printf("%d\t",a);
    
    }

    return 0;
}

//Learn Bit Shitfting in C, Bitwise ~ operator,&,|,^