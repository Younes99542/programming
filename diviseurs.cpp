#include<stdio.h>
#include<math.h>
//EXERCICE 3,2 TP N°1
int main()
{
	int x,i,s;
	printf("donner un nombre entier:");
	scanf("%d",&x);
		if(x==0)
		{
			printf("tous les entier nules sont des diviseurs de 0");
			}
			else{
		
				for(i=1;i<=1000000000000000000;i++){// C'est trés difficile de fair des calcules trés géant pour certains processeurs
				if(x%i==0){
				s=i;
				printf("la solusion est""%d\n",s);
					
				}
				
				}
			
			
				}	
		
			}
