#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    char nm[50], em[50], cpf[11], rg[11], tl[11];
    int i, psa, psc, tmp, tpq, opc, opc2, res;
    printf("Seja Bem Vindo ao Allianz Hotel\n");
    printf("Informe seu nome e sobrenome\n");
    scanf(" %[^\n]", nm);
    
    do {
       printf("Informe sua idade\n");
       scanf("%d", &i);
   } while (i < 0);
    
    printf("Informe seu email\n");
    scanf("%s", em);
    printf("Informe seu cpf\n");
    scanf("%s", cpf);
    printf("Infomre seu rg\n");
    scanf("%s", rg);
    printf("Informe seu telefone\n");
    scanf("%s", tl);
    
    do {
       printf("informe quantos adultos vão se ospedar\n");
       scanf("%d", &psa); 
   } while (psa <= 0);
   
   do {
      printf("Informe quantas crianças vão se ospedar\n");
      scanf("%d", &psc);
   } while (psc < 0);
   
   do {
      printf("Informe quanto tempo\n");
      scanf("%d", &tmp);
   } while (tmp <= 0);
    
    // Escolha do tipo de quarto
    do {
       printf("Escolha o tipo de quarto:\n");
       printf("1 - Quarto SEP (1 cama de solteiro)\n");
       printf("2 - Quarto Alviverde (1 cama de casal)\n");
       printf("3 - Quarto Família Palestra (2 camas de casal)\n");
       printf("4 - Quarto Família Derbi (3 camas de casal)\n");
       printf("Digite o número da opção desejada: ");
       scanf("%d", &tpq);
   } while (tpq < 1 || tpq > 4 );
    
    // Exibir resumo da reserva
    printf("\nReserva confirmada!\n");
    printf("Adultos: %d | Crianças: %d\n", psa, psc);
    printf("Dias de hospedagem: %d\n", tmp);
    printf("Seu quarto sera o: %d\n", tpq);
    
    do{
    // Serviço de quarto
        printf("\nMENU DE SERVIÇO DE QUARTO\n");
        printf("1 - Café da Manhã\n");
        printf("2 - Almoço\n");
        printf("3 - Café da Tarde\n");
        printf("4 - Jantar️\n");
        printf("5 - Bebidas\n");
        printf("6 - Camareira\n");
        printf("7 - Sair\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opc);

        switch(tpq) 
        {
            case 1:
                printf("Você pediu Café da Manhã. Será entregue em breve!\n");
                break;
            case 2:
                printf("Você pediu Almoço. Será entregue em breve!\n");
                break;
            case 3:
                printf("Você pediu Café da tarde. Será entregue em breve!\n");
                break;
            case 4:
                printf("Você pediu Jantar. Será entregue em breve\n");
                break;
            case 5:
                printf("Você pediu uma bebida. Será entregue em breve\n");
                break;
            case 6:
                printf("A camareira chegara em breve\n");
                break;
            case 7:
                printf("Sair\n");
                break;
        } 
    } while (opc != 7);
    
    // Solicita o número de dias
    printf("\nInforme quantos dias você ficou: ");
    scanf("%d", &tmp);

    // Calcula o valor total da hospedagem
    res = tmp * 500;

    // Exibe o valor total
    printf("\nO total a pagar é: R$ %d,00\n", res);

    // Pergunta o método de pagamento
    do {
        printf("Informe de qual maneira você ir realizar o pagamento\n");
        printf("1 - Cartão\n");
        printf("2 - Pix\n");
        printf("3 - Dinheiro em nota\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opc);
    } while (opc < 1 || opc > 3);
    
        switch (opc)
        {
           case 1:
                printf("insira ou aproxime o Cartão!\n");
                break;
            case 2:
                printf("Leia o qr code do Pix!\n");
                break;
            case 3:
                printf("Dinheiro em nota!\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
        printf("Obrigado por se hospedar no Allianz Hotel!\n");
        return 0;
        
}   
