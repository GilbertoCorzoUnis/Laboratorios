#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{


int columnas;
cout<<"Introducir dimensiones: ";
cin>>columnas;

int columnasv=columnas-1;
int puntop[2][columnas];

int total;

for(total=0; total<=columnasv; total++){


cout<<"introducir valores de X: " <<endl;
cin>> puntop[1][total];

}


for(total=0; total <=columnasv; total++){

cout<<"introducir datos de Y: " <<endl;
cin>> puntop[2][total];

}
int multi=1;
int prueba;
int fila2;
for(prueba=0;prueba<=columnasv; prueba++){
    int mult = 1;
for(fila2=1; fila2<=2; fila2++){
    //mult = mult + puntop[fila2][prueba];
multi=multi*puntop[1][prueba];


printf("el resultado es %d " , multi) ;
}

}





}