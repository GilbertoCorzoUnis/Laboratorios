#include <iostream>
void porValor(int valor){
	    valor = 42;  //Cuando el control pasa a la funcion los valores de los parametros se copian en "objetos" locales de la funcion. Es decir son sus propios parametros. 
	}
	
	void porReferencia(int& valor){
	    valor = 42;  //Como es por referencia la declaracion de parametros de la funcion como referencia a"objetos".
	}
	
	int main(){
	    int valor1 = 0; //Por lo tanto al declararle que es igual a 0 va a obtener ese valor. Esta es la manera tradicional de asignar valores a variables. 
	    int valor2 = 0; //Asi mismo no importa que valor se le asigne al final siempre seguira el valor que por referencia se le asigno. 
	
	    porValor(valor1);
	    porReferencia(valor2);
	
	    printf("El resultado por valor es %i\n", valor1); //Es decir por eso valor1 siempre sera 0.
	    printf("El resultado por referencia es %i\n", valor2); //Hay que destacar que gracias al valor por referencia siempre sera ese valor incluso luego de declararle otro valor. 
       
	}