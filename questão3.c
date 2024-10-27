#include <stdio.h>
#include <time.h>

// Função 1: Recursiva com duplicação de chamadas
int func1(int n) {
    if (n == 0) return 1;
    return func1(n - 1) + func1(n - 1);
}

// Função 2: Recursiva multiplicando o valor de func1
int func2(int n) {
    if (n == 0) return 1;
    return 2 * func1(n - 1);
}

// Função 3: Recursiva dividindo n por 2 e multiplicando resultados
int func3(int n) {
    if (n == 0) return 1;
    int valor = func3(n / 2);
    if (n % 2 == 0) return valor * valor;
    else return 2 * valor * valor;
}

int main() {
    int n = 20;  // Testar para n <= 20

    // Medindo o tempo de execução de func1
    clock_t start = clock();
    int result1 = func1(n);
    clock_t end = clock();
    double time_taken1 = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Medindo o tempo de execução de func2
    start = clock();
    int result2 = func2(n);
    end = clock();
    double time_taken2 = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Medindo o tempo de execução de func3
    start = clock();
    int result3 = func3(n);
    end = clock();
    double time_taken3 = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Exibe os resultados e o tempo de execução
    printf("Resultado de func1(%d): %d\n", n, result1);
    printf("Tempo de execução de func1: %f segundos\n", time_taken1);

    printf("Resultado de func2(%d): %d\n", n, result2);
    printf("Tempo de execução de func2: %f segundos\n", time_taken2);

    printf("Resultado de func3(%d): %d\n", n, result3);
    printf("Tempo de execução de func3: %f segundos\n", time_taken3);

    return 0;
}
