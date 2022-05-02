#include <stdio.h>
#include <stdlib.h>

struct fichaAluno
{
    char nome[50], email[50];
    int matricula;
    float A1, A2, A3;
};

struct fichaAluno Alunos[100];

int posicao = 1;

limpaTela()
{
    system("cls");
}

int gerarMenu()

{
    printf("\n=========== MENU ==========\n");
    printf("\n 1. Cadastrar aluno");
    printf("\n 2. Listar todos os alunos");
    printf("\n 3. Excluir aluno");
    printf("\n 0. Sair\n\n");

    printf(" Qual opcao voce deseja acessar? ");
    int opcaoUsuario;
    scanf("%d", &opcaoUsuario);

    if (opcaoUsuario < 0 || opcaoUsuario > 3)
    {
        printf("\n DADO INVALIDO!\n");
        printf("\n por favor digite uma das opcoes presentes no menu\n\n");
        system("pause");
        limpaTela();
    }

    return opcaoUsuario;
}

void cadastroAluno()

{
    if (Alunos[posicao].matricula > 0)
    {
        posicao++;
    }

    printf("\n========== CADASTRO DE ALUNO %d ==========\n", posicao);
    printf("\n Informe seu nome: ");
    scanf("%s", Alunos[posicao].nome);
    printf(" Informe seu email: ");
    scanf("%s", Alunos[posicao].email);
    printf(" Informe o seu numero de matricula: ");
    scanf("%d", &Alunos[posicao].matricula);
    printf(" Informe sua nota A1: ");
    scanf("%f", &Alunos[posicao].A1);
    printf(" Informe sua nota A2: ");
    scanf("%f", &Alunos[posicao].A2);
    printf(" Informe sua nota A3: ");
    scanf("%f", &Alunos[posicao].A3);
    printf("\n*** Seu cadastro foi feito com Sucesso! ***\n\n");
    system("\npause");
}

void listagemAlunos()
{
    // Verificando se há o que buscar com if

    if (Alunos[posicao].matricula == 0)
    {
        printf("\n NENHUM aluno cadastrado ate o momento.\n\n");
    }

    // Buscando alunos com o for.

    for (int verAluno = 1 /*variável de controle*/; verAluno <= 100; verAluno++)
    {
        // Limitando a busca com if para imprimir na tela somente os alunos cadastrados.

        if (Alunos[verAluno].matricula > 0)
        {
            printf("\n --- Aluno %d --- \n", verAluno);
            printf("\n Nome: %s\n Email: %s\n Matricula: %d\n A1: %.1f\n A2: %.1f\n A3: %.1f\n\n", Alunos[verAluno].nome, Alunos[verAluno].email, Alunos[verAluno].matricula, Alunos[verAluno].A1, Alunos[verAluno].A2, Alunos[verAluno].A3);

            // Cálculo e resultado para média final

            float finalA1 = Alunos[verAluno].A1 * 0.20;
            float finalA2 = Alunos[verAluno].A2 * 0.30;
            float finalA3 = Alunos[verAluno].A3 * 0.50;

            float media = finalA1 + finalA2 + finalA3;
            float mediaFinal = media;
            printf(" Nota Final = %.1f\n", mediaFinal);

            if (mediaFinal < 7)
            {
                printf(" REPROVAD0(A)\n\n");
            }
            else
            {
                printf(" APROVADO(A)\n\n");
            }
        }
    }
}

void excluirAluno() // CONSERTAR ERROS
{
    int numMatricula;

    printf("\n Informe o numero de matricula do(a) aluno(a) que voce deseja excluir: ");
    scanf("%d", &numMatricula);

    // Verificando se existe o número de matrícula
    if (numMatricula != Alunos[posicao].matricula && numMatricula == Alunos[posicao].matricula )
    {   

        printf("OPA");
    }

    /* -- dando erro!
    for (int nExisteMat = 1; nExisteMat <=100; nExisteMat++)
    {
        if (numMatricula != Alunos[nExisteMat].matricula && numMatricula > 0 )
        {
            printf("\n\nMATRICULA NAO ENCONTRADA\n\n");
        }

    }
    */

    // Buscando o aluno referente a matrícula

    for (int buscaMat = 1/*variável de controle*/; buscaMat <= 100; buscaMat++)
    {
        if (numMatricula == Alunos[buscaMat].matricula)
        {   
            //printf("\n --- Aluno %d --- \n", posicao/*--> PROBLEMA*/);
            printf("\n --- Aluno --- \n");
            printf("\n Nome: %s\n Email: %s\n Matricula: %d\n A1: %.1f\n A2: %.1f\n A3: %.1f\n\n", Alunos[buscaMat].nome, Alunos[buscaMat].email, Alunos[buscaMat].matricula, Alunos[buscaMat].A1, Alunos[buscaMat].A2, Alunos[buscaMat].A3);

            int resposta;

            do
            {
                printf("\n Voce tem certeza que deseja excluir este aluno ?   1=SIM / 2=NAO   Resposta: ");
                scanf("%d", &resposta);

            } while (resposta < 1 || resposta > 2);

            if (resposta == 1)
            {

                // ALGORITMO DE EXCLUSÃO

                printf("\n\n ALUNO(A) EXCLUIDO(A) COM SUCESSO\n\n");
            }
            else if (resposta == 2) // usei else if porque se utilizasse somente o else ele ficaria direro no for, repetindo 100 vezes a mensagem.
            { 
                printf("\n\n ALUNO(A) NAO EXCLUIDO(A) \n\n");
            } 
        }
    }
}

int main()
{
    int opcao;

    do
    {
        opcao = gerarMenu();

        switch (opcao)
        {
        case 1:
            cadastroAluno();
            limpaTela();
            break;
        case 2:
            listagemAlunos();
            system("pause");
            limpaTela();
            break;
        case 3:
            excluirAluno();
            system("pause");
            limpaTela();
        default:
            break;
        }

    } while (opcao != 0);

    printf("\n PROGRAMA ENCERRADO!\n");

    return 0;
}
