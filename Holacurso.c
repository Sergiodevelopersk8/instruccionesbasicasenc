#include <stdio.h> /*la h es basica*/
#include <string.h>
#include <math.h>
#include <stdlib.h>


//String variable ="hola perros";
int y=5;
int main()
{

/*el porcentaje i es para recibir un entero %i dice que es un prefijo aparte si se quita el %i 
no se muestra el resultado como en otros lenguajes*/
 /*el antidiagonal con n es para un salto de linea \n*/
 
 
/* 
tipos de datos
int
 char='letras'
 float
 double
 bool
 short= igual que un int pero almacena menos cantidad
 long=igual que un decimal 
 long double= igual que el decimal pero con mas valores
 
 unsigned int d=123; este es de un solo valor verdadero osea positivo no acepta negativos
 */
 
/*para las impreciones son 
int = %i

 char= %c
 float= %f
 double= %lf
 bool
 short= %i
  long= 
 long double= 


*/

int x=10;
int suma=0;
suma= x + y;
//printf("la suma es: %i\n",suma);

int a=12;
float b=13.232;
char c='s';

//printf("%i \n,%.3f \n,%c",a,b,c);

/*para delimitar en la imprecion sea un flotante o doble se pone . y despues el numero que quiere  ejemplo %.3f 
se muestra despues del punto solo 3 digitos se muestra*/

int d;
float e;
char f [40];/*al parecer para que sea string se tiene que hacer un arreglo y ese se imprime con %s*/

printf("digita tu nombre \n");

//scanf("%s",&f);/*aqui quiero decir que se va almacenar el valor que digite el usuario en la variable d siempre usar & y despues la variable &d*/

gets(f);//el gets que es obtener string sirve para que aunque haya espacios si lo muestre 

/*una opcion para los arreglos los imprima aunque haya espacios es con la funcion gets en lugar de usar scanf*/
printf("hola %s",f);



	return 0;
}
