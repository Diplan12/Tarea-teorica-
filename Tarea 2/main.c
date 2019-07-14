#include <stdio.h>
#include <stdlib.h>


int ganados (int y ){
    int z=y*3;
    return z;


        }









struct estructura_basket {	/* Definimos la estructura basket */
	char equipo[50];
	int victorias;
	int derrotas;
	int perdidabalon;
	int rebotes;
	char mejortriple[200];
	int triples;
	}bas;

	struct estructura_basket2 {	/* Definimos la estructura basket */
	char equipo[50];
	int victorias;
	int derrotas;
	int perdidabalon;
	int rebotes;
	char mejortriple[200];
	int triples;
	}bas2;




	struct estructura_futbol {	/* Definimos la estructura futbol */
	char equipo[50];
	int victorias;
	int empates;
	int golesfavor;
	int golescontra;
	char maxgoleador[200];
	int numerodegoles;
	}fut;

		struct estructura_futbo2 {	/* Definimos la estructura futbol */
	char equipo[50];
	int victorias;
	int empates;
	int golesfavor;
	int golescontra;
	char maxgoleador[200];
	int numerodegoles;
	}fut2;










int main()
{
   int opc, menu;
   printf("Escoja una opcion del menu:");
   printf("\n1. Liga de Futbol");
   printf("\n2. liga de Baloncesto");
   printf("\n3. Salir\n");
   printf("\n\nLa opcion que eligio es: ");
   scanf("%d", &menu);

   do{

  switch(menu){
       case 1:
           printf( "Escribe el nombre del equipo:\n " );
	scanf( "%s", &fut.equipo );
		printf(" Numero de victorias del  equipo:\n");
	scanf( "%d", &fut.victorias);
	printf(" Numero de empates del  equipo :\n");
	scanf( "%s", &fut.empates);


	  printf( "Numero de goles a favor:\n " );
	scanf( "%d", &fut.golesfavor );

	  printf( "Numero de goles en contra:\n " );
	scanf( "%d", &fut.golescontra );

	  printf( "Nombre del maximo goleador:\n " );
	scanf( "%s", &fut.maxgoleador );

	  printf( "Numero de goles del goleador:\n " );
	scanf( "%d", &fut.numerodegoles );

            printf( "Escribe el nombre del SEGUNDO equipo :\n " );
            scanf( "%s", &fut2.equipo );

            printf(" Numero de victorias del SEGUNDO equipo:\n");
            scanf( "%d", &fut2.victorias);
            printf(" Numero de empates del SEGUNDO equipo :\n");
            scanf( "%s", &fut2.empates);



	  printf( "Numero de goles a favor:\n " );
	scanf( "%d", &fut2.golesfavor );

	  printf( "Numero de goles en contra:\n " );
	scanf( "%d", &fut2.golescontra );

	  printf( "Nombre del maximo goleador:\n " );
	scanf( "%s", &fut2.maxgoleador );

	  printf( "Numero de goles del goleador:\n " );
	scanf( "%d", &fut2.numerodegoles );
break;



case 2:
          printf( "Escribe el nombre del equipo:\n " );
	scanf( "%s", &bas.equipo );
	  printf( "Numero de Victorias:\n " );
	scanf( "%d", &bas.victorias );
	printf( "Numero de Derrotas:\n " );
	scanf( "%d", &bas.derrotas );
		printf( "Numero de perdida de balon:\n " );
	scanf( "%d", &bas.perdidabalon );
		printf( "Numero de Rebotes:\n " );
	scanf( "%d", &bas.rebotes );
		printf( "Nombre del Mejor Triplero:\n " );
	scanf( "%s", &bas.mejortriple );
	printf( "Numero de triples:\n " );
	scanf( "%d", &bas.triples );


	 printf( "Escribe el nombre del SEGUNDO equipo:\n " );
	scanf( "%s", &bas2.equipo );
	  printf( "Numero de Victorias:\n " );
	scanf( "%d", &bas2.victorias );
	printf( "Numero de Derrotas:\n " );
	scanf( "%d", &bas2.derrotas );
		printf( "Numero de perdida de balon:\n " );
	scanf( "%d", &bas2.perdidabalon );
		printf( "Numero de Rebotes:\n " );
	scanf( "%d", &bas2.rebotes );
		printf( "Nombre del Mejor Triplero:\n " );
	scanf( "%s", &bas2.mejortriple );
	printf( "Numero de triples:\n " );
	scanf( "%d", &bas2.triples );
	break;


	 case 3:
    break;

   default:
    printf("La opcion elegida no es reconocida");
    break;

	}
	break;
	} while(menu!=3);


	system("CLS");


    int opc2, menu1;
    printf("Escoja una opcion del menu:");
    printf("\n1. Listado de los mejores Tripleros:");
    printf("\n2. Maximo Goleador de liga de futbol");
    printf("\n3.Equipo ganador Liga de Futbol:");
    printf("\n4.Equipo ganador Liga de Baloncesto:");
    printf("\n5. Salir\n");
    printf("\n\nLa opcion que eligio es: ");
    scanf("%d", &menu1);



  switch(menu1){


        case 1:
            printf( "Mejores tripleros:\n" );
            printf("Los mejores triplistas fueron:\n\n");
            printf("%s %d \n ",bas.mejortriple, bas.triples);
            printf("%s %d \n" ,bas2.mejortriple,bas2.triples);
           break;





        case 2:

            printf( "Mejor Goleador de la liga es :\n" );
             {

            if ( fut.numerodegoles > fut2.numerodegoles )
            {
                printf("%s con %d GOLES", fut.maxgoleador,fut.numerodegoles);
            break; }
else
            {
                printf("%s con %d GOLES", fut2.maxgoleador,fut2.numerodegoles);
           break; } }
           break;



        case 3:

            printf("El equipo ganador de la liga de futbol es:\n");

            int equipo1=ganados(fut.victorias)+ fut.empates;
            int equipo2=ganados(fut2.victorias) + fut2.empates;
             {

            if (equipo1 > equipo2)

            {
                printf("%s  con %d PUNTOS\n", fut.equipo,equipo1);

            }

       else

            {
                printf("%s  con %d PUNTOS\n", fut2.equipo,equipo2);

                break;
            }
             }

            break;


        case 4:
            printf(" El equipo ganador de baloncesto es:\n");
           {

            if (bas.victorias > bas2.victorias )
                {
                    printf("%s  con %d VICTORIAS:", bas.equipo,bas.victorias);

}
    else
                {
                    printf("%s  con %d VICTORIAS:", bas2.equipo,bas2.victorias);
                    break;

}

}
break;


 case 5:
    break;

   default:
    printf("La opcion elegida no es reconocida");
    break;

     }







  return 0;



}
