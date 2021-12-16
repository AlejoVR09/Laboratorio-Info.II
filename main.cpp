#include <iostream>

using namespace std;
//Prototipos de funciones
int divisores(int a);
int primos(int a);

int main()
{   /*><*/
    bool cierre=false;
    while (true) {
        if (cierre==true) {
            break;
        }

        cout <<"Ingrese la opcion: ";
        short option;
        cin >>option;
        switch (option) {
            case 1:{
                /*Escriba un programa que identique si un carácter ingresado es una vocal, una con-
                sonante o ninguna de las 2 e imprima un mensaje según el caso.

                Nota: el formato de salida debe ser:
                no es una letra.
                a es una vocal.*/
                char letra=0;
                short comp=0;
                cout <<"Ingrese la letra: ";
                cin >>letra;

                if(letra=='A' || letra=='a' || letra=='E' || letra=='e' ||letra=='I' || letra=='i' ||letra=='O' || letra=='o' ||letra=='U' || letra=='u'){
                    cout <<"es una vocal"<<endl;
                }
                else{
                    for (char i=65;i<91;i++) {
                        if (letra==i) {
                            comp=1;
                            break;
                        }

                    }

                    for (char i=97;i<122;i++) {
                        if (letra==i) {
                            comp=1;
                            break;
                        }
                    }
                    if (comp==1) {
                        cout <<"es una consonante"<<endl;
                    }
                    else{
                        cout <<"no es una letra"<<endl;
                    }
                }
            break;
            }
            case 2:{
                /*Se necesita un programa que permita determinar la mínima combinación de billetes
                y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
                $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.

                Hacer un programa que entregue el número de billetes y monedas de cada denominación para com-
                pletar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la

                cantidad deseada, el sistema deberá decir lo que resta para lograrla.
                Ej: si se ingresa 47810, el programa debe imprimir:
                50000 : 0
                20000: 2
                10000 : 0
                5000: 1
                2000 : 1
                1000: 0
                500 : 1
                200: 1
                100 : 1
                50: 0
                Faltante: 10
                    \   */
                int valor;
                cout <<"Ingrese el monto total de dinero: ";
                cin >>valor;
                int cincM=0;
                int veinM=0;
                int diezM=0;
                int cinM=0;
                int dosM=0;
                int mil=0;
                int quini=0;
                int dosci=0;
                int cien=0;
                int cinc=0;


                cincM=(valor/50000);
                float residuo= (valor%50000);
                valor=residuo;
                veinM=(valor/20000);
                residuo= (valor%20000);
                valor=residuo;
                diezM=(valor/10000);
                residuo= (valor%10000);
                valor=residuo;
                cinM=(valor/5000);
                residuo= (valor%5000);
                valor=residuo;
                dosM=(valor/2000);
                residuo= (valor%2000);
                valor=residuo;
                mil=(valor/1000);
                residuo= (valor%1000);
                valor=residuo;
                quini=(valor/500);
                residuo= (valor%500);
                valor=residuo;
                dosci=(valor/200);
                residuo= (valor%200);
                valor=residuo;
                cien=(valor/100);
                residuo= (valor%100);
                valor=residuo;
                cinc=(valor/50);
                residuo= (valor%50);
                valor=residuo;
                cout<<"50000 : "<<cincM<<endl<<"20000 :"<<veinM<<endl<<"10000 : "<<diezM<<endl<<"5000 : "<<cinM<<endl<<"2000 : "<<dosM<<endl<<"1000 : "<<mil<<endl<<"500 : "<<quini<<endl<<"200 : "<<dosci<<endl<<"100 : "<<cien<<endl<<"50 : "<<cinc<<endl<<"Faltante : "<<valor<<endl;

            break;
            }
            case 3:{
                /*Escriba un programa que muestre el siguiente patrón en la pantalla:

                            *
                           ***
                          *****
                         *******
                          *****
                           ***
                            *


                            *
                           ***
                          *****
                           ***
                            *


                El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el
                ejemplo mostrado, el tamaño de la gura es 7.*/
            int tamano=0;
            while (tamano%2==0) {
                cout <<"Ingrese el tamano total de la figura(numero impar): ";
                cin >>tamano;
            }
            for (int j=1;tamano>j;j++) {
                for (int i=tamano-2;i>=j;i--) {
                        cout <<" ";
                }
                for (int h=1;2*j-3>=h;h++) {
                    cout <<"*";
                }
                cout <<endl;
            }
            for (int j=1;tamano>=j;j++) {
                for (int i=1;i<=j;i++) {
                        cout <<" ";
                }
                for (int h=2*tamano-7;2*j-1<=h;h--) {
                    cout <<"*";
                }
                cout <<endl;
            }

            break;
            }
            case 4:{
                /*En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
                1. Ej: 1, 1, 2, 3, 5, 8, ....
                Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
                de Fibonacci menores a n.
                Ej: si se ingresa 10, sería la suma de 2+8 =10
                Nota: el formato de salida debe ser: El resultado de la suma es: 10*/
                int n=0;
                cout <<"Ingrese un numero entero: ";
                cin >>n;
                int low=0;
                int high=1;
                int total=0;
                int i=0;
                int sum=0;
                while (i<n) {
                    if(high%2==0){
                        sum=sum+high;
                        cout <<high<<endl;

                    }
                    total=high;
                    high=high+low;
                    low=total;
                    i=high;
                }
                cout <<"El resultado de la suma es: "<<sum<<endl;


            }
            case 5:{
                /*Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
                múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
                Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
                Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
                Nota: el formato de salida debe ser:
                m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
                m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
                y así sucesivamente.*/
                int n1=0;
                int n2=1;
                int n3=1;
                while (n1<n2 && n1<n3) {
                    cout <<"Ingrese el numero mas grande n1: ";
                    cin >>n1;
                    cout <<"Ingrese n2 (entero): ";
                    cin >>n2;
                    cout <<"Ingrese n3 (entero): ";
                    cin >>n3;
                }
                int i=1;
                int mult=0;
                int sum=0;
                while(true) {
                     mult=n2*i;
                     cout <<mult<<"+";
                     i++;
                     sum=sum+mult;
                     if(n2*i>=n1){
                         break;
                     }

                }
                int j=1;
                int mult2=0;
                while(true) {
                    bool band=true;
                     mult=n3*j;
                     for (int h=0;h<i ;h++) {
                         if (mult==n2*h) {
                            band=false;
                            break;
                         }
                     }
                     if (band==true) {
                         sum=sum+mult;
                         cout <<mult;
                     }
                     j++;
                     if(n3*j>=n1){
                         break;
                     }
                     else{
                         if(n3*(j+1)>=n1){
                            cout <<"";
                         }
                         else if (band==true) {
                             cout <<"+";
                         }
                     }
                }
                cout <<"="<<sum<<endl;


            break;
            }
            case 6:{
                /*Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
                todos los números enteros entre 1 y el número ingresado.
                Ej: Si se recibe 4 el programa debe imprimir 12.
                Nota: la salida del programa debe ser: El minimo comun multiplo es: 12.*/
                int n=0;
                cout <<"Ingrese un numero entero: ";
                cin >>n;
                for (int i=n;i>1 ;i-- ) {
                     cout <<i<<endl;
                }

            break;
            }
            case 7:{
                /*Escriba un programa que calcula el máximo factor primo de un número.
                Ej: Si se recibe 33 el programa debe imprimir 11.
                Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11..*/
                int n=0;
                cout <<"Ingrese un numero entero: ";
                cin >>n;
                int max=0;
                for (int i=1;i<=n;i++) {
                    if (n%i==0) {
                        int comp=divisores(i);
                        if (comp==2){
                            if(i>max){
                                max=i;
                            }
                        }
                    }
                }
                cout <<"El mayor factor primo de: "<<n<<" es: "<<max<<endl;


            break;
            }
            case 8:{
                /*Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha,
                Ej: 969. escriba un programa que calcule el número palíndromo más grande que se puede obtener
                como una multiplicación de números de 3 dígitos.
                Ej: una de las posibles respuestas es: 143*777=111111.
                Nota: la salida del programa debe ser: 143*777=111111*/

            break;
            }
            case 9:{
                /*Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
                se genera una espiral de números como la siguiente:
                    21 22 23 24 25
                    20  7  8  9 10
                    19  6  1  2 11
                    18  5  4  3 12
                    17 16 15 14 13
                En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
                Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal
                de una espiral de nxn.
                Nota: la salida del programa debe ser:
                En una espiral de 5x5, la suma es: 101.
                Otra nota: se le dará una bonicación si imprime la espiral.*/
                int n=0;
                while (n%2==0) {
                    cout <<"Ingrese el tamano total de la figura(numero impar): ";
                    cin >>n;
                }
                int comp=0;
                for (int i=1;i<=25;i++) {
                    for (int j=1;j<=5-comp;j++) {
                        cout <<j<<endl;
                        }
                    comp++;
                    }

            break;
            }

            case 10:{
                /*La secuencia de números triangulares se forma al sumar su posición en el arreglo
                con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
                Si listamos los números triangulares y sus divisores tenemos:
                1: 1
                3: 1,3
                6: 1,2,3,6
                10: 1,2,5,10
                15: 1,3,5,15
                21: 1,3,7,21
                28: 1,2,4,7,14,28
                Se observa que 28 es el primer número triangular que tiene más de 5 divisores. Escriba un programa
                que reciba un número k y calcule cual es el primer número triangular que tiene más de k divisores.
                Tip: el enésimo número triangular se puede representar como n*(n+1)/2.

                8

                Nota: la salida del programa debe ser:
                El numero es: 28 que tiene 6 divisores.*/
            int k;
            cout <<"Ingrese un numero: ";
            cin >>k;
            int divi=0;
            int num=0;
            for (int i=1;true;i++) {
                num=i*(i+1)/2;
                divi=divisores(num);
                if(divi>k){
                    break;
                }
            }
            cout <<"El numero es: "<<num<< " que tiene "<<divi<<" divisores."<<endl;
            break;
            }

            case 0:{
            cierre=true;
            break;
            }

            default:{
                cout <<"Opcion incorrecta...";
            break;
            }
        }
    }
}
/*
Esta funcion recibe un numero entero y retorna sus divisores
*/
int divisores(int a){
    int cant=0;
    for (int i=1;i<=a;i++) {
        if (a%i==0) {
            cant++;
        }
    }
    return cant;
}

