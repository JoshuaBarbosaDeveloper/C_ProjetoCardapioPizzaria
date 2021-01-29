#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <windows.h>

int main () {int escolha1, escolha2, escolha3, quantidade, pagamento, tempo;
			 float preco;
			 
			preco = 0;

			while (escolha1 != 9){
			
			printf("\n -------------CARDAPIO DA PIZZARIA HITHOT-------------\n ");
			printf("\n        Pizzas Salgadas         \n");		
			printf("\n 1: Pizza de Calabresa - RS26,00");
			printf("\n 2: Pizza de Frango - RS22,50");
			printf("\n 3: Pizza de Escarola - RS23,00");
			printf("\n 4: Pizza de 4 Queijos - RS25,00");
			printf("\n 5: Pizza de Palmito - RS23,50");
			printf("\n 6: Pizza de Milho - RS21,00");
			printf("\n 7: Pizza de Strogonoff de Carne - RS27,00");
			printf("\n 8: Pizza de Strogonoff de Frango - RS26,30");
			printf("\n 9: Nenhuma Pizza e vai para a proxima pagina!");
			printf("\n");
			printf("\n        _              ");
			printf("\n       (_)             ");
			printf("\n  _ __  _ __________ _ ");
			printf("\n | '_ \| |_  /_  / _` |");
			printf("\n | |_) | |/ / / / (_| |");
			printf("\n | .__/|_/___/___\__,_|");
			printf("\n | |                   ");
			printf("\n |_|");
			printf("\n");
	
			
			printf ("\n Qual sabor voce deseja escolher? ");
			scanf ("%d", & escolha1);
					
			system("cls");
			
			switch (escolha1){case 1:
				              		printf("\n Adcionado uma Pizza de Calabresa ao seu pedido!\n ");
				             		preco = preco + 26;
				             		tempo = tempo+5;
				             	    break;
				              
				              case 2:
				              		printf("\n Adcionado uma Pizza de Frango ao seu pedido!\n ");
				              		preco = preco + 22,50;
				              		tempo = tempo+5;
				              		break;
				              
				              case 3:
				              		printf("\n Adcionado uma Pizza de Escarola ao seu pedido!\n ");
				              		preco = preco + 23,00;
				              		tempo = tempo+5;
				              		break;
				              
				              case 4:
				              		printf("\n Adcionado uma Pizza de 4 Queijos ao seu pedido!\n ");
				              		preco = preco + 25;
				              		tempo = tempo+5;
				              		break;
				              
				              case 5:
				              		printf("\n Adcionado uma Pizza de Palmito ao seu pedido!\n ");
				              		preco = preco + 23,50;
				              		tempo = tempo+5;
				              		break;
				              
				              case 6:
				              		printf("\n Adcionado uma Pizza de Milho ao seu pedido!\n ");
				              		preco = preco + 21;
				              		tempo = tempo+5;
				             		break;
				              
				              case 7:
				              		printf("\n Adcionado uma Pizza de Strogonoff de Carne ao seu pedido!\n ");
				              		preco = preco + 27;
				              		tempo = tempo+5;
				              		break;
				              
				              case 8:
				              		printf("\n Adcionado uma Pizza de Strogonoff de Frango seu pedido!\n ");
				              		preco = preco + 26,30;
				              		tempo = tempo+5;
				              		break;
				              					              
				              default:
				              printf("\n Proxima Pagina! \n");}}
				              
			while (escolha2 != 5){	              
				              		  
			printf("\n -------------CARDAPIO DA PIZZARIA HITHOT-------------\n ");
			printf("\n        Pizzas Doces         \n");		
			printf("\n 1: Pizza de Chocolate - RS20,00");
			printf("\n 2: Pizza de Chocolate Branco - RS20,50");
			printf("\n 3: Pizza de Confete - RS22,00");
			printf("\n 4: Pizza de Abacaxi - RS22,50");
			printf("\n 5: Nenhuma Pizza e vai para a proxima pagina!");
			printf("\n");
			
		    printf ("\n Voce deseja escolher pizza doce? ");
		    scanf ("%d", & escolha2);
		    
		 	system("cls");
			
			switch (escolha2){case 1:
				              		printf("\n Adcionado uma Pizza de Chocolate ao seu pedido!\n ");
				             		preco = preco + 20;
				             		tempo = tempo+5;
				             	    break;
				              
				              case 2:
				              		printf("\n Adcionado uma Pizza de Chocolate Branco ao seu pedido!\n ");
				              		preco = preco + 20,50;
				              		tempo = tempo+5;
				              		break;
				              
				              case 3:
				              		printf("\n Adcionado uma Pizza de Confete ao seu pedido!\n ");
				              		preco = preco + 22;
				              		tempo = tempo+5;
				              		break;
				              
				              case 4:
				              		printf("\n Adcionado uma Pizza de Abacaxi ao seu pedido!\n ");
				              		preco = preco + 22,50;
				              		tempo = tempo+5;
				              		break;
				              			              				              
				              default:
				              printf("Proxima Pagina! \n");}}
				              
			while (escolha3 != 6){				              
				              
			printf("\n -------------CARDAPIO DA PIZZARIA HITHOT-------------\n ");
			printf("\n        Bebidas         \n");		
			printf("\n 1: Agua - RS2,50");
			printf("\n 2: Coca Cola (Lata) - RS5,00");
			printf("\n 3: Guarana (Lata) - RS4,50");
			printf("\n 4: Suco de Laranja - RS6,00");
			printf("\n 5: Cerveja - RS5,00");
			printf("\n 6: Nenhuma Bebida e finaliza o pedido!");
			printf("\n");
			
		    printf ("\n Voce deseja escolher algo para beber? ");
		    scanf ("%d", & escolha3);
		       
		 	system("cls");
			
			switch (escolha3){case 1:
				              		printf("\n Adcionado uma Agua ao seu pedido!\n ");
								    printf("\n Qual a quantidade? ");
		    						scanf("%d", & quantidade);
				             		preco = preco + (2,50*quantidade);
				             		tempo = tempo+(5*quantidade);
				             	    break;
				              
				              case 2:
				              		printf("\n Adcionado uma Coca Cola ao seu pedido!\n ");
								    printf("\n Qual a quantidade? ");
		    						scanf("%d", & quantidade);				              		
				              		preco = preco + (5*quantidade);
				              		tempo = tempo+(5*quantidade);
				              		break;
				              
				              case 3:
				              		printf("\n Adcionado um Guarana ao seu pedido!\n ");
								    printf("\n Qual a quantidade? ");
		    						scanf("%d", & quantidade);
				              		preco = preco + (4,5*quantidade);
				              		tempo = tempo+(5*quantidade);
				              		break;
				              
				              case 4:
				              		printf("\n Adcionado um Suco de Laranja ao seu pedido!\n ");
								    printf("\n Qual a quantidade? ");
		    						scanf("%d", & quantidade);
				              		preco = preco + (6*quantidade);
				              		tempo = tempo+(5*quantidade);
				              		break;
				              		
				              case 5:
				              		printf("\n Adcionado uma Cerveja ao seu pedido!\n ");
								    printf("\n Qual a quantidade? ");
		    						scanf("%d", & quantidade);
				              		preco = preco + (5*quantidade);
				              		tempo = tempo+(5*quantidade);
				              		break;
     				              
				              default:
				              printf("Proxima Pagina! \n");}}
				              
			printf("\n O preco final do seu pedido foi de: %f", preco);
					
			printf("\n");
			printf("\n------------Formas de Pagamentos------------\n");
			printf("\n 1: Cartao de credito");
			printf("\n 2: Dinheiro");
			printf("\n");
			
			printf("\n Qual a forma de pagamento? ");
			scanf("%d", & pagamento);
			
			switch (pagamento){case 1:
				              		 while ((tempo-3)>=0){printf(" para acontecer a entrega do seu pedido! \n "); 
									                 Sleep(1000);
    		                         				 system("cls");
    		                                         printf("%d segundos", tempo);
    		                                         tempo--;} 	
    	                                             system("cls");
             									     printf("\n Pedido Entregue!! Obrigado por nos escolher para matarmos a sua fome!");
             									     printf("\n ____                   ");
printf("\n  ,--.     ,--.");
printf("\n (  O )   (  O )");
printf("\n  `--'  \  `--'");
printf("\n         \   _");
printf("\n   >-.   /   /| ");
printf("\n      `-.__.'");
													 break;
				             	    
				              
				              case 2:
				              		while ((tempo+2)>=0){printf(" para acontecer a entrega do seu pedido! "); 
									                 Sleep(1000);
    		                         				 system("cls");
    		                                         printf("%d segundos", tempo);
    		                                         tempo--;} 	
    	                                             system("cls");
             									     printf("\n Pedido Entregue!! Obrigado por nos escolher para matarmos a sua fome!");
             									     printf("\n ____                   ");
printf("\n  ,--.     ,--.");
printf("\n (  O )   (  O )");
printf("\n  `--'  \  `--'");
printf("\n         \   _");
printf("\n   >-.   /   /| ");
printf("\n      `-.__.'");

													 break;
				             	    
				             
							  default:
				              printf("\n Nao existe essa opcao!");}}
			
			
			
							  			              


				              
			
