#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() 
{
	float a,b,x;
        char rep; 
	rep='o';
	while (rep=='o')
	{
	printf(" Start equ ax+b=0 \n");
	printf("\n"); printf("\n"); 
	printf(" Donner valuer pour a et b ");
	
		scanf("%f %f", &a, &b);
		if (a==0)
	
		{
			printf("a should be =/= 0!!!\n");
		}	
                else 
		{
			(x=(-b)/a);
			printf(" The sulution is %f",x );
		}
		printf(" vouler-vous repeter avec d'autres valeurs o/n ?");scanf("%c",rep);
		if (rep=='n')
		{
			printf(" Au revoir! ");
		}
       }
}
