/*

objetivo da Atividade:

Criar um programa para cadastrar até 100 alunos ;
Cada aluno deve ter as seguintes informações:
# nome
# email (OPCIONAL)
# matrícula
# notas A1, A2 e A3
Capacidade de excluir um aluno já cadastrado pela matrícula
Listar os alunos cadastrados com nome, email e matrícula
Listar os alunos cadastrados com matrícula, nome, notas A1, A2 e A3, além da média final
A média é composta de A1 valendo 20% da nota final, A2 30% da nota final e A3 valendo 50% da nota final;
Listar os alunos aprovados com matrícula, nome e média final. Aprovados tem média igual ou superior a 7;
Listar os alunos reprovados com matrícula, nome e média final. Aprovados tem média igual ou superior a 7;
Os percentuais de participação das notas podem sofrer mudanças futuramente, bem como a nota de aprovação;

*/

#include <stdio.h>
#include <stdlib.h>

void limpaTela() {
    system("cls");
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

void resgistroAlunos(char nome[], char email[], int matricula[], float A1[], float A2[], float A3[]) {

    for (int pos = 0; pos < 1; pos++) {

    topoCadastro(pos);         

    printf(" Informe seu nome: ");
    scanf("%s", &nome[pos]);

    printf(" Informe seu email: ");
    scanf("%s", &email[pos]);

    //Matrícula:
    printf(" Informe o numero da matricula: ");
    scanf("%d", &matricula[pos]);

    //Nota A1:
    printf(" Sua nota na avaliacao A1: ");
    scanf("%f", &A1[pos]);

    //Nota A2:
    printf(" Sua nota na avaliacao A2: ");
    scanf("%f", &A2[pos]);

    //Nota A3: 
    printf(" Sua nota na avaliacao A3: ");
    scanf("%f", &A3[pos]);

    linhaDeDivisao(pos);

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
        resgistroAlunos(nomes, emails, matriculas, A1, A2, A3);
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

    system("pause");

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