#include<stdio.h>
struct address{
    char city[10];
    int pincode;
    char state[20];
};
struct employes
{
    /* data */
    int id;
    float salary;
    char name[20];
    struct address add;
};

void displayInfo(struct employes empInfo[]){
int i;
   for(i = 0;i<3;++i){
       printf("ID: %d\n",empInfo[i].id);
       printf("Name: %s\n",empInfo[i].name);
       printf("Salary: %f\n",empInfo[i].salary);
       printf("City: %s\n",empInfo[i].add.city);
       printf("State: %s\n",empInfo[i].add.state);
       printf("Pincode: %d\n",empInfo[i].add.pincode);
   }
}
int main(){
   struct employes emp[5];
   register int i = 0;
   printf("Enter the Details of a Student\n");
   for(;i<3;++i){
       printf("Enter the ID of an Employee\n");
       scanf("%d",&emp[i].id);
    printf("Enter the Name of an Employee\n");
       scanf("%s",&emp[i].name);
    printf("Enter the Salary of an Employee\n");
       scanf("%f",&emp[i].salary);
       printf("Enter the City of an Employee\n");
       scanf("%s",&emp[i].add.city);
       printf("Enter the State of an Employee\n");
       scanf("%s",&emp[i].add.state);
       printf("Enter the Pincode of an Employee\n");
       scanf("%d",&emp[i].add.pincode);
   }

displayInfo(emp);

return 0;
} 