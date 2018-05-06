
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t ma;
sem_t ra;
sem_t doo;

void *printMa()
{
    printf("ma\n");
} 

void *printRa()
{
    printf("ra\n");
} 

void *printDo()
{
    printf("do\n");
}

int main()
{
    int cantidadCantos;
    printf("Ingrese cantidad de veces: ");
    scanf("%d",&cantidadCantos);
    for (int i = 0; i < cantidadCantos; i++){
        
    }
    
}