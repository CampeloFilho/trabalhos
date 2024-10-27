#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm * timeinfo;

    // Captura o tempo atual
    time(&rawtime);
    // Converte o tempo para a estrutura tm
    timeinfo = localtime(&rawtime);

    // Obtém as horas e minutos atuais
    int hours = timeinfo->tm_hour;
    int minutes = timeinfo->tm_min;
    
    // Converte horas e minutos para segundos
    int total_seconds = (hours * 3600) + (minutes * 60);

    // Exibe o resultado
    printf("Horas: %d\n", hours);
    printf("Minutos: %d\n", minutes);
    printf("Tempo total em segundos: %d segundos\n", total_seconds);

    return 0;
}
