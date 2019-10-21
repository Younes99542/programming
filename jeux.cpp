#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{
    int nombreMystere =0, nombreEntre = 0;
    const int MAX = 19, MIN = 1;
					srand(time(NULL));
   								 nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
 do
    {
        
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);

        

        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");
    } while (nombreEntre != nombreMystere);
    
    return 0;
}
