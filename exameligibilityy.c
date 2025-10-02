
   /*
name:samuel muraguri
reg no:CT100/G/26191/25
DESCRIPTION:TO CHECK WHETHER STUDENT IS ELIGIBLE FOR EXAMS
*/

#include<stdio.h>

int main(){
    float attendance,avgmarks;
    //input attendance percentage and 
    printf("enter attendance percentage :");
    scanf("%f,&attendance");

    printf("enter average marks:");
    scanf("%f,&avgmarks");
    if(attendance>=75&&avgmarks>=40)
    {
        printf("eligible");
    }
    else
    {
    printf("not eligible");
   }
   return 0;
   }