#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int aprobados = 0, reprobados = 0, total_estudiantes= 0, opcion ;
    float promedio = 0, promedio_tmp = 0, resultado_alumno;

    do {
        
        printf("\n\nTOTAL ESTUDIANTES: %d |
                    PROMEDIO SECCION: %.1f | 
                    APROBADOS: %d | 
                    REPROBADOS: %d\n\n",
                total_estudiantes, promedio, aprobados, reprobados);

        printf("Ingrese la Nota del Estudiante #%d: ", total_estudiantes + 1);
        scanf("%f", &resultado_alumno);

        if( resultado_alumno > 20 || resultado_alumno < 0 ) {
            printf("Nota invalida! Rango 0 - 20\n\n");
            
        } else {
            if( resultado_alumno >= 6 ){
                aprobados++;
                if( resultado_alumno >= 19 ) { printf("\nSobresaliente.\n"); } 
                else if( resultado_alumno >= 16 && resultado_alumno <= 18 ){ printf("\nMuy bueno.\n"); }
                else if( resultado_alumno >= 13 && resultado_alumno <= 15 ) { printf("\nBueno.\n");}
                else if( resultado_alumno >= 10 && resultado_alumno <= 12 ) { printf("\nRegular.\n"); }
                else { printf("\nMejorable.\n"); }
            }
            
            else {
                printf("\nDeficiente.\n");
                reprobados++;
            }

            promedio += resultado_alumno;
        }
        
        total_estudiantes = aprobados + reprobados;
        promedio_tmp = promedio / total_estudiantes; 

        printf("\n\nPresione '1' para continuar y '0' para terminar.");
        scanf("%d",&opcion);
        
    } while (opcion != 0);

    promedio = promedio / total_estudiantes;

    printf("ESTADO FINAL =\n\tTOTAL ESTUDIANTES: %d\n
                \tPROMEDIO SECCION: %.1f\n
                \tAPROBADOS: %d\n
                \tREPROBADOS: %d\n\n",
                total_estudiantes, promedio, aprobados, reprobados);

    return 0;
}