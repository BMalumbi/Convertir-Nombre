#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "BinToHexa.h"
#include "DecToBinAndHexa.h"

int main()
{
    int choix_operation;
    int decimal;
    int hexadecimal;
    int dec;
    int i;
    char exa[50];
    int decimal1;
    int hex;
    int again;





    affichage();

    scanf("%d",&choix_operation);

    switch (choix_operation)
     {

        case 1 :
        decimal = BinToHex();
        decimal1 = BinToHex1();

         printf("Le resultat en base hexadecimale de l'octet est donc: %X%X\n",decimal,decimal1);
        break;

        case 2 :
       printf("Entrez un nombre en base 10 :\n");
       scanf("%d", &dec);
       while (dec>255)
{
   printf("RENTREZ UN UN NOMBRE INFERIEUR A 256, ICI CE N\'EST PAS LE CAS\n");
   printf("Entrer un nombre Decimal inférieur à 256:\n");
   scanf("%d", &dec);
}

       printf("Son equivalence binaire est:\n");
       DecToBin(dec);
        break;

        case 3 :

        DecToHexa();

        break;

        case 5 :
  printf("Entrez un nombre en base 10 inférieur à 10 :\n");
       scanf("%d", &dec);
       if (dec>9)
                {
                    printf("RENTREZ UN UN NOMBRE INFERIEUR A 10, ICI CE N\'EST PAS LE CAS\n");
                    printf("Entrer un nombre Decimal inférieur à 10:\n");
                    scanf("%d", &dec);
                }
       printf("Son equivalence binaire est:\n");
       DecToBin(dec);
        break;

     }

printf("Voulez vous refaire une nouvelle operation ?\n\n");
printf("Si oui tapez 1 sinon si vous voulez quitter taper 2\n\n");
scanf("%d",&again);

if(again==1)
{
    main();
}
else
{
printf("\nAu revoir ");
}

    return 0;
}

