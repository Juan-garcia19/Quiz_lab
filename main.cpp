/*
 Este programa recibe un numero entero positivo por consola y realiza la operacion
 de descomponer el numero en una unidad, elevarla al mismo valor de la unidad y sumar
 cada uno de sus unidades elevadas
*/

#include <iostream>

using namespace std;

int main()
{
    unsigned int Numero,elevado=0,Sumatoria=0;
    unsigned short int NumAparte=0,cont2;

    cout<<"ingrese un numero positivo: ";
    cin>>Numero;
    int Copianumero=Numero;

    unsigned short int NumeroM=0,contadorM=0;


    while(Numero>0){
        //descomposicion del numero
        NumAparte=Numero%10;
        Numero=Numero/10;

        //numero mayor

        if(NumAparte>=NumeroM){
            NumeroM=NumAparte;
            contadorM+=1;
        }

        unsigned short int Exponente=NumAparte,cont=1;
        int multi=NumAparte;

        //exponente de un numero con sumas
        while(cont<Exponente){
           for (cont2 = 0;cont2<NumAparte;cont2++){
            elevado=elevado+multi;
           }
           multi=elevado;
           elevado=0;

           //elevado = elevado*Numero;
           cont+=1;
        }
        Sumatoria=multi+Sumatoria;

    }
    cout<<"La suma de cada uno de los digitos elevados a si mismos del numero "<<Copianumero<<" es "<<Sumatoria<<endl;
    cout<<"El digito mayor encontrado es el "<<NumeroM<<" que aparece "<<contadorM<<" vez o veces "<<endl;
    return 0;
}
