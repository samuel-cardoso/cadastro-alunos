#include <stdio.h>
#include <stdlib.h>

struct fichaAlunos
{

    char nomes[50][100];
    char emails[50][100];
    int matriculas[100];
    float A1[100], A2[100], A3[100];
};

void limpaTela()
{
    system("cls");
}

int menuPrincipal()
{
    printf("\n***************************************\n");
    printf("                MENU                       ");
    printf("\n***************************************\n");
    printf("\n 1. Cadastrar aluno");
    printf("\n 2. Listar alunos");
    printf("\n 3. Excluir aluno");
    printf("\n 0. Sair");

    int opcao = 0;

    do
    {
        printf("\n\nInforme a opcao desejada: ");
        scanf("%d", &opcao);
    } while (opcao < 0 || opcao > 3);

    return opcao;
}

void resgistroAlunos(posicao)
{

    for (posicao = 0; posicao < 1; posicao++)
    {

        struct fichaAlunos Alunos;
        {

            printf("\n ==== Cadastro aluno %d ==== \n\n", posicao + 1);

            printf("Nome do aluno: \n");
            fgets(Alunos.nomes[posicao], 50, stdin);

            printf("Informe seu email: ");
            fgets(Alunos.emails[posicao], 50, stdin);

            printf("Digite a matricula do aluno: ");
            scanf("%d", &Alunos.matriculas[posicao]);

            printf("Informe a nota A1: ");
            scanf("%f", &Alunos.A1[posicao]);

            printf("Informe a nota A2: ");
            scanf("%f", &Alunos.A2[posicao]);

            printf("Informe a nota A3: ");
            scanf("%f", &Alunos.A3[posicao]);

            printf("=========================\n\n");
        }
    }
}

void listagemAlunos()
{
}

void excluirAluno()
{
}

int main()
{

    int posicao = 0;
    int opcaoMain = 0;

    do
    {

        limpaTela();

        opcaoMain = menuPrincipal();

        switch (opcaoMain)
        {
        case 1:
            resgistroAlunos(posicao);
            break;
        case 2:
            listagemAlunos();
            break;
        case 3:
            excluirAluno();
            break;
        default:
            break;
        }

        system("pause");

    } while (opcaoMain = !0);

    return 0;
}
