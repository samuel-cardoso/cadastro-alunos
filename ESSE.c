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

void listarAlunos()
{
    for (int posicao = 1; posicao <= 100; posicao++)
    {
        if (Alunos[posicao].matriculas > 0)
        {
            printf("\n   --- Aluno %d --- \n\n", posicao);
            printf(" Nome: %s\n Email: %s\n Matricula: %d\n A1: %.1f\n A2: %.1f\n A3: %.1f\n", Alunos[posicao].nomes, Alunos[posicao].emails, Alunos[posicao].matriculas, Alunos[posicao].A1, Alunos[posicao].A2, Alunos[posicao].A3);
            float finalA1 = Alunos[posicao].A1 * 0.20;
            float finalA2 = Alunos[posicao].A2 * 0.30;
            float finalA3 = Alunos[posicao].A3 * 0.50;

            float media = finalA1 + finalA2 + finalA3;
            float mediaFinal = media;
            printf("\n Nota Final = %.1f\n", mediaFinal);

            if (mediaFinal < 7)
            {
                printf(" REPROVAD0(A)\n");
            }
            else
            {
                printf(" APROVADO(A)\n");
            }
        }
    }
}

int main()
{

    for (int posicao = 1; posicao <= 5; posicao++)
    {
        int opcaoMenu = menuRetorno();

        switch (opcaoMenu)
        {
        case 0:
            printf("\n O PROGRAMA FOI ENCERRADO... \n");
            exit(0);
            break;

        case 1:
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
            printf("\n*** Seu cadastro foi feito com Sucesso! ***\n\n");
            system("\npause");
            limpaTela();
            break;

        case 2:
            listarAlunos();
            posicao--; // Correção de Posição
            break;

        case 3:
            printf("\n EXCLUINDO ALUNOS\n");
            posicao--; // Correção de Posição
            break;

        default:
            printf("\n DADO INVALIDO, por favor digite uma das opcoes presentes no menu.\n\n");
            system("pause");
            limpaTela();
            posicao--; // Correção de Posição
            break;
        }
    }

    return 0;
}