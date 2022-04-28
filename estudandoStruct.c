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

    for (int posicao = 1; posicao <= 100; posicao++)
    {
        int opcaoMenu = menuRetorno();

        //int posicao;

        switch (opcaoMenu)
        {
        case 0:
            printf("\n O PROGRAMA FOI ENCERRADO... \n");
            exit(0);
            break;

        case 1:
            //printf(" Em qual local voce quer cadastrar (1 ate 100): ");
            //scanf("%d", &posicao);

            if (Alunos[posicao].matriculas > 0)
            {
                posicao++;
            }
            
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

            printf("\n*** Seu cadastro foi feito com Sucesso! ***\n");
            printf("\n   --- Aluno %d --- \n\n", posicao);
            printf(" Nome: %s\n Email: %s\n Matricula: %d\n A1: %.1f\n A2: %.1f\n A3: %.1f\n\n", Alunos[posicao].nomes, Alunos[posicao].emails, Alunos[posicao].matriculas, Alunos[posicao].A1, Alunos[posicao].A2, Alunos[posicao].A3);
            
            system ("\npause");
            limpaTela();

            break;

        case 2:
            limpaTela();

            for (int posicao = 1; posicao <= 100; posicao++)
            {
                if (Alunos[posicao].matriculas > 0)
                {
                    printf("\n   --- Aluno %d --- \n\n", posicao);
                    printf(" Nome: %s\n Email: %s\n Matricula: %d\n A1: %.1f\n A2: %.1f\n A3: %.1f\n", Alunos[posicao].nomes, Alunos[posicao].emails, Alunos[posicao].matriculas, Alunos[posicao].A1, Alunos[posicao].A2, Alunos[posicao].A3);
                }
           }
            break;

        case 3:
            printf("\n EXCLUINDO ALUNOS\n");
            break;

        default:
            printf("\n DADO INVALIDO, por favor digite uma das opcoes presentes no menu.\n\n");
            system("pause");
            limpaTela();
            break;
        }
    }

    return 0;
}