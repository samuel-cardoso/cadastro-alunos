#include <stdio.h>
#include <stdlib.h> 

typedef struct
{
    char nome[50], email[50];
    int matricula;
    float A1, A2, A3;
} fichaAluno;

fichaAluno Alunos[100];

int posicao = 1; //para fazer o controle da estrutura

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

    // fflush(stdin); -> faz uma limpeza no buffer do teclado.
    // gets(); -> trabalha com strings, permitindo os espaços serem lidos pelo programa.

    printf("\n========== CADASTRO DE ALUNO %d ==========\n", posicao);
    printf("\n Informe seu nome: ");
    fflush(stdin); 
    gets(Alunos[posicao].nome); 
    printf(" Informe seu email: ");
    fflush(stdin);
    gets(Alunos[posicao].email);
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
    // BUSCA GULOSA!!!
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

void excluirAluno() // FAZER ALGORITMO DE EXCLUSÃO
{



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
