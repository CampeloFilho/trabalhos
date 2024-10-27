#include <stdio.h>
#include <time.h>

int main() {
    time_t captura_tempo;
    struct tm * informacao_tempo;
    char tempo_formatado[10];

    // Captura o tempo atual
    time(&captura_tempo);
    // Converte o tempo para a estrutura tm
    informacao_tempo = localtime(&captura_tempo);

    // Formata o tempo no formato hh:mm AM/PM
    strftime(tempo_formatado, sizeof(tempo_formatado), "%I:%M %p", informacao_tempo);

    // Imprime o tempo formatado
    printf("Hora atual: %s\n", tempo_formatado);

    return 0;
}
