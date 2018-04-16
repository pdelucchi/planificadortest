#include <stdio.h>


int main(){

 int input = 12;
 int key = 0;
 int id = 0;
 int recurso = 0;

	printf( "1. Pausar Planificacion\n" );
    printf( "2. Continuar Planificacion\n" );
    printf( "3. Bloquear proceso\n" );
    printf( "4. Desbloquear proceso\n" );
    printf( "5. Bloquear proceso\n" );
    printf( "6. Listar procesos enconlados\n" );
    printf( "7. Kill\n" );
    printf( "8. Status\n" );
    printf( "9. Deadlock\n" );
    printf( "Selection: " );

 while(input!= 0){
 	scanf("%d",&input);
 	printf("%d\n", input);
    switch (input){
        case 1:            /* Note the colon, not a semicolon */
            printf("Planificacion Pausada\n");
            break;
        case 2:
        	printf("Planificacion Restaurada\n");
            break;
        case 3:
            printf("Inserte clave\n");
            scanf( "%d", &key );
            printf("Inserte ID\n");
            scanf( "%d", &id );
            printf("Proceso bloqueado\n");
            break;
        case 4:
        	printf("Inserte clave\n");
        	scanf( "%d", &key );
        	printf("Inserte ID\n");
        	scanf( "%d", &id );
        	printf("Proceso desbloqueado\n");
            break;
        case 5:
            printf("Inserte clave\n");
            scanf( "%d", &key );
            printf("Inserte ID\n");
            scanf( "%d", &id );
            printf("Proceso desbloqueado\n");
            break;
        case 6:
        	printf("Inserte recurso\n");
        	scanf( "%d", &recurso );
        	printf("Los procesos encolados son:\n");
        	break;
        case 7:
        	printf("Inserte ID del proceso\n");
        	scanf( "%d", &id );
        	printf("El proceso murio viejo\n");
        	break;
        case 8:
            printf("Inserte clave\n");
            scanf( "%d", &key );
            printf("Los procesos encolados son:\n");
            break;
        case 9:
        	printf("Los deadlocks encontrados son:\n");
        	break;

        default:
        	printf("Algo anda mal\n");
        	break;
    }
	printf( "1. Pausar Planificacion\n" );
    printf( "2. Continuar Planificacion\n" );
    printf( "3. Bloquear proceso\n" );
    printf( "4. Desbloquear proceso\n" );
    printf( "5. Bloquear proceso\n" );
    printf( "6. Listar procesos enconlados\n" );
    printf( "7. Kill\n" );
    printf( "8. Status\n" );
    printf( "9. Deadlock\n" );
    printf( "Selection: " );

  }

 printf("Nos vimo perro");
 return 0;
 }
