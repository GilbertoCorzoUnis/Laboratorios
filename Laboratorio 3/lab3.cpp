#include <iostream>

int main(){

char caracter;

float caida;

int objeto = 1;

float resistencia = 0.0023;

float gravedadtierra = 9.8;

float gravedadcalisto = 1.23;

float gravedadluna = 1.62;

float distancia; 


float gravedadvenus = 8.87;

int resistencia2 = 0;
do{

printf("Que cuerpo celeste quiere elegir? ");

scanf("%c", &caracter);

}

while(caracter!='t' && caracter!='v' &&  caracter!='l' && caracter!='c'  && caracter!='s');



switch(caracter){

case 's' : return 0;
break; 

case 't' : {printf(" Tierra. ");
printf("Cual es el tiempo de caida (en segundos) ?  ");
scanf("%f",&caida);

float a;
float Ft = gravedadtierra-(resistencia*gravedadtierra);

for(a=0; a <= caida/0.01; a++){

float velocidadfinal = ((Ft*a)/100); 
printf("La velocidad es: %lf m/s ", velocidadfinal);
float b=a*10;
printf("en el milisegundo %lf ",b);

}
printf("La aceleracion es igual a: %lf ", Ft);
float distanciat = gravedadtierra*caida;
printf("La distancia recorida es igual a: %lf", distanciat);
return 0;}
break;

case 'v' : {printf("Venus. ");
printf("Cual es el tiempo de caida (en segundos) ?  ");
scanf("%f",&caida);

float a;
float Fv = gravedadvenus-(resistencia*gravedadvenus);
for(a=0; a<=caida/0.01; a++)
{
float velocidadfinalv = ((Fv*a)/100);
printf("La velocidad es: %lf m/s. ", velocidadfinalv);
float b=a*10;
printf("en el milisegundo %lf ",b);

}

printf("La aceleracion es igual a: %lf ", Fv);
float distanciav=gravedadvenus*caida;
printf("La distancia recorida es igual a; %lf", distanciav);
return 0;}
break;

case 'l' : {printf("Luna. ");
printf("Cual es el tiempo de caida (en segundos) ?  ");
scanf("%f",&caida);

float a;
float Fl=gravedadluna-resistencia2;
for(a=0; a<=caida/0.01; a++){

float velocidadfinall = ((Fl*a)/100);
printf("La velocidad final es: %lf m/s. ", velocidadfinall);
float b=a*10;
printf("en el milisegundo %lf ",b);

}
printf("La aceleracion es igual a: %lf ", Fl);
float distancial=gravedadluna*caida;
printf("La distancia recorida es igual a; %lf", distancial);
return 0;}
break;

case 'c' : {printf("Calisto. ");
printf("Cual es el tiempo de caida (en segundos) ?  ");
scanf("%f",&caida); 

float a;
float Fc=gravedadcalisto-resistencia2;
for(a=0; a<=caida/0.01; a++){
    float velocidadc= ((Fc*a)/100);
printf("La velocidad final es: %lf m/s. ", velocidadc);
float b=a*10;
printf("en el milisegundo %lf ",b);

}
printf("La aceleracion es igual a: %lf ", Fc);
float distanciac=gravedadcalisto*caida;
printf("La distancia recorida es igual a; %lf metros", distanciac);
return 0;}
break;

}
}