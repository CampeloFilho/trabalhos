#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para converter uma string para minúsculas
void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Função para contar quantas vezes a palavra aparece na frase
int contar_ocorrencias(char *frase, char *palavra) {
    int count = 0;
    char *pos = frase;
    int palavra_len = strlen(palavra);

    // Procura pela palavra na frase repetidamente
    while ((pos = strstr(pos, palavra)) != NULL) {
        count++;
        pos += palavra_len;  // Move o ponteiro para continuar a busca
    }

    return count;
}

int main() {
    char frase[256];
    char palavra[50];

    // Recebe a frase e a palavra
    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);
    printf("Digite a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    // Remove o newline '\n' no final da palavra
    palavra[strcspn(palavra, "\n")] = 0;

    // Converte tanto a frase quanto a palavra para minúsculas
    to_lowercase(frase);
    to_lowercase(palavra);

    // Conta as ocorrências da palavra
    int resultado = contar_ocorrencias(frase, palavra);

    printf("A palavra \"%s\" aparece %d vez(es) na frase.\n", palavra, resultado);

    return 0;
}
