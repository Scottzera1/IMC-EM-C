
#include <stdio.h>
#include <stdlib.h>
 
 
  //IMC  Classificação
// abaixo de 18,5  Subnutrido 
// entre 18,6 e 24,9  Peso ideal 
//entre 25,0 e 29,9 Levemente acima do peso
// entre 30,0 e 34,9 Primeiro grau de obesidade
// entre 35,0 e 39,9 Segundo grau de obesidade
// acima de 40  Obesidade mórbida

float calcIMC(float peso, float altura)
{
      float imc = peso / (altura * altura);
      
      return imc;
}

void funcFaixas(float imc)
{
    if(imc < 18.5)
    {
           printf("\n\nS u b n u t r i d o.\n\n");
    }
    else if(imc < 25)
    {
         printf("\n\nP e s o  i d e a l.\n\n");
    }
    else if(imc < 30)
    {
        printf("\n\nP o u c o  A c i m a  d o  p e s o.\n\n");
    }
    else if(imc < 35)
    {
         printf("\n\nO b e s i d a d e 1.\n\n");
    }
    else if(imc < 40)
    {
         printf("\n\nO b e s i d a d e 2.\n\n");
    }
    else
    {
         printf("\n\nO b e s i d a d e  M %c r b i d a."
         "\n\n", 162);
    }

}


main()
{  
      
      float peso, altura, imc;
       
      char continuar;
      system("color 37");
      inicio:
      printf("\n\n             *** IMC ***");
      printf("\n\n\nDigite o peso: \n\n", 130);
      scanf("%f", &peso);
      printf("\n\nDigite a altura:\n\n");
      scanf("%f", &altura);
      
      
      imc = calcIMC(peso, altura);
      
      printf("\n\nIMC: %.2f.", imc);
      
      funcFaixas(imc);

      printf("\n\nDeseja continuar? (s / n)\n\n");
      scanf("%s", &continuar);
     
      while(continuar != 's' && continuar != 'n')
      {
          printf("\n\nDigite s ou n.\n\n");
          printf("\n\nDeseja continuar? (s / n)\n\n");
          scanf("%s", &continuar);
      }
      
      if (continuar == 'n')
      {
         exit(0);
      }
      
      goto inicio;
      
}
