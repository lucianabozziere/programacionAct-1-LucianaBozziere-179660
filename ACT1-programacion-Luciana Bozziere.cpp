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
   printf("Primera generación-1940-1956\n");
   printf("Características: Utilización de válvulas de vacío para procesamiento y memoria, programación mediante cables y tableros, tamaño grande, alto consumo de energia, programación a bajo nivel.\n");
   printf("Ejemplos: ENIAC, UNIVAC I, EDSAC \n\n");
   
   printf("Segunda generación-1956-1963 \n");
   printf("Características: Uso de transistores en lugar de válvulas de vacío, menor tamaño, mayor velocidad y eficiencia, introducción de lenguajes de programación de alto nivel, almacenamiento en cintas magnéticas y discos.\n");
   printf("Ejemplos: IBM 7090, UNIVAC II, DEC PDP-1.\n\n");
   
   printf("Tercera generación-1964-1971\n");
   printf("Características: Introducción de circuitos integrados (chips), mayor capacidad y velocidad, sistemas multiprogramación y multitarea, sistemas operativos más avanzados, lenguajes de programación mas potentes\n");
   printf("Ejemplos: IBM System/360, DEC PDP-8, CDC 6600 \n\n");
   
   printf("Cuarta generación-1971-1980\n");
   printf("Características: Microprocesadores (chips con CPU en un solo componente), miniaturización, computadoras personales y estaciones de trabajo, interfaces gráficas de usuario, nacimiento de la industria de la computadora personal\n");
   printf("Ejemplos: Intel 4004, IBM System/370, Apple II, IBM PC \n\n");
   
   printf("Quinta generación-desde 1980 en adelante\n");
   printf("Avances en microprocesadores y chips, con mejoras continuas en velocidad y capacidad. Desarrollo de tecnologias de redes y comunicación. Auge de la computación personal y empresarial. Desarrollo de dispositivos móviles y la era de Internet\n");
   return 0;
}
