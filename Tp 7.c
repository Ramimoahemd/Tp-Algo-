#include<stdio.h>
#include<math.h>


float f(float x)
{
	float c;
	c= x * x * x;
	return(c);
}
float f2(int n)
{
		int i,som;
		float x,y;	
			i=1;som=0;
			while (i<=n)
			{
				printf(" Donner valeur de x n %c %d:", 248 ,i);
				scanf("%f" , &x);
				printf("Donner valeur de y n %c %d:", 248 ,i);
				scanf("%f" , &y);
				som=som+(x+y);
			i=i+1;
			}
		return(som);
}
int main () 
{
	int ch,sos,n;
	float x,prod;
	printf("Fonction");
	printf("\n");printf("\n");
	printf("1----->Calcul de F1 x^3");
	printf("\n");
	printf("2----->Calcul de F2 E(xi+yi)");
	printf("\n");
	printf("3----->Quitter");
	printf("\n");
	printf(" VOTRE CHOIX 1-3 ");
	scanf("%d", &ch);
	{		

		if (ch==1)
		{
			printf("Donner valeur pour x");
			scanf("%f", &x);
			prod=f(x);
			printf("Valuer de f1 est %f", prod);
		}
	
		if (ch==2)
		{
			printf("Donner valeuer pour n"); 
			scanf("%d", &n);
			sos=f2(n);
			printf("Valuer de f2 est %d", sos);
		}
		if (ch==3)
		{
			printf("Au Revoir");
		}

	
	
	
	}	

}
