#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void mcd(){
    //TODO leer datos de entrada y visualizar resultados llamando funciones
}

void factorial(){
    //TODO leer datos de entrada y visualizar resultados llamando funciones
    printf("Funcion que calcula el Factorial del un Numero");
    getchar();
}

void mainMenu(){

    char *menu = ">>>MENU PRINCIPAL<<<\n\n1. Option1\n2. Option2\n3. Option3\n\n4. Salir\n\nDigite Opcion... ";
    char option;
    do{
        system("clear");
        printf("%s",menu);
        scanf( "%c",&option );
        fflush(stdin);
        switch( option ){
            case '1' : factorial();
            break;

            case '2' : mcd();
            break;
        } 
    }while(option != '4');

}

int main(){
    mainMenu();

    return 0;
}


