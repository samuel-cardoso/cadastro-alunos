#include <stdio.h>
#include <stdlib.h>

int menu()
{

    // Menu Pricipal
    printf("\n ======= MENU =======\n\n");
    printf(" 1. Cadastrar aluno\n");
    printf(" 2. Listar alunos\n");
    printf(" 3. Excluir aluno\n");
    printf(" 0. Sair");

    int opcao = 0;

    do
    {
        printf("\n\nInforme uma das opcoes: ");
        scanf("%d", &opcao);
    } while (opcao < 0 || opcao > 3);

    return opcao;
}

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

    struct fichaAlunos Alunos[100];

    int posicao = 0;

    int opcaoMain = menu();

    int local = 0;


     
    switch (opcaoMain)
    {
    case 1:
        // CADASTRO DE ALUNOS

        //for (int posicao = 0; posicao < 100; posicao++)
        //{

            printf("\n\n em qual local voce quer cadastrar? 1 a 100: ");
            scanf("%d", &local);

            printf("\n =====================");
            printf("\n CADASTRO DE ALUNOS %d", local);
            printf("\n =====================");

            // Nome do aluno
            printf("\n\n Informe o seu nome: ");
            scanf("%s", Alunos[posicao].nomes);

            // Email do aluno
            printf(" Informe o seu email: ");
            scanf("%s", Alunos[posicao].emails);

            // Matrícula do aluno
            printf(" Informe o numero de matricula: ");
            scanf("%d", Alunos[posicao].matriculas);

            // Nota A1
            printf(" Informe sua nota na A1: ");
            scanf("%f", Alunos[posicao].A1);

            // Nota A2
            printf(" Informe sua nota na A2: ");
            scanf("%f", Alunos[posicao].A2);

            // Nota A3
            printf(" Informe sua nota na A3: ");
            scanf("%f", Alunos[posicao].A3);
        //}

        break;

    case 2:
        // Listar alunos média final
        printf("\n Nome: %s\n Email: %s\n Matricula: %d\n A1: %.1f\n A2: %.1f\n A3: %.1f\n", Alunos[100].nomes[posicao], Alunos[100].emails[posicao], Alunos[100].matriculas[posicao], Alunos[100].A1[posicao], Alunos[100].A2[posicao], Alunos[100].A3[posicao]);

        // Situação acadêmica
        float finalA1 = Alunos[100].A1[posicao] * 0.20;
        float finalA2 = Alunos[100].A2[posicao] * 0.30;
        float finalA3 = Alunos[100].A3[posicao] * 0.50;

        float media = finalA1 + finalA2 + finalA3;
        float mediaFinal = media;
        printf("\n\n Media Final = %.1f\n", mediaFinal);

        if (mediaFinal < 7)
        {
            printf("REPROVAD0(A)");
        }
        else
        {
            printf("APROVADO(A)");
        }
        break;

    case 3:
        // Excluir alunos
        printf("\n Nome: %s\n Email: %s\n Matricula: %d\n A1: %.1f\n A2: %.1f\n A3: %.1f\n", Alunos[100].nomes[posicao], Alunos[100].emails[posicao], Alunos[100].matriculas[posicao], Alunos[100].A1[posicao], Alunos[100].A2[posicao], Alunos[100].A3[posicao]);
        break;

    default:
        break;
    } // FIM DO SWITCH



    return 0;
}