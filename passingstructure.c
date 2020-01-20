#include<stdio.h>
#include<string.h>
struct student
{
        int roll;
    char name[20];
};
void show(struct student st1){
    printf("%d,%s\n",st1.roll,st1.name);
}
void show2(struct student *st2){
    printf("%d,%s\n",st2->roll,st2->name);
    st2->roll = 5;
    
}
void show3(int roll,char *name){
    printf("%d,%s\n",roll,name);
}
void show4(int *roll,char *name){
    printf("%d,%s\n",*roll,name);
    *roll += 20;
}

struct student *getAdd(struct student *receivedStruct){
receivedStruct->roll = receivedStruct->roll + 5;
(*receivedStruct).roll = (*receivedStruct).roll + 10;//Another way of acessing pointer to structure data members.
return receivedStruct;
}

struct student getAdd2(struct student receivedStruct2){
    receivedStruct2.roll += 10;
    return receivedStruct2;
}

int main(int argc, char const *argv[])
{
    static struct student var3,var = {1,"Sharukh"};
    printf("%d,%s\n",var.roll,var.name);
    show(var);//Pass By Value or Passing Structure as a function parameter.

    show2(&var);//Passing structure base address as a function parameter or Pass by Referene.
    printf("%d,%s\n",var.roll,var.name);
    
    struct student *var2;
    var2 = getAdd(&var);//Updating structure element by passing structure as a reference(Base Address).
    printf("Rollno: %d\n",var2->roll);
    
    var3 = getAdd2(var);
    printf("Rollno :%d,%s\n",var3.roll,var3.name);
    
    show3(var.roll,var.name);
    printf("%d,%s\n",var.roll,var.name);
    show4(&var.roll,var.name);
    printf("%d,%s\n",var.roll,var.name);

    return 0;
}