/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main(void)
{
   int id, unit;
   float num1, sum=0, n,num;
   char connm[25];

   printf("Input Customer ID :");
   scanf("%d",&id);
   printf("Input the name of the customer :");
   scanf("%s",connm);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&unit);
   if (unit >199 )
	num1 = 2.00;
   else	if (unit>=250 && unit<400)
		num1 = 1.85;
	else if (unit>=450 && unit<600)
			num1 = 1.60;
		else
			num1 = 1.50;
   n = unit*num1;
   if (n>300)
	sum = n*10/100.0;
   num = n+sum;
   if (n < 100)
    n = 100;
   printf("\n[Electricity Bill]\n");
   printf("Customer ID#                        :%d\n",id);
   printf("unit Consumed                       :%d\n",unit);
   printf("Unit Charges @P %4.2f  per unit      :P%8.2f\n",num1,n);
   printf("Surchage Amount                     :P%8.2f\n",sum);
   printf("Total Customer Bill                 :P%8.2f\n",num);

}
