#include<stdio.h>
signed int temp;
int ope;
int main(){
    printf("Enter temperature value: ");
scanf("%d",&temp);
printf("Chose option\n1: Farenhite to celcius\t2:Celcius to farenhite\n");
printf("Enter your choice:");
scanf("%d",&ope);
printf("Your choice is %d\n",ope);
if(ope==1){
   farenToCel(temp);
}
else if (ope==2)
    {
     celToFaren(temp);
}
else {
    printf("wrong input");}
return 0;
}
 void celToFaren(int b){
    signed int a=temp*1.5+32;
    printf("farenhite = %d & celcius = %d",temp,a);
}
void farenToCel(int a){
signed int b=(temp-32)*(9/5);
 printf("celcius = %d & farenhite = %d",temp,b);
}
