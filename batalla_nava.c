#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

int main(){
int j=0, m=0;
int atax, atay=0;
	
	int matriz[10][10] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};			
	int ren, col=0;
	printf("\n TABLERO DEL JUGADOR \n");
	for ( ren = 0 ; ren < 10 ; ren++)
	{	
		for( col = 0 ; col < 10 ; col++)
		{		
			printf(" %d", matriz[ren][col]);
			
		}
		printf("\n");
	}
			
int matriz2[10][10] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
	int ren2, col2=0;
	printf("\n TABLERO DE LA COMPUTADORA \n");
	for ( ren2 = 0 ; ren2 < 10 ; ren2++)
	{	
		for( col2 = 0 ; col2 < 10 ; col2++)
		{	
			printf(" %d", matriz2[ren2][col2]);
			
		}
		printf("\n");
	}
	printf("\n");

	int i, a, b=0;
	srand(time(NULL));
	
	for( i = 0 ; i < 4 ; i++){ 
			a = rand()% 10;
			b = rand()% 10;

			if( matriz2[a][b] == 1)
			{
				i--;					
			}
			matriz2[a][b] = 1 ;
		}
		
		int x2, y2=0;
		for( i = 1; i < 5; i++ )
		{ 
		printf("\n\t Escribe las coordenadas de tu barco %d en forma X,Y : ", i);
		scanf("%d,%d", &x2, &y2);			
	    
		if (matriz[x2][y2] == 1)
		{					
	    	printf("\n\n\t\t Ya pusiste valor aqui.\n\n");
			i--;
			
		}	
			matriz[x2][y2] = 1 ;
						
     	}
               printf("\n\n.........................Inicia el juego.......................... \n\n");
               
               while ( j<4&&m<4)
			   {
			   	 printf("\n");
                 printf("\t\t\t Es tu turno\t\t\t");
                 printf("\n");
                 printf("\n\n\t Ingresa las cordenadas de tu ataque en forma X,Y: ");
                 scanf("%d,%d", &atax, &atay);

	    	   if ( matriz2[atax][atay] ==0)
			   {
			   	  printf("\n");
		          printf("\n\t\t\t\t Fallaste!\n");
		          printf("\n");
			   }		
		       else if (  matriz2[atax][atay] ==1)
			   {				
                 	printf("\t\t\t\t\t\t Le diste! \n\n" );    				
		    		matriz2[atax][atay] = 0; 	    				
		  			j=j+1;  				
		       }
		            printf("\n");
		            printf("\n");
		   			printf(".......................Turno de la computadora.......................");
		   			printf("\n");
		    		int atacx, atacy;	
		    		atacx = rand() % 10 ;    	
					atacy = rand() % 10 ;
				
					if ( matriz[atacx][atacy]==0)
					{	
						printf("\n");
		    			printf("\n\t\t\t La computadora fallo!\n\n");
						
		    		}
					else if (matriz[atacx][atacy] ==1 )
					{
                        printf("\t\t\t\t Mato a un barco:(\n\n");
		    			matriz[atacx][atacy]=0;			
		    		    m= m+1;		
		    		}
		    		
				    printf("\n TABLERO DEL JUGADOR \n");
					
					for ( ren = 0 ; ren < 10 ; ren++)
					{
		               for( col = 0 ; col < 10 ; col++)
					   {
		             	printf(" %d", matriz[ren][col]);
	            	   }
		            printf("\n");
                 	}	
               }    	
               if (j>3)
			   {
                  printf("Ganaste!"); 
			   }
               else
			   {
                  printf ("Perdiste");
               }
	           printf("Fin del Juego");
            }
