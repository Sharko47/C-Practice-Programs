#include <stdio.h> 
#include<string.h>
#include<stdlib.h>
void WriteFile(char[],char[]);
void AppendFile(char[],char[]);
void ReadFile(char filename[],char mode[]){
  FILE *read_File;
  char fileReader;
  read_File = fopen(filename,mode);
   if(read_File == NULL){
       printf("Sorry! File Not Found\nPlease Try Again.");
       return;
   }else
   { 
    printf("**************************************************===================**************************************************\n");
   while((fileReader=fgetc(read_File))!=EOF){
      
       printf("%c",fileReader);
   }
   printf("\n");   
   printf("**************************************************===================**************************************************\n");
   }

   fclose(read_File);
} 
void WriteFile(char Filename[],char mode[]){
    FILE *write;
    char NewText[5000];
    write = fopen(Filename,mode);
    
    if(write == NULL){
        printf("Sorry! File Not Found");
        return;
    }else
    {
       printf("****************START ENTERING YOUR TEXT**************\n");
       scanf("%s",NewText);
       fputs(NewText,write);
    }
    fclose(write);
}
void AppendFile(char Filename[],char mode[]){
    FILE *append;
    char appendTEXT[5000];
    append = fopen(Filename,mode);
    if(append==NULL){
        printf("Sorry! File Not Found");
        return;
    }else
    {
        /* code */
        printf("****************START ENTERING YOUR TEXT TO UPDATE PREVIOUS FILE**************\n");
       scanf("%s",appendTEXT);
       fputs(appendTEXT,append);

    }
    
}

void main(){   
   char filename[200];
   char mode[2];
   int choice;
   printf("Enter Mode for File\n1.r->To Read a File\n2.w->To Create New File or Write on EMPTY already existing File.\n3.a->To write new text in a file without deleting previous content.\n");
   scanf("%s",mode);
   if(strcmp(mode,"r")==0){
       printf("Enter CORRECT File Name With its Path EXTENSION(.c,.java,.txt, etc) To Read It.\n");
        scanf("%s",filename);
      ReadFile(filename,mode);
   }
   else if(strcmp(mode,"w") == 0){
        printf("Enter new file name with its path and EXTENSION(.c,.java,.txt, etc) to create new file\n");
        scanf("%s",filename);
        WriteFile(filename,mode);
   }
   else if (strcmp(mode,"a")==0)
   {
       /* code */
       printf("Enter file name with its path and EXTENSION(.c,.java,.txt, etc) to add new content\n");
       scanf("%s",filename);
       AppendFile(filename,mode);
   }
   
   else{
       printf("Please Enter a Proper Mode.\tThank You.");
   }
   
 
}