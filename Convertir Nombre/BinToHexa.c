#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int BinToHex()
{
    int poids_binaire[4];
    int digit;
    int i,k;
    int binaire[4];
    int resultat = 0;

    poids_binaire[0]=1;
    poids_binaire[1]=2;
    poids_binaire[2]=4;
    poids_binaire[3]=8;


    printf("Entrer un nombre binaire:\n\n");

        for (i=0;i<4;i++)
        {
            printf(" 1 er quartet : entrer le bit numero %d :\n ",i);
            scanf("%d",&digit);
            if (digit!= 0 && digit!= 1)
                {
                    printf("RENTREZ UN 0 OU UN 1, ICI IL NE S\'AGIT PAS D\'UN MOT BINAIRE\n");
                    printf("Entrer le bit numero : %d\n ",i);

                    scanf("%d",&digit);

                }

            binaire[i]=digit;
            //printf("bin=%d\n",binaire[i]);
            //printf("poids=%d\n",poids_binaire[i]);

        }
          for(k=0;k<4;k++)
          {
           resultat = resultat + binaire[k]*poids_binaire[k];


          }
          return (resultat);

}
int BinToHex1()
{
    int poids_binaire1[4];
    int digit1;
    int i1,k1;
    int binaire1[4];
    int resultat1 = 0;

    poids_binaire1[0]=1;
    poids_binaire1[1]=2;
    poids_binaire1[2]=4;
    poids_binaire1[3]=8;


    printf("Entrer un nombre binaire:\n\n");

        for (i1=0;i1<4;i1++)
        {
            printf(" 2 eme quartet : entrer le bit numero %d :\n ",i1);
            scanf("%d",&digit1);
            if (digit1!= 0 && digit1!= 1)
                {
                    printf("RENTREZ UN 0 OU UN 1, ICI IL NE S\'AGIT PAS D\'UN MOT BINAIRE\n");
                    printf("Entrer le bit numero : %d\n ",i1);

                    scanf("%d",&digit1);

                }

            binaire1[i1]=digit1;
            //printf("bin=%d\n",binaire[i]);
            //printf("poids=%d\n",poids_binaire[i]);

        }
          for(k1=0;k1<4;k1++)
          {
           resultat1 = resultat1 + binaire1[k1]*poids_binaire1[k1];

          }
          return (resultat1);
}
