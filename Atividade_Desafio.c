#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Definição da struct
    struct fichaAlunos
    {
        char nomes[50][100];
        char emails[50][100];
        int matriculas[100];
        float A1[100], A2[100], A3[100];
    };

    struct fichaAlunos Alunos;

    // Menu Pricipal
    printf("\n ======= MENU =======\n\n");
    printf(" 1. Cadastrar Aluno\n");
    printf(" 2. Listar alunos\n");
    printf(" 3. Excluir aluno\n");
    printf(" 0. Sair");

    int opcao = 0;

    do
    {
        printf("\n\nInforme uma das opcoes: ");
        scanf("%d", &opcao);
    } while (opcao < 0 || opcao > 3);

    // Opção de acesso
    int opcaoAcesso = opcao;

    switch (opcaoAcesso)
    {
    case 1:
        // CADASTRO DE ALUNOS

        printf("\n ==================");
        printf("\n CADASTRO DE ALUNOS");
        printf("\n ==================");

        // Nome do aluno
        printf("\n\n Informe o seu nome: ");
        scanf("%s", Alunos.nomes);

        // Email do aluno
        printf(" Informe o seu email: ");
        scanf("%s", Alunos.emails);

        // Matrícula do aluno
        printf(" Informe o numero de matricula: ");
        scanf("%d", Alunos.matriculas);

        // Nota A1
        printf(" Informe sua nota na A1: ");
        scanf("%f", Alunos.A1);

        // Nota A2
        printf(" Informe sua nota na A2: ");
        scanf("%f", Alunos.A2);

        // Nota A3
        printf(" Informe sua nota na A3: ");
        scanf("%f", Alunos.A3);
        break;

    case 2:
        // Listar alunos cadastrados
        printf("\nLISTANDO ALUNOS \n");
        break;

    case 3:
        // Excluir alunos
        printf("\nEXCLUINDO ALUNOS \n");
        break;
    default:
        break;
    }
}