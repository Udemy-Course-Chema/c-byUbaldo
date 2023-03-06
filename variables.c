#include <stdio.h>
// VARIABLES
/**
TIPOS DE MEMORIAS: RAM y ROM
ambas memorias sirven para almacenar información. 

ROM = Read Only Memory.
El ROM es una memoria de sólo lectura. 
Se puede escribir información una vez cuando se crea esta memoria. 
Una vez guarden el dato, no se puede volver a escribir el info. 
==================================================================
RAM = Random Access Memory. 
Permite almacenar y alterar la información una vez guardada.
Es de tipo Lectura y Escritura .
==================================================================
TIPOS DE DATOS:
1.Int (4 bytes)
2. Char (1 byte)
3. double (8 bytes)
4. float (4 bytes)
5. boolean (1 byte)

==================================================================
SINTAXIS
[calificador] <type> <nombre de la variable> = <valor>;
*/
int main(){
	int miValor;
	printf("El valor es: %d", miValor );
	printf("\n");
	miValor = 10;
	
	int otroValor = 20;
	printf("Valor actual: %d, %d", miValor, otroValor );
	return 0;
}
