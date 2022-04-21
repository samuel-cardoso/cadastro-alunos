#include <stdio.h>
#include <stdlib.h>

struct ficha_Aluno
{
    char nomes[50], emails[50];
    int matriculas;
    float A1, A2, A3;
};

struct ficha_Aluno Alunos[100];

void limpaTela()
{
    system("cls");
}

int menuRetorno()
{
    printf("\n=========== MENU ==========\n");
    printf("\n 1. Cadastrar Aluno");
    printf("\n 2. Listar Alunos");
    printf("\n 3. Excluir Aluno");
    printf("\n 0. Sair\n\n");

    int opcaoUsuario;
    printf(" Qual opcao voce deseja efetuar? ");
    scanf("%d", &opcaoUsuario);
    return opcaoUsuario;
}

int main()
{

    for (int posicao = 0; posicao < 100; posicao++)
    {
        int opcaoMenu = menuRetorno();

        switch (opcaoMenu)
        {

        case 1:

            printf(" Em qual local voce quer cadastrar (0 ate 100): ");
            scanf("%d", &posicao);

            printf("\n========== CADASTRO DE ALUNO %d ==========\n", posicao);
            printf("\n Informe seu nome: ");
            scanf("%s", Alunos[posicao].nomes);
            printf(" Informe seu email: ");
            scanf("%s", Alunos[posicao].emails);
            printf(" Informe o seu numero de matricula: ");
            scanf("%d", &Alunos[posicao].matriculas);
            printf(" Informe sua nota A1: ");
            scanf("%f", &Alunos[posicao].A1);
            printf(" Informe sua nota A2: ");
            scanf("%f", &Alunos[posicao].A2);
            printf(" Informe sua nota A3: ");
            scanf("%f", &Alunos[posicao].A3);

            printf("\n    Seu cadastro foi feito com Sucesso!\n");
            break;

        case 2:
            printf("\n LISTANDO ALUNOS\n");
            break;

        case 3:
            printf("\n EXCLUINDO ALUNOS\n");
            break;

        default:
            printf("\n DADO INVALIDO \n");
            break;
        }
    }

    return 0;
}