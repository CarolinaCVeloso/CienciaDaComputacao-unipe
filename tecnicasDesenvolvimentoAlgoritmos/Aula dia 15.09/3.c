/*
    3. Escreva 500 vezes a frase "Eu não vou mais jogar aviõezinhos de papel na sala de aula"
*/

#include    <stdio.h>
#include    <locale.h>

int main()
{
    setlocale (0, "Portuguese");
    
    int i = 0;

    /* FOR
    
    for (i = 0; i < 500; i++) {
        printf ("Eu não vou mais jogar aviõezinhos de papel na sala de aula \n");
        }

    */

   /* WHILE 

   while (i < 500) {
        printf ("Eu não vou mais jogar aviõezinhos de papel na sala de aula \n");
        i++;
   }
   */

  do { 
     printf ("Eu não vou mais jogar aviõezinhos de papel na sala de aula \n");
     i++;
  } while (i < 500);
  
}