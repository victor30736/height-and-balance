//Victor Muthomi
//CT100/G/30736/26
//24/9/2026

#include <stdio.h>
int main()
{
//declare and initialize variables
int height;
float balance ;
double phonenumber;  
  printf("enter your height:\t");
  scanf("%d",& height);
 
 printf("enter your balance:\t");
  scanf("%f",& balance);
 
  printf("enter your phonenumber:\t");
  scanf("%lf",& phonenumber);
  
  printf("\n---your details---\n");
  printf("height:%d metres\n", height);
  printf ("balance:KHS%f\n", balance);
  printf ("phonenumber:%lf\n", phonenumber);
}