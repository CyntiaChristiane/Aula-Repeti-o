#include <stdio.h>

int main(int argc, char const *argv[]) {
    int op;
    int matriz[2][2] = {{0, 0}, {0, 0}};
    do{
        printf("************************\n");
        printf("..::Selecione o Menu: ::..\n");
        printf("************************\n");
        printf("1 - Imprimir Matriz\n");
        printf("2 - Preencher Matriz\n");
        printf("3 - Imprimir Diagonal Principal\n");
        printf("0 - Sair\n\n");
        printf("Escolha: ");
        scanf("%d", &op);
        if (op==1){
           for (int i = 0; i < 2; i++)
           {
            for (int j = 0; j < 2; j++)
            {
                printf("[%d][%d]: %d\n", i, j, matriz[i][j]);
            }
           }          
        }
        else if (op==2){
           for (int i = 0; i < 2; i++)
           {
            for (int j = 0; j < 2; j++)
            {
                printf("[%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
           }          
        }


        

    }while(op != 0);    
    
    return 0;
}
