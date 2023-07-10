#include<stdio.h>
#include<conio.h>

void main(){
int i,n;
int marks[1000];

clrscr();

 printf("how many student your class: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     printf("enter any number:  ");
     scanf("%d\n",&marks[i]);
  }

for(i=0;i<n;i++){
  if(marks[i]<=90){
    printf("marks:  %d A1\n",marks[i]);
   }
   else
   {
      printf("marks:  %d A2\n",marks[i]);
      }
      }
getch();
}