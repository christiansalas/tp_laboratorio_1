
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include <string.h>

int main()
{
   float  primerOperando,
   segundoOperando,
   resulSuma,
   resulResta,
   resulDivision,
   resulProducto;
  int  resulFactorialA;
   int resulFactorialB;

   int rtaScanf;
   char primero [30];
   char segundo [30];
   int flag1=0;
   int flag2=0;
   int opcion = 0;
   char seguir = 's';

   strcpy(primero,"1-Ingresar 1er operando(A=");
   strcpy(segundo,"2-Ingresar 2do operando(B=");


   while(seguir == 's')
   {

        if (flag1 != 1)
            {

                printf("%sx)\n", primero);

            }
        else
            {
                printf("%s%.2f)\n", primero,primerOperando);


            }

        if (flag2 != 1)
            {
                printf("%sy)\n", segundo);


            }
        else
            {
                printf("%s%.2f)\n", segundo,segundoOperando);


            }

        printf("1- Ingresar primer operando \n");
         printf("2- Ingresar segundo operando \n");
        printf("3- Calcular todas las operaciones\n");
        printf("Calcular resta (A-B)\n");
        printf("Calcular division (A/B)\n");
        printf("Calcular multiplicacion (A*B)\n");
        printf("Calcular el factorial (A!)\n");
        printf("4-Informar Resultados \n");
        printf("5- Salir\n");

       rtaScanf = scanf("%d",&opcion);
       //scanf("%d",&opcion);
        getchar();


       if (rtaScanf != 1 || opcion > 5 || opcion <1)
       {
        printf("Error, elija una opcion valida!! \n");
       }else

       {


        switch(opcion)
        {

            case 1:
                        printf("Ingrese el primer numero : \n");
                        rtaScanf =scanf("%f", &primerOperando);
                        getchar();

                        if (rtaScanf != 1)
                        {
                            printf("Error. El operando ingresado no es válido.\n");
                        }
                        else
                        {
                            flag1=1;
                        }
                        break;

            case 2:

                            printf("Ingrese el segundo numero : \n");
                            rtaScanf = scanf("%f",&segundoOperando);
                            getchar();

                            if (rtaScanf!= 1)
                            {
                                printf("Error. El operando ingresado no es válido.\n");
                            }
                            else
                            {
                                flag2=1;
                            }
                            break;

                case 3:



                        if (flag1 != 1 || flag2 != 1)
                                    {
                                        printf("\n Error. Falta ingresar algun operando.\n\n");
                                    }

                        else
                            {
                                printf("\nCalculando las operaciones ....\n\n");
                                resulSuma = getSuma(primerOperando,segundoOperando);
                                resulResta = getResta(primerOperando,segundoOperando);
                                resulProducto = getProducto(primerOperando,segundoOperando);
                                if(segundoOperando != 0)
                                {
                                resulDivision= getDivision(primerOperando,segundoOperando);
                                resulFactorialB=factorial(segundoOperando);
                                }
                                if(primerOperando !=0 )
                                {
                                   resulFactorialA=factorial(primerOperando) ;
                                }


                            }
                            break;



            case 4:

                        if (flag1 != 1 || flag2 != 1)
                                    {
                                        printf("Error. Falta ingresar algun operando.\n");
                                    }
                                    else
                                    {
                                        printf("\n\n\n");
                                        printf("El Primer operando ingresados es : %f \n, El segundo operando ingresado es : %f\n",primerOperando,segundoOperando);

                                        printf(" \nel resultado de la SUMA es %.2f\n",resulSuma);
                                        printf("el resultado de la RESTA es %.2f\n",resulResta);
                                        printf("El resultado del PRODUCTO es : %.2f\n",resulProducto);
                       if(segundoOperando==0)
                                    {
                                          printf("Error, no se puede dividir por  0!!!\n");
                                    }
                                 else
                                    {
                                         printf("el resultado de la DIvision es  : %2f\n",resulDivision);
                                    }

                       if(primerOperando<=0 )
                                    {
                                       printf("Error, no es posible calcular el factorial de un numero menor o igual que 0 \n");
                                    }
                                 else
                                    {
                                    printf("El resultado del FACTORIAL A  es : %d\n",resulFactorialA);
                                    }
                      if( segundoOperando <=0)
                                    {
                                    printf("Error, no es posible calcular el factorial de un numero menor o igual que 0 \n");

                                    }
                                 else
                                    {
                                          printf("El resultado del FACTORIAL B  es : %d\n",resulFactorialB);
                                    }

                    }
                     printf("\n\n\n");
                    break;


            case 5:
                            seguir = 'n';
                            printf("Adios!!");

                            break;



        }

        }

}
   return 0;
}
