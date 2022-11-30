#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
int main() 
{ 
	float ch,a,b,x;
	system("clear"); 
		printf("\n"); printf("\n"); 
	printf("     Traitements    ");
		printf("\n"); printf ("\n"); 
	printf(" *1--> Equation 1er dgeree  ");
	printf("\n"); 
	printf(" *2--> Afficher caractere ");
	printf("\n");
	printf(" *3--> Quitter ");
	printf("\n");
	printf("   Votre Choix: ");
	scanf( "%f", &ch ); 

{



	if (ch==1)
	{ 
printf("Donner valuer pour a et b:");
scanf("%f %f", &a, &b);
	if 
		(a==0)
		{ printf("a different de 0");}

	else 
		(x=-b/a);
		{printf( "Solution est %f",x);}

} 
 
		if (ch==2)
		{ system("*");
	       printf(" Later Maybe"); 	} 
		
			if (ch==3) 
			{ printf(" Au Revoir ");
		       scanf("*"); 
			} 
 		if (ch !=1 && ch !=2 && ch !=3)  
		{ printf(" Erreur: Choix etc");
		 scanf("*"); } 
		 }
     	
}
