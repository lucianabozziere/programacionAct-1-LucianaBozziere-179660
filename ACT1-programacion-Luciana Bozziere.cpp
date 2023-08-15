#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>

int main (int argc,char **argv)
{
   system("color BD");
   setlocale(LC_ALL,"spanish");
   printf("Generaciones de computadoras \n\n");
   printf("Primera generaci�n-1940-1956\n");
   printf("Caracter�sticas: Utilizaci�n de v�lvulas de vac�o para procesamiento y memoria, programaci�n mediante cables y tableros, tama�o grande, alto consumo de energia, programaci�n a bajo nivel.\n");
   printf("Ejemplos: ENIAC, UNIVAC I, EDSAC \n\n");
   
   printf("Segunda generaci�n-1956-1963 \n");
   printf("Caracter�sticas: Uso de transistores en lugar de v�lvulas de vac�o, menor tama�o, mayor velocidad y eficiencia, introducci�n de lenguajes de programaci�n de alto nivel, almacenamiento en cintas magn�ticas y discos.\n");
   printf("Ejemplos: IBM 7090, UNIVAC II, DEC PDP-1.\n\n");
   
   printf("Tercera generaci�n-1964-1971\n");
   printf("Caracter�sticas: Introducci�n de circuitos integrados (chips), mayor capacidad y velocidad, sistemas multiprogramaci�n y multitarea, sistemas operativos m�s avanzados, lenguajes de programaci�n mas potentes\n");
   printf("Ejemplos: IBM System/360, DEC PDP-8, CDC 6600 \n\n");
   
   printf("Cuarta generaci�n-1971-1980\n");
   printf("Caracter�sticas: Microprocesadores (chips con CPU en un solo componente), miniaturizaci�n, computadoras personales y estaciones de trabajo, interfaces gr�ficas de usuario, nacimiento de la industria de la computadora personal\n");
   printf("Ejemplos: Intel 4004, IBM System/370, Apple II, IBM PC \n\n");
   
   printf("Quinta generaci�n-desde 1980 en adelante\n");
   printf("Avances en microprocesadores y chips, con mejoras continuas en velocidad y capacidad. Desarrollo de tecnologias de redes y comunicaci�n. Auge de la computaci�n personal y empresarial. Desarrollo de dispositivos m�viles y la era de Internet\n");
   return 0;
}
