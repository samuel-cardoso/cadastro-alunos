#include <stdio.h>
#include <stdlib.h>

void limpaTela() {
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
}

int menuPrincipal() {
    printf("\n***************************************\n");
    printf("                MENU                       ");
    printf("\n***************************************\n");
    printf("\n 1. Cadastrar aluno");
    printf("\n 2. Listar alunos");
    printf("\n 3. Excluir aluno");
    printf("\n 0. Sair");

    int opt = 0;

    do {
        printf("\n\nInforme a opcao desejada: ");
        scanf("%d", &opt);
    } while (opt < 0 || opt > 3);

    return opt;

} 

void topoCadastro(int pos) {
    printf("\n=======================================\n");
    printf("        CADASTRO DE ALUNOS %d", pos+1);
    printf("\n=======================================\n\n");
}

int resgistroAlunos(char nomes[], char emails[], int matriculas[], float A1[], float A2[], float A3[]) {

    for (int pos = 0; pos < 1; pos++) {

    topoCadastro(pos);         

    printf(" Informe seu nome: ");
    scanf("%s", &nomes[pos]);

    printf(" Informe seu email: ");
    scanf("%s", &emails[pos]);

    //Matrícula:
    printf(" Informe o numero da matricula: ");
    scanf("%d", &matriculas[pos]);

    //Nota A1:
    printf(" Sua nota na avaliacao A1: ");
    scanf("%f", &A1[pos]);

    //Nota A2:
    printf(" Sua nota na avaliacao A2: ");
    scanf("%f", &A2[pos]);

    //Nota A3: 
    printf(" Sua nota na avaliacao A3: ");
    scanf("%f", &A3[pos]);


    //printf("Nome: %s\n Email: %s\n Matricula: %d\n A1: %.1f\n A2: %.1f\n A3: %.1f\n\n", nome[pos], email[pos],matricula[pos],A1[pos],A2[pos],A3[pos]);

    } // FIM DO FOR

}

void linhaDiv() {
    printf("\n---------------------------------------\n\n");
}

// -----> FIM DAS FUNÇÕES FORA DA FUNÇÃO PRINCIPAL

int main() {

    char nomes[50][100];   
    char emails[50][100];
    int matriculas[100];
    float A1[100], A2[100], A3[100];
    
    int optMain = 0;

    do {

    limpaTela();

    optMain = menuPrincipal();

    switch (optMain) {
    case 1:
        resgistroAlunos(char nomes[], char emails[], int matriculas[], float A1[], float A2[], float A3[]);
        break;
    case 2:
        printf("Listando alunos: ");
        break;
    case 3:
        printf("Excluir aluno: ");
        break;
    default:
        break;
    }

    

    }while (optMain != 0);

    





    //topoCadastro(pos);
    //resgistroAlunos(nomes, emails, matriculas, A1, A2, A3);
    linhaDiv();

    return 0;

} // FIM DA FUNÇÃO PRINCIPAL















/*

    for (int pos = 0; pos < 100; pos++) {

    limpaTela();
    menuPrincipal();
    topoCadastro(pos);

    //  Registrando as informações:

    //Nome:
    printf(" Informe seu nome: ");
    scanf("%s", nome[pos]);

    //Email:
    printf(" Informe seu email: ");
    scanf("%s", email[pos]);

    //Matrícula:
    printf(" Informe o numero da matricula: ");
    scanf("%d", &matricula[pos]);

    //Nota A1:
    printf(" Sua nota na avaliacao A1: ");
    scanf("%f", &A1[pos]);
    if (10 > A1) {
        printf("= DADO INVALIDO! =");
        printf(" Sua nota na avaliacao A1: ");
        scanf("%f", &A1[pos]);
    }

    //Nota A2:
    printf(" Sua nota na avaliacao A2: ");
    scanf("%f", &A2[pos]);
    if (10 > A2) {
        printf("= DADO INVALIDO! =");
        printf(" Sua nota na avaliacao A2: ");
        scanf("%f", &A2[pos]);
    }

    //Nota A3: 
    printf(" Sua nota na avaliacao A3: ");
    scanf("%f", &A3[pos]);
    if (10 > A3) {
        printf("= DADO INVALIDO! =");
        printf(" Sua nota na avaliacao A3: ");
        scanf("%f", &A3[pos]);
    }

    linhaDiv();

    printf(" Nome: %s\n Email: %s\n Matricula: %d\n A1: %.1f\n A2: %.1f\n A3: %.1f\n\n", nome[pos],email[pos],matricula[pos],A1[pos],A2[pos],A3[pos]);

    system("pause");

    }
*/