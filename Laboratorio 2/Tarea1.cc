#include <iostream>

int main(){

int numerodeempleados = 5; //ya que es un numero entero y no simepre va a ser una constante

double sueldo = 110.50; //ya que es un numero decimal

float sueldototal = sueldo * numerodeempleados; //ya que es un numero decimal y tambien entero. y luego para hacer la operacion pertinente. 

float impuestos = 0.1; //ya que es un numero decimal.y conviene que no sea una constante ya que el valor de los impuestos puede cambiar de un anio a otro. y tambien para hacer la operacion despues.

float impuestostotales = sueldototal * impuestos; //Puesto que es una variable que conlleva mas de un punto decimal. 

printf(" Sueldo total es: %f ", sueldototal);
printf("  impuestos pagados %f ", impuestostotales);

    for (numerodeempleados=5; numerodeempleados<9; numerodeempleados++ ){

if (numerodeempleados==8){
    printf(" Se aumentaron los empleados a la cantidad de: %d ",numerodeempleados);

float sueldosact = numerodeempleados * sueldo; //Como todas las variables estan declaradas con float es pertinente que siga asi. 
float impuestosact = sueldosact * impuestos;

printf(" Sueldo actualizado: %f ", sueldosact);
printf(" Impuestos a pagar actualizados son: %f ", impuestosact);

}
    }


    
    return 0;
}