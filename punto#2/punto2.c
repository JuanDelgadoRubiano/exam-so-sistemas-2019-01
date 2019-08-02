#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "mycommon.h"
#include "common_threads.h"


puerta acceso;
volatile float  v = 0;

void *worker1(void *arg){
  float  z = 25;
  float  y = 350;
  cerrar_puerta(acceso);
  sleep(2);
  v = (z/y);
  abrir_puerta(acceso);

}


void *worker2(void *arg){
   float x = 1250;
     cerrar_puerta(acceso);
     v = x * v;
     abrir_puerta(acceso);
}


int main (int argc, char *argv[]){

pthread_t hilo1, hilo2;
crear_puerta(acceso);

pthread_create(&hilo1, NULL, worker1,  NULL);
pthread_create(&hilo2, NULL, worker2, NULL);
pthread_join(hilo1, NULL);
pthread_join(hilo2, NULL);
printf ("El valor total de la operacion en v es : %f \n", v );
destruir_puerta(acceso);
return 0;
}
