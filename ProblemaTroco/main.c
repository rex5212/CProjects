#include <stdlib.h>
#include <stdio.h>

// Salve 1.0 do problema troco (incompleto ainda)

void clearInput() {
     char c;
     while ((c = getchar()) != '\n' && c != EOF) {}
}

void readText(char *buffer, int length) {
     fgets(buffer, length, stdin);
     strtok(buffer, "\n");
}

int main()
{
    // Problema Troco
    
    double troco, precoU, dinheiro, pagamento, precoT, precoC;
    int quantidade, produto, caixa, nota200, nota100, nota50, nota20, nota10, nota5, nota2, moeda1, moeda50, moeda25, moeda10, moeda5;
    char opcao;
    char produtoNome[50];
    
    precoC = 0.0;
    precoT = 0.0;
    dinheiro = 0.0;
    nota200 = 0;
    nota100 = 0;
    nota50 = 0;
    nota20 = 0;
    nota10 = 0;
    nota5 = 0;
    nota2 = 0;
    quantidade = 0;
    moeda1 = 0;
    moeda50 = 0; 
    moeda25 = 0;
    moeda10 = 0;
    moeda5 = 0;
    
    
    // arrumar para permiti tanto mausculo quanto minusculo
    printf("Quais Notas e Moedas tem no caixa,\nDigite n para Notas e m para Moedas\n");
    scanf("%c", &opcao);
    
    if (opcao == 'n'){
        do {
            printf("Escolha a opção desejada de notas, sendo,\n1 = 200.00, 2 = 100.00, 3 = 50.00, 4 = 20.00, 5 = 10.00, 6 = 5.00 e 7 = 2.00.\nCaso ja tenha adicionado os valores que quer, digite 0\n");
            scanf("%i", &caixa);
            if (caixa == 1){
                printf("Quantas cedulas tem (quantidade)\n");
                scanf("%i", &quantidade);
                dinheiro = dinheiro + 200.00 * quantidade;
                nota200 += 1;
            } else if (caixa == 2){
                printf("Quantas cedulas tem (quantidade)\n");
                scanf("%i", &quantidade);                
                dinheiro = dinheiro + 100.00 * quantidade;
                nota100++;
            } else if (caixa == 3){
                printf("Quantas cedulas tem (quantidade)\n");
                scanf("%i", &quantidade);                
                dinheiro = dinheiro + 50.00 * quantidade;
                nota50++;
            } else if (caixa == 4){
                printf("Quantas cedulas tem (quantidade)\n");
                scanf("%i", &quantidade);                
                dinheiro = dinheiro + 20.00 * quantidade;
                nota20++;
            } else if (caixa == 5){
                printf("Quantas cedulas tem (quantidade)\n");
                scanf("%i", &quantidade);                
                dinheiro = dinheiro + 10.00 * quantidade;
                nota10++;
            } else if (caixa == 6){
                printf("Quantas cedulas tem (quantidade)\n");
                scanf("%i", &quantidade);                
                dinheiro = dinheiro + 5.00 * quantidade;
                nota5++;
            } else if (caixa == 7){
                printf("Quantas cedulas tem (quantidade)\n");
                scanf("%i", &quantidade);                
                dinheiro = dinheiro + 2.00 * quantidade;
                nota2++;
            }
            
            printf("Deseja Continua com o armazenamento de cadulas(s/n): ");
            clearInput();
            scanf("%c", &opcao);
            if (opcao == "s"){
                opcao = 'n';
                printf("\n");
            } else if (opcao == 'n'){
                opcao = 'm';
                caixa = 0;
                printf("\n");
            }
        } while (caixa != 0);
    } if (opcao == 'm'){
        do {
            printf("Escolha a opção desejada de moeda, sendo,\n1 = 1.00, 2 = 0.50, 3 = 0.25, 4 = 0.10, 5 = 0.05.\nCaso ja tenha adicionado os valores que quer, digite 0\n");
            scanf("%i", &caixa);
            if (caixa == 1){
                printf("Quantas moedas tem (quantidade)\n");
                scanf("%i", &quantidade);
                dinheiro = dinheiro + 1.00 * quantidade;
                moeda1 += 1;
            } else if (caixa == 2){
                printf("Quantas moedas tem (quantidade)\n");
                scanf("%i", &quantidade);                
                dinheiro = dinheiro + 0.50 * quantidade;
                moeda50++;
            } else if (caixa == 3){
                printf("Quantas moedas tem (quantidade)\n");
                scanf("%i", &quantidade);                
                dinheiro = dinheiro + 0.25 * quantidade;
                moeda25++;
            } else if (caixa == 4){
                printf("Quantas moedas tem (quantidade)\n");
                scanf("%i", &quantidade);                
                dinheiro = dinheiro + 0.10 * quantidade;
                moeda10++;
            } else if (caixa == 5){
                printf("Quantas moedas tem (quantidade)\n");
                scanf("%i", &quantidade);                
                dinheiro = dinheiro + 0.05 * quantidade;
                moeda5++;
            }
            
            printf("Deseja Continua com o armazenamento de moedas(s/n): \n");
            clearInput();
            scanf("%c", &opcao);
            if (opcao == 's'){
                opcao = 'm';
                printf("\n");
            } else if (opcao == 'n'){
                opcao = fclose;
                caixa = 0;
                printf("\n");
            }
        } while (caixa != 0);
    }
    
    
    do {
        printf("Escolha a opção desejada do produto, sendo,\n1 = Esponja custando R$2.80,\n2 = Iorgut custando R$8.50,\n3 = Doritos custando R$10.00,\n4 = Shampoo custando R$18.50,\n5 = para adiciona um produto\nCaso ja tenha finalizado sua seleção, digite 0\n");
        scanf("%i", &produto);
        
        if(produto == 1){
            printf("Quantidade de Esponja a comprar: ");
            scanf("%i", &quantidade);
            precoC = 2.80 * quantidade;
            precoT = precoT + precoC;
            printf("Foi adicionado no carrinho o produto Esponja x%i, custando %.2lf\n", quantidade, precoC);
            printf("\n");
        } else if(produto == 2){
            printf("Quantidade de Iorgut a comprar: ");
            scanf("%i", &quantidade);
            precoC = 8.50 * quantidade;
            precoT = precoT + precoC;
            printf("Foi adicionado no carrinho o produto Iorgut x%i, custando %.2lf\n", quantidade, precoC);
            printf("\n");
        } else if(produto == 3){
            printf("Quantidade de Doritos a comprar: ");
            scanf("%i", &quantidade);
            precoC = 10.00 * quantidade;
            precoT = precoT + precoC;
            printf("Foi adicionado no carrinho o produto Doritos x%i, custando %.2lf\n", quantidade, precoC);
            printf("\n");
        } else if(produto == 4){
            printf("Quantidade de Shampoo a comprar: ");
            scanf("%i", &quantidade);
            precoC = 18.50 * quantidade;
            precoT = precoT + precoC;
            printf("Foi adicionado no carrinho o produto Shampoo x%i, custando %.2lf\n", quantidade, precoC);
            printf("\n");
        } else if(produto == 5){
            // 5 do cliente
            printf("Digite o nome do produto: ");
            clearInput();
            readText(produtoNome, 50);
            printf("Preco Unitario do produto: ");
            scanf("%lf", &precoU);
            printf("Quantidade de %s a comprar: ", produtoNome);
            scanf("%i", &quantidade);
            precoC = precoU * quantidade;
            precoT = precoT + precoC;
            printf("Foi adicionado no carrinho o produto %s x%i, custando %.2lf\n",produtoNome, quantidade, precoC);
            printf("\n");
        } else if (produto == 5){
            caixa = 0;
            printf("\n");
        }
    } while (produto != 0);
    
    printf("O seu Carrinho deu no total %.2lf", precoT);
    
    return 0;
}
