#include<stdio.h>
#include<string.h>
char string_len[500];//Global Variable to find Length of a String without using any Function.

char string_perm[100];//Global Variable to find if two strings are anagram.

int start,end;

void StringLength(){
    int count = 0,space_count = 0;
    while(string_len[count]!= '\0'){
        ++count;
        if(string_len[count]== 32){
            space_count++;
        }
    }
    printf("Length of a String(With Space) = %d\n",count-1);
    printf("Length of a String(Without Space) = %d\n",(count-1)-space_count);
}

void Find_String_Permutation(){
  char temp;  
  int i,j;  
  for(i = start; i < end-1; ++i){  
  for(j = i+1; j < end; ++j)  
  {  
   //Swapping the string by fixing a character  
    temp = string_perm[i];  
  string_perm[i] = string_perm[j];  
    string_perm[j] = temp;  
    //Recursively calling function generatePermutation() for rest of the characters  
  generatePermutation(string_perm , i+1 ,end);  
    //Backtracking and swapping the characters again  
    temp = string_perm[i];  
    string_perm[i] = string_perm[j];  
    string_perm[j] = temp;  
  }  
  }  
  //Print the permutations  
  printf("%s\n",string_perm);  
}