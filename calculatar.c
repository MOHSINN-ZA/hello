//CALCULATOR
#include<stdio.h>
int main(){
printf("Enter first number: ");
int a;
scanf("%d",&a);
printf("Choose an operator (+, -, *, /): ");
int op;
scanf(" %c",&op);
printf("Enter second number: ");
int b;
scanf("%d",&b);
switch(op){
case '+':
printf("%d + %d = %d",a,b,a+b);
break;
case '-':
printf("%d - %d = %d",a,b,a-b);
break;
case '*':
printf("%d * %d = %d",a,b,a*b);
break;
case '/':
if(b!=0){
    printf("%d / %d = %d",a,b,a/b);
}else{
    printf("Error! Division by zero.");
}
break;
default:
printf("Error! Invalid operator.");
break;
}
return 0;
}