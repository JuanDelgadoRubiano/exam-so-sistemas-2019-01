# PREGUNTA 1

Tiempo con las puertas fuera del ciclo for

167 ms para un valor de 10

167 ms para un valor de 100

163 ms para un valor de 200

176 ms para un valor de 300

167 ms para un valor de 400


TIempo con las puertas dentro del ciclo for

197 ms para unvalor de 500

214 ms para un valor de 500

204 ms para un valor de 500

190 ms para un valor de 500

198 ms para un valor de 500

198 ms ppara un valor de 500


Para el programa con las puertas dentro del ciclo for, este tarda un poco mas
 debido a que se aumenta la carga al programa ademas de que el numero
 de operaciones es poco, entonces el hilo siguiente debe esperar a que
 la variable sea liberada, mientras que con las puertas fuera del ciclo,
 primero se cierran, luego se hace el ciclo, y por ultimo se abren,
 lo que disminuye el numero de operaciones de abrir y cerrar las puertas. 
