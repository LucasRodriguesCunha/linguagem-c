#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_CHANCES 5
#define MAX_PALAVRAS 20
#define MAX_DICAS 4
#define MAX_PALAVRA 20

char palavras[MAX_PALAVRAS][MAX_PALAVRA] = {
    "variavel", "funcao", "algoritmo", "ponteiro", "compilador",
    "depuracao", "recursao", "vetor", "estrutura", "biblioteca",
    "interface", "heranca", "polimorfismo", "abstracao", "programador",
    "loop", "condicional", "compilacao", "linguagem", "debug"
};

char dicas[MAX_PALAVRAS][MAX_DICAS][100] = {
    {"Armazena valores", "Pode ser int, float ou char", "E uma caixa de dados", "Come�a com 'v'"},
    {"Bloco de codigo", "Realiza uma tarefa especifica", "Pode ter parametros", "Pode retornar um valor"},
    {"Sequencia de passos", "Resolve um problema", "Pode ser representado por um fluxograma", "Comeca com 'a'"},
    {"Guarda o endere�o de memoria", "Utilizado para acessar e manipular dados", "Permite eficiencia no uso de memoria", "Comeca com 'p'"},
    {"Traduz codigo fonte para linguagem de maquina", "Verifica erros de sintaxe", "Gera o executavel", "Comeca com 'c'"},
    {"Identifica e corrige erros", "Passo a passo da execucao", "Utiliza breakpoints", "Comeca com 'd'"},
    {"Chama a si mesma", "Problemas subdivididos", "Tem caso base", "Comeca com 'r'"},
    {"Armazena multiplos valores", "Pode ser acessado por indices", "Comeca com 'v'", "Pode ter tamanho fixo"},
    {"Agrupa diferentes tipos de dados", "Pode conter v�rias vari�veis", "Permite criar tipos personalizados", "Comeca com 'e'"},
    {"Colecao de funcoes", "Fornece funcionalidades especificas", "Pode ser importada", "Comeca com 'b'"},
    {"Ponto de intera��o", "Permite intera��o entre usuario e programa", "Apresenta informacoes", "Comeca com 'i'"},
    {"Reuso de caracteristicas", "Classe base e classe derivada", "Passa caracteristicas para outras classes", "Comeca com 'h'"},
    {"V�rias formas de um objeto", "Metodos com mesmo nome", "Depende do tipo do objeto", "Comeca com 'p'"},
    {"Abstrai detalhes", "Representa uma entidade", "Esconde complexidade", "Comeca com 'a'"},
    {"Cria codigo", "Resolve problemas", "Apaixonado por logica", "Comeca com 'p'"},
    {"Repeticao", "Executa varias vezes", "Pode ser for, while ou do-while", "Comeca com 'l'"},
    {"Decide a��es", "Executa de acordo com uma condicao", "Pode ser if, switch ou operadores", "Come�a com 'c'"},
    {"Tradu��o do codigo", "Verifica erros semanticos", "Cria arquivo objeto", "Comeca com 'c'"},
    {"Forma de comunicacao", "Define regras e sintaxe", "C pode ser uma", "Comeca com 'l'"},
    {"Identifica e corrige erros", "Inspecao do codigo", "Encontra problemas", "Comeca com 'd'"}
};

void drawHangman(int chancesRestantes) {
    printf(" ___________   \n");
    printf("|           |  \n");

    if (chancesRestantes < MAX_CHANCES) {
        printf("|           O  \n");
    } else {
        printf("|               \n");
    }

    if (chancesRestantes <= MAX_CHANCES - 2) {
        if (chancesRestantes == 0) {
            printf("|          /|\\ \n");
        } else if (chancesRestantes == 1) {
            printf("|          /|  \n");
        } else {
            printf("|          /|\\ \n");
        }
    } else {
        printf("|               \n");
    }

    if (chancesRestantes <= MAX_CHANCES - 4) {
        printf("|           |  \n");
    } else {
        printf("|               \n");
    }

    if (chancesRestantes <= MAX_CHANCES - 3) {
        if (chancesRestantes == 3) {
            printf("|          /    \n");
        } else if (chancesRestantes == 2) {
            printf("|          / \\ \n");
        } else {
            printf("|          /    \n");
        }
    } else {
        printf("|               \n");
    }

    printf("|               \n");
    printf("|_______________\n");
    printf("\n");
}

int main() {
    srand(time(NULL));

    int palavraIndex = rand() % MAX_PALAVRAS;
    int dicaIndex = rand() % MAX_DICAS;
    int tamanhoPalavra = strlen(palavras[palavraIndex]);
    int chancesRestantes = MAX_CHANCES;
    int letrasCorretas = 0;

    int letrasUsadas[26] = {0};
    char letra;

    printf("Bem-vindo(a) ao Jogo da Forca da Programacao!\n");
    printf("A palavra selecionada possui %d letras.\n", tamanhoPalavra);

    char palavraEscondida[MAX_PALAVRA];
    memset(palavraEscondida, '_', sizeof(palavraEscondida));
    palavraEscondida[tamanhoPalavra] = '\0';

    while (chancesRestantes > 0 && letrasCorretas < tamanhoPalavra) {
        printf("\n");
        printf("Palavra: %s\n", palavraEscondida);
        printf("Chances restantes: %d\n", chancesRestantes);

        printf("Digite uma letra: ");
        scanf(" %c", &letra);
        letra = tolower(letra);

        if (letrasUsadas[letra - 'a'] == 1) {
            printf("Voce ja tentou essa letra antes. Tente outra.\n");
            continue;
        }

        letrasUsadas[letra - 'a'] = 1;

        int encontrou = 0;
        for (int i = 0; i < tamanhoPalavra; i++) {
            if (palavras[palavraIndex][i] == letra) {
                encontrou = 1;
                palavraEscondida[i] = letra;
                letrasCorretas++;
            }
        }

        if (encontrou) {
            printf("Parabens! A letra esta na palavra.\n");
        } else {
            printf("A letra nao esta na palavra. Dica: %s\n", dicas[palavraIndex][dicaIndex]);
            chancesRestantes--;
        }

        drawHangman(chancesRestantes);
    }

    printf("\n");

    if (letrasCorretas == tamanhoPalavra) {
        printf("Parabens, voce ganhou!\n");
    } else {
        printf("Suas chances acabaram. A palavra correta era: %s\n", palavras[palavraIndex]);
        printf("Voce perdeu!\n");
    }

    return 0;
}
