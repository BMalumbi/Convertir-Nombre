#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void DecToHexa()
{ int dec;
  int i;
  char exa[2];
dec = 0;
for (i = 0;i < 2;i++)
{
exa[i] = 0;
}
i = 0;
printf("Entrer un nombre Decimal inferieur a 256:\n");
scanf("%d", &dec);
 if (dec>256)
                {
                    printf("RENTREZ UN UN NOMBRE INFERIEUR A 256, ICI CE N\'EST PAS LE CAS\n");
                    printf("Entrer un nombre Decimal inférieur a 256:\n");
                    scanf("%d", &dec);
                                }
while ((dec / 16) != 0)
{
exa[i] = dec % 16;
dec = dec / 16;
i++;
}
exa[i] = dec;
printf("L\'equivalence du nombre en hexadecimal est donc:\t");
while (i >= 0)
{
if (exa[i] == 15)
{
printf("F");
}
else if (exa[i] == 14)
{
printf("E");
}
else if (exa[i] == 13)
{
printf("D");
}
else if (exa[i] == 12)
{
printf("C");
}
else if (exa[i] == 11)
{
printf("B");
}
else if (exa[i] == 10)
{
printf("A");
}
else
{
printf("%d", exa[i]);
}
i--;
}
printf("\n");


}
