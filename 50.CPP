#include<stdio.h>
#include<conio.h>

void main(){
int marks[5]={7,4,9,5,2};
int number[5]={1,3,1,7,3};
int i;
int sum=0;
clrscr();
for(i=0;i<=4;i++){
  printf("marks = %d\n",marks[i]);
}

for(i=0;i<=4;i++){
  printf("number= %d\n",number[i]);
}
for(i=0;i<=5;i++){
   if(i){
   printf("%d\n",sum);
	 }
   sum=marks[i]+number[i];
   }


getch();
}