#include <stdio.h>
#include <pthread.h>


pthread_t q03a;

int vet1[3][2]={{1,4},{2,5},{3,6}};
int vet2[2][3]  ={{7,8,9},{10,11,12}};
int matriz[3][3] ={{0,0,0},{0,0,0},{0,0,0}};

void* qa (void *pointer)
{

	/*multiplication 1 
	 *multiply Vet1 * Vet2
	 */
	for(int column =0; column <3; column ++){

		for (int i =0 ;i <2; i ++){
				
				matriz[1][column] += vet1[1][i] * vet2[i][column];
				matriz[2][column] += vet1[2][i] * vet2[i][column];
				matriz[3][column] += vet1[3][i] * vet2[i][column];
		}
		printf("%i \n",matriz[1][column]);
		printf("%i \n",matriz[2][column]);
		printf("%i \n",matriz[3][column]);
	}
}
