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

int main()
{

    struct fichaAlunos
    {
        char nomes[50];
        char emails[50];
        int matriculas;
        float A1, A2, A3;
    };

    struct fichaAlunos Alunos[100];

    // -> Resgistro

    for (int posicao = 0; posicao < 0; posicao++)
    {
        printf("\n Informe seu nome: ");
        fgets(Alunos[posicao].nomes, 50, stdin);
        printf("\n Informe seu email: ");
    }

} // fim da main
