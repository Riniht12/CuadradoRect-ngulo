/*  Universidad AMERIKE
    Ingeniería en Ciberseguridad
    René Iván Huerta Tovar
    Matrícula: EDOMEX114
    1er semestre
    Materia: Programación I
    Docente: Dr. Alcides Arbona
    Tarea While & For App */

#include <stdio.h>
#include <stdlib.h>

void CuadradoPar() {
        int f = 0, c;
        while (f < 7) {
            c = 0;
            while (c < 7) {
                printf(" *");
                c++;
            }
            printf("\n");
            f++;
    }
}

void CuadradoImpar() {
        int f = 0, c;
        int size = 7;

        while (f < size) {
            c = 0;
            while (c < size) {
                if (f == 0 || f == size -1 || c == 0 || c == size -1) {
                    printf(" *");
                } else {
                    printf ("  ");
                }
                c++;
        }
        printf("\n");
        f++;
    }
}

void RectanguloImpar() {
        int f = 0, c;
        while (f < 7) {
            c = 0;
            while (c < 12) {
                if( f == 0 || f == 6 || c == 0 || c == 11) {
                    printf(" *");
                } else {
                    printf ("  ");
                }
                c++;
        }
        printf("\n");
        f++;
    }
}

void RectanguloPar() {
        int f = 0, c;
        while (f < 6) {
            c = 0;
            while (c < 15) {
                printf(" *");
                c++;
            }
            printf("\n");
            f++;
    }
}


int main() {
    int opcion;
    int cantPar = 0;
    int cantImpar = 0;
    int matricula;

    printf("Introduce el ultimo digito de tu matricula\n");
    scanf(" %d", &matricula);

    while (1) {

        printf("\nSeleccione cualquiera de las 3 opciones siguientes\n");
        printf("1.- Imprimir un cuadrado\n");
        printf("2.- Imprimir un rectangulo\n");
        printf("3.- Salir de la app\n");
        scanf(" %d", &opcion);

        if (opcion == 1) {

            if (matricula % 2 == 0) {
               cantPar++;
               CuadradoPar();

            } else {
                cantImpar++;
                CuadradoImpar();
            }
        } else if (opcion == 2) {

            if (matricula % 2 == 0) {
                cantPar++;
                RectanguloPar();
            } else {
                cantImpar++;
                RectanguloImpar();
            }

        } else if (opcion == 3) {
            printf("Gracias por utilizar la app\n");
            break;

        } else {
            printf("El numero que seleccionaste no es valido, por favor intenta de nuevo un numero entre 1 y 3\n");
        }

    }
    return 0;
}
