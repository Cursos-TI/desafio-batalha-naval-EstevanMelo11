#include <stdio.h>

#define QUADRADOPERFEITO 10 //Número padrão para Linha e Coluna.
#define LINHA (QUADRADOPERFEITO + 1) //Definição de Linha.
#define COLUNA (QUADRADOPERFEITO) //Definição de Coluna.
/*
Nota: LINHA: A soma de 1 ao número do quadrado perfeito tem como função
             adicionar uma linha a mais, como "linha fantasma", para que
             seja possível o devido funcionamento da seleção de cordenadas
             das linhas.
             Isso foi efetuado para resolver um problema de falta de
             interação com a décima linha do gráfico do jogo.
*/

#define BARCO 3
#define CONE 5
#define CRUZ 1
#define OCTAEDRO 4

/*
Cancelado! 1. Opção Limpeza : fazer lógica;
Feito! 2. Adicionar tabela lateral e superior de localização; 
3. Adicionar comentário descentes ao código;
4. Otimizar código.
*/

int main(){

//Variáveis : -----------------------------------------------------------------------------------------------------------

    //Sistema : 
    int matriz[LINHA][COLUNA]; //Matriz Padrão; Mar = 0.
    int opcao, opcao_habilidade, opcao_barco, direcao; //Lógica de seleção de opções.
    int loop_matriz = 0; //Gerar loop de menu.
    int predefinido = 0;

    //Barcos : 
    /*
    Nota: Foi criado quatro opções de barcos, sendo eles: 
          Horizontal, Vertical, Diagonal em Barra, Diagona em Contra-Barra.
    */

        //Horizontal : 
        int matriz_barco_horizontal[LINHA][COLUNA];
        int linha_bh = 0;
        char coluna_bh;

        //Vertical : 
        int matriz_barco_vertical[LINHA][COLUNA];
        int linha_bv = 0; 
        char coluna_bv;

        //Diagonal : Barcos em Diagonal em Barra e Contra-Barra usam a mesma matriz.
        int matriz_barco_diagonal[LINHA][COLUNA];
        int linha_bd = 0;
        char coluna_bd;


    //Habilidades : 
    /*
    Nota: Foram adicionados as três habilidades exigidas pelo desafio Mestre.
    */

        //Cone
        int matriz_cone[LINHA][COLUNA];
        int linha_cone = 0;
        char coluna_cone;

        //Cruz
        int matriz_cruz[LINHA][COLUNA]; 
        int linha_cruz = 0;
        char coluna_cruz;

        //Octaedro
        int matriz_octaedro[LINHA][COLUNA]; 
        int linha_octaedro = 0;
        char coluna_octaedro;



//Matrizes : ------------------------------------------------------------------------------------------------------------

    

        //Barcos : 

            //Lógica do Barco Horizontal :
        for(int tratar_linhas = 0; tratar_linhas < LINHA; tratar_linhas++){
            for(int tratra_colunas = 0; tratra_colunas < COLUNA; tratra_colunas++){
                matriz_barco_horizontal[tratar_linhas][tratra_colunas] = 0;
            }
        }
            //Lógica do Barco Vertical :
        for(int tratar_linhas = 0; tratar_linhas < LINHA; tratar_linhas++){
            for(int tratra_colunas = 0; tratra_colunas < COLUNA; tratra_colunas++){
                matriz_barco_vertical[tratar_linhas][tratra_colunas] = 0;
            }
        }
            //Lógica do Barco Diagonal :
        for(int tratar_linhas = 0; tratar_linhas < LINHA; tratar_linhas++){
            for(int tratra_colunas = 0; tratra_colunas < COLUNA; tratra_colunas++){
                matriz_barco_diagonal[tratar_linhas][tratra_colunas] = 0;
            }
        }

        //Habilidades : 

            //Lógica da Matriz do Cone :
        for(int tratar_linhas = 0; tratar_linhas < LINHA; tratar_linhas++){
            for(int tratra_colunas = 0; tratra_colunas < COLUNA; tratra_colunas++){
                matriz_cone[tratar_linhas][tratra_colunas] = 0;
            }
        }
            //Lógica da Matriz do Cone :
        for(int tratar_linhas = 0; tratar_linhas < LINHA; tratar_linhas++){
            for(int tratra_colunas = 0; tratra_colunas < COLUNA; tratra_colunas++){
                matriz_cruz[tratar_linhas][tratra_colunas] = 0;
            }
        }
            //Lógica da Matriz do Cone :
        for(int tratar_linhas = 0; tratar_linhas < LINHA; tratar_linhas++){
            for(int tratra_colunas = 0; tratra_colunas < COLUNA; tratra_colunas++){
                matriz_octaedro[tratar_linhas][tratra_colunas] = 0;
            }
        }
 

 
//Inicialização de "Batalha Naval" : ------------------------------------------------------------------------------------


        
    //Arte : 
    printf("            #            \n");
    printf("            # # #        \n");
    printf("            #            \n");
    printf("          # # #          \n");
    printf("        # # # # #        \n");
    printf("      # # # # # # #      \n");
    printf("    # # # # # # # # #    \n");
    printf("  # # # # # # # # # # #  \n");
    printf("            #            \n");
    printf("            #            \n");
    printf("  # # # # # # # # # # #  \n");
    printf("   # # # # # # # # # #   \n");
    printf("      # # # # # # #      \n");
    printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
    printf("~ ~ [ BATALHA NAVAL ] ~ ~\n");

        //Espaçamento, Prefixo das letras.
        printf("\n");
        printf("   | ");



//Gerador de Tabelas (Alfabetica(Horizontal))----------------------------------------------------------------------------
    //Tabela Inicial (Uso Único).


    //Alfabeto :
        for(int tratar_linhas = 0; tratar_linhas < (LINHA - 1); tratar_linhas++){
            
            //Alfaberto : Soma e exibe letras a partir da letra 'A', criando assim uma sequencia alfabetica.
            char Alfabeto = 'A';
            printf("%c ", Alfabeto + tratar_linhas);
        }
        printf("\n");


    //Traços :
        printf("-----"); //Traços : Traços fixos iniciis.
            for(int tratar_linhas = 0; tratar_linhas < (LINHA - 1); tratar_linhas++){
            printf("--");
            }
        printf("\n");
            /*
            Nota: É adicionado dois traços ("--") para cada letra, assim mantendo uma forma
                que acompanha o tamanho do alfabeto.
            */



// Exibidor de Matriz : -------------------------------------------------------------------------------------------------



        /*
        Nota: Esse primeiro Exibidor serve para apresentar a tabela ao iniciar o jogo.
        */

        for(int tratar_linhas = 0; tratar_linhas < (LINHA - 1); tratar_linhas++){ //Área de tratamento de Linhas de Matrizes.

            //Tabela Numérica : 
                int numero = 1 + tratar_linhas;
                    /*
                    Nota: Soma a quantidade de linhas da matriz + 1,
                            assim gerando a tabela númerica vertical
                            com os números corretos. 
                    */ 

                    if(numero < 10){ //Caso o número seja uma unidade, ele adiciona um espaço a mais para enquadrar o tamanho.
                    printf(" %d | ", numero);

                    } else{ //Caso o número for um decimal, não será adicionado espaço algum.
                    printf("%d | ", numero);
                    }

            //Área de tratamento de Coluna de Matrizes.
            for(int tratra_colunas = 0; tratra_colunas < COLUNA; tratra_colunas++){ 

                //Matriz Padrão : Sintese de valor à Linha e Coluna : 
                matriz[tratar_linhas][tratra_colunas] = 0; //Matriz Padrão também funciona como Matriz Principal.

                //Exibidor de Matriz : 
                printf("%d ", matriz[tratar_linhas][tratra_colunas]);
            }
            printf("\n");
        }


    
//Inicio de 'loop_matriz' : ---------------------------------------------------------------------------------------------
        


    //Menu de Inicialização :
do{
    printf("\n");
    printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
    printf(" # # # Escolha uma ação : \n\n");
    printf("1. Barco.\n");
    printf("2. Habilidades.\n");
    printf("3. Limpar Mapa.\n");
    printf("4. Pré-Definido.\n");
    printf("5. Informações.\n");
    printf("0. Sair.\n");
    scanf("%d", &opcao);



    //Área de Opções de Menu Principal : - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    switch (opcao)
    {
    case 1:
        //Barcos : 
        printf("Posição do barco : (Ocupa 3 casas)\n\n");
        printf("1. Horizontal.\n");
        printf("2. Vertical.\n");
        printf("3. Diagonal\n");
        printf("4. Voltar.\n");
        scanf("%d", &opcao_barco);
        
            switch (opcao_barco)
            {
            case 1:
                //Horizontal :
                printf("Escolha a localização para soltar um Barco : \n");
                printf("Número : ");
                scanf("%d", &linha_bh);
                printf("Letra : ");
                scanf(" %c", &coluna_bh);   
                
                //Tradução de Tabela Alfabetica para Matriz : 
                (coluna_bh < 97) ? (coluna_bh -= 65) : (coluna_bh -= 97);
                    /*
                    Nota: O código de tradução acima retrata os calores de 'A'(65) e 'a'(97)
                          Para converte para a localização de matriz, basta fazer uma subtração
                          do valor da letra menos seu próprio valor, resultando em 0 para
                          'A' ou 'a', 1 para 'B' ou 'b', 2 para 'C' ou 'c', etc.
                    */

                //Barco Horizontal :
                    if((linha_bh >= 0 && linha_bh <= (LINHA - 1)) && (coluna_bh >= 1 && coluna_bh <= (COLUNA - 2))){

                        //Linha Superior : ...

                        //Linha Central :
                        matriz_barco_horizontal[linha_bh - 1][coluna_bh - 1] = BARCO; //Esquerda
                        matriz_barco_horizontal[linha_bh - 1][coluna_bh] = BARCO; //#Ponto Central 
                        matriz_barco_horizontal[linha_bh - 1][coluna_bh + 1] = BARCO; //Direita

                        //Linha Inferior : ...

                        /*
                        Nota: Essa área possui a função de somar o valor de "BARCO" ao ponto escolhido na tabela
                                
                                - O "#Ponto Central" é a região escolhida;

                                - A "Linha Superior" é a linha acima do ponto central;
                                - A "Linha Central" é a linha aonde se encontra o ponto central;
                                - A "Linha Inferior" é a linha abaixo do ponto central.


                              Para selecionar os pontos a se adicionar o valor do objeto desejado basta :

                                LINHA:
                                    - Adicionar + em linha para mover para a direita;
                                    - Adicionar - em linha para mover para a esquerda;
                                
                                COLUNA:
                                    - Adicionar + em coluna para mover para a direita;
                                    - Adicionar - em coluna para mover para a esquerda.
                        */

                    } else{
                        //Resposta para ocorrência de erro :
                        printf("#Error : Localização Inválida.\n");
                        printf("#Voltando para a tabela...\n");
                    }

                loop_matriz = 1; //Chamar Loop.

                break;

            case 2:
                //Vertical :
                printf("Escolha a localização para soltar um Barco : \n");
                printf("Linha : ");
                scanf("%d", &linha_bv);
                printf("Coluna : ");
                scanf(" %c", &coluna_bv);
                
                //Tradução de Tabela Alfabetica para Matriz : 
                (coluna_bv < 97) ? (coluna_bv -= 65) : (coluna_bv -= 97);
                /*
                Nota: O código de tradução acima retrata os calores de 'A'(65) e 'a'(97)
                        Para converte para a localização de matriz, basta fazer uma subtração
                        do valor da letra menos seu próprio valor, resultando em 0 para
                        'A' ou 'a', 1 para 'B' ou 'b', 2 para 'C' ou 'c', etc.
                */

                //Barco Vertical :
                    if((linha_bv >= 1 && linha_bv <= (LINHA - 2)) && (coluna_bv >= 0 && coluna_bv <= (COLUNA - 1))){

                        //Linha Superior : 
                        matriz_barco_vertical[linha_bv - 2][coluna_bv] = BARCO; //Central

                        //Linha Central :                        
                        matriz_barco_vertical[linha_bv - 1][coluna_bv] = BARCO; //#Ponto Central 
                        
                        //Linha Inferior : 
                        matriz_barco_vertical[linha_bv][coluna_bv] = BARCO; //Central

                        /*
                        Nota: Essa área possui a função de somar o valor de "BARCO" ao ponto escolhido na tabela
                                
                                - O "#Ponto Central" é a região escolhida;

                                - A "Linha Superior" é a linha acima do ponto central;
                                - A "Linha Central" é a linha aonde se encontra o ponto central;
                                - A "Linha Inferior" é a linha abaixo do ponto central.


                              Para selecionar os pontos a se adicionar o valor do objeto desejado basta :

                                LINHA:
                                    - Adicionar + em linha para mover para a direita;
                                    - Adicionar - em linha para mover para a esquerda;
                                
                                COLUNA:
                                    - Adicionar + em coluna para mover para a direita;
                                    - Adicionar - em coluna para mover para a esquerda.
                        */

                    } else{
                        //Resposta para ocorrência de erro :
                        printf("#Error : Localização Inválida.\n");
                        printf("#Voltando para a tabela...\n");
                    }

                loop_matriz = 1;

                break;

            case 3:
                //Diagonal :
                printf("Escolha a localização para soltar um Barco : \n");
                printf("Direção : \n");
                printf("1. Barra.\n");
                printf("2. Contra Barra.\n");
                printf("3. Voltar.\n");
                scanf("%d", &direcao);
                printf("Linha : ");
                scanf("%d", &linha_bd);
                printf("Coluna : ");
                scanf(" %c", &coluna_bd);
                
                //Tradução de Tabela Alfabetica para Matriz : 
                (coluna_bd < 97) ? (coluna_bd -= 65) : (coluna_bd -= 97);
                /*
                Nota: O código de tradução acima retrata os calores de 'A'(65) e 'a'(97)
                        Para converte para a localização de matriz, basta fazer uma subtração
                        do valor da letra menos seu próprio valor, resultando em 0 para
                        'A' ou 'a', 1 para 'B' ou 'b', 2 para 'C' ou 'c', etc.
                */

                //Barco Diagonal :

                    if(direcao == 1){ //Resposta caso o Barco Diagonal for em direção de "Barra" :
                        if((linha_bd >= 1 && linha_bd <= (LINHA - 2)) && (coluna_bd >= 1 && coluna_bd <= (COLUNA - 2))){

                            //Linha Superior : 
                            matriz_barco_diagonal[linha_bd - 2][coluna_bd + 1] = BARCO; //Central

                            //Linha Central :                        
                            matriz_barco_diagonal[linha_bd - 1][coluna_bd] = BARCO; //#Ponto Central 
                            
                            //Linha Inferior : 
                            matriz_barco_diagonal[linha_bd][coluna_bd - 1] = BARCO; //Central
                        }

                        /*
                        Nota: Essa área possui a função de somar o valor de "BARCO" ao ponto escolhido na tabela
                                
                                - O "#Ponto Central" é a região escolhida;

                                - A "Linha Superior" é a linha acima do ponto central;
                                - A "Linha Central" é a linha aonde se encontra o ponto central;
                                - A "Linha Inferior" é a linha abaixo do ponto central.


                              Para selecionar os pontos a se adicionar o valor do objeto desejado basta :

                                LINHA:
                                    - Adicionar + em linha para mover para a direita;
                                    - Adicionar - em linha para mover para a esquerda;
                                
                                COLUNA:
                                    - Adicionar + em coluna para mover para a direita;
                                    - Adicionar - em coluna para mover para a esquerda.
                        */
                    }
                    else if(direcao == 2){ //Resposta caso o Barco Diagonal for em direção de "Contra-Barra" :
                            if((linha_bd >= 1 && linha_bd <= (LINHA - 2)) && (coluna_bd >= 1 && coluna_bd <= (COLUNA - 2))){

                                //Linha Superior : 
                                matriz_barco_diagonal[linha_bd][coluna_bd + 1] = BARCO; //Central

                                //Linha Central :                        
                                matriz_barco_diagonal[linha_bd - 1][coluna_bd] = BARCO; //#Ponto Central 
                                
                                //Linha Inferior : 
                                matriz_barco_diagonal[linha_bd - 2][coluna_bd - 1] = BARCO; //Central
                            }

                            /*
                        Nota: Essa área possui a função de somar o valor de "BARCO" ao ponto escolhido na tabela
                                
                                - O "#Ponto Central" é a região escolhida;

                                - A "Linha Superior" é a linha acima do ponto central;
                                - A "Linha Central" é a linha aonde se encontra o ponto central;
                                - A "Linha Inferior" é a linha abaixo do ponto central.


                              Para selecionar os pontos a se adicionar o valor do objeto desejado basta :

                                LINHA:
                                    - Adicionar + em linha para mover para a direita;
                                    - Adicionar - em linha para mover para a esquerda;
                                
                                COLUNA:
                                    - Adicionar + em coluna para mover para a direita;
                                    - Adicionar - em coluna para mover para a esquerda.
                        */
                    }
                    else{
                        //Resposta para ocorrência de erro :
                        printf("#Error : Localização Inválida.\n");
                        printf("#Voltando para a tabela...\n");
                    }

                loop_matriz = 1;

                break;
                    
            case 4:
                //Voltar :

                loop_matriz = 1;

                break;
            
            default:
                //Resposta para ocorrência de erro :
                printf("#Error! Voltando para a tabela...\n");
                printf("#Voltando para a tabela...\n");

                loop_matriz = 1;

                break;
            }

        break;
        //  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -

    case 2:
        // Habilidades :
        printf("Escolha uma Habilidade : \n");
        printf("1. Cone.\n");
        printf("2. Cruz.\n");
        printf("3. Octaedro.\n");
        printf("4. Voltar.\n");
        scanf("%d", &opcao_habilidade);

            switch (opcao_habilidade)
            {
            case 1:
                // Cone :
                printf("Escolha a localização para soltar a Habilidade Cone : \n");
                printf("Linha : ");
                scanf("%d", &linha_cone);
                printf("Coluna : ");
                scanf(" %c", &coluna_cone);

                //Tradução de Tabela Alfabetica para Matriz : 
                (coluna_cone < 97) ? (coluna_cone -= 65) : (coluna_cone -= 97);
                /*
                Nota: O código de tradução acima retrata os calores de 'A'(65) e 'a'(97)
                        Para converte para a localização de matriz, basta fazer uma subtração
                        do valor da letra menos seu próprio valor, resultando em 0 para
                        'A' ou 'a', 1 para 'B' ou 'b', 2 para 'C' ou 'c', etc.
                */

                //Habilidade Cone :
                    if((linha_cone >= 1 && linha_cone <= (LINHA - 2)) && (coluna_cone >= 2 && coluna_cone <= (COLUNA - 3))){

                        //Linha Superior :
                        matriz_cone[linha_cone - 2][coluna_cone] = CONE; //Centro

                        //Linha Central :
                        matriz_cone[linha_cone - 1][coluna_cone - 1] = CONE; //Esquerda
                        matriz_cone[linha_cone - 1][coluna_cone] = CONE; //#Ponto Central 
                        matriz_cone[linha_cone - 1][coluna_cone + 1] = CONE; //Direita

                        //Linha Inferior :
                        matriz_cone[linha_cone][coluna_cone - 2] = CONE; //Esquerda, Esquerda
                        matriz_cone[linha_cone][coluna_cone - 1] = CONE; //Esquerda
                        matriz_cone[linha_cone][coluna_cone] = CONE; //Centro
                        matriz_cone[linha_cone][coluna_cone + 1] = CONE; //Direita
                        matriz_cone[linha_cone][coluna_cone + 2] = CONE; //Direita, Direita

                        /*
                        Nota: Essa área possui a função de somar o valor de "CONE" ao ponto escolhido na tabela
                                
                                - O "#Ponto Central" é a região escolhida;

                                - A "Linha Superior" é a linha acima do ponto central;
                                - A "Linha Central" é a linha aonde se encontra o ponto central;
                                - A "Linha Inferior" é a linha abaixo do ponto central.


                              Para selecionar os pontos a se adicionar o valor do objeto desejado basta :

                                LINHA:
                                    - Adicionar + em linha para mover para a direita;
                                    - Adicionar - em linha para mover para a esquerda;
                                
                                COLUNA:
                                    - Adicionar + em coluna para mover para a direita;
                                    - Adicionar - em coluna para mover para a esquerda.
                        */

                    } else{
                        //Resposta para ocorrência de erro :
                        printf("#Error : Localização Inválida.\n");
                        printf("#Voltando para a tabela...\n");
                    }

                loop_matriz = 1;

                break;

            case 2:
                //Cruz :
                printf("Escolha a localização para soltar a Habilidade Cruz : \n");
                printf("Linha : ");
                scanf("%d", &linha_cruz);
                printf("Coluna : ");
                scanf(" %c", &coluna_cruz);

                //Tradução de Tabela Alfabetica para Matriz : 
                (coluna_cruz < 97) ? (coluna_cruz -= 65) : (coluna_cruz -= 97);
                /*
                Nota: O código de tradução acima retrata os calores de 'A'(65) e 'a'(97)
                        Para converte para a localização de matriz, basta fazer uma subtração
                        do valor da letra menos seu próprio valor, resultando em 0 para
                        'A' ou 'a', 1 para 'B' ou 'b', 2 para 'C' ou 'c', etc.
                */
                    
                //Habilidade Cruz :
                    if((linha_cruz >= 1 && linha_cruz <= (LINHA - 2)) && (coluna_cruz >= 2 && coluna_cruz <= (COLUNA - 3))){

                        //Linha Superior :
                        matriz_cruz[linha_cruz - 2][coluna_cruz] = CRUZ; //Centro

                        //Linha Central :
                        matriz_cruz[linha_cruz - 1][coluna_cruz - 2] = CRUZ; //Esquerda, Esquerda
                        matriz_cruz[linha_cruz - 1][coluna_cruz - 1] = CRUZ; //Esquerda
                        matriz_cruz[linha_cruz - 1][coluna_cruz] = CRUZ; //#Ponto Central 
                        matriz_cruz[linha_cruz - 1][coluna_cruz + 1] = CRUZ; //Direita
                        matriz_cruz[linha_cruz - 1][coluna_cruz + 2] = CRUZ; //Direita, Direita

                        //Linha Inferior :
                        matriz_cruz[linha_cruz][coluna_cruz] = CRUZ; //Centro

                        /*
                        Nota: Essa área possui a função de somar o valor de "CRUZ" ao ponto escolhido na tabela
                                
                                - O "#Ponto Central" é a região escolhida;

                                - A "Linha Superior" é a linha acima do ponto central;
                                - A "Linha Central" é a linha aonde se encontra o ponto central;
                                - A "Linha Inferior" é a linha abaixo do ponto central.


                              Para selecionar os pontos a se adicionar o valor do objeto desejado basta :

                                LINHA:
                                    - Adicionar + em linha para mover para a direita;
                                    - Adicionar - em linha para mover para a esquerda;
                                
                                COLUNA:
                                    - Adicionar + em coluna para mover para a direita;
                                    - Adicionar - em coluna para mover para a esquerda.
                        */

                    } else{
                        //Resposta para ocorrência de erro :
                        printf("#Error : Localização Inválida.\n");
                        printf("#Voltando para a tabela...\n");
                    }

                loop_matriz = 1;

                break;

            case 3:
                //Octaeno :
                printf("Escolha a localização para soltar a Habilidade Octaedro : \n");
                printf("Linha : ");
                scanf("%d", &linha_octaedro);
                printf("Coluna : ");
                scanf(" %c", &coluna_octaedro);
                
                //Tradução de Tabela Alfabetica para Matriz : 
                (coluna_octaedro < 97) ? (coluna_octaedro -= 65) : (coluna_octaedro -= 97);
                /*
                Nota: O código de tradução acima retrata os calores de 'A'(65) e 'a'(97)
                        Para converte para a localização de matriz, basta fazer uma subtração
                        do valor da letra menos seu próprio valor, resultando em 0 para
                        'A' ou 'a', 1 para 'B' ou 'b', 2 para 'C' ou 'c', etc.
                */

                //Habilidade Octaedro :
                    if((linha_octaedro >= 1 && linha_octaedro <= (LINHA - 2)) && (coluna_octaedro >= 1 && coluna_octaedro <= (COLUNA - 2))){

                        //Linha Superior :
                        matriz_octaedro[linha_octaedro - 2][coluna_octaedro] = OCTAEDRO; //Centro

                        //Linha Central :
                        matriz_octaedro[linha_octaedro - 1][coluna_octaedro - 1] = OCTAEDRO; //Esquerda
                        matriz_octaedro[linha_octaedro - 1][coluna_octaedro] = OCTAEDRO; //#Ponto Central 
                        matriz_octaedro[linha_octaedro - 1][coluna_octaedro + 1] = OCTAEDRO; //Direita

                        //Linha Inferior :
                        matriz_octaedro[linha_octaedro][coluna_octaedro] = OCTAEDRO; //Centro

                        /*
                        Nota: Essa área possui a função de somar o valor de "OCTAEDRO" ao ponto escolhido na tabela
                                
                                - O "#Ponto Central" é a região escolhida;

                                - A "Linha Superior" é a linha acima do ponto central;
                                - A "Linha Central" é a linha aonde se encontra o ponto central;
                                - A "Linha Inferior" é a linha abaixo do ponto central.


                              Para selecionar os pontos a se adicionar o valor do objeto desejado basta :

                                LINHA:
                                    - Adicionar + em linha para mover para a direita;
                                    - Adicionar - em linha para mover para a esquerda;
                                
                                COLUNA:
                                    - Adicionar + em coluna para mover para a direita;
                                    - Adicionar - em coluna para mover para a esquerda.
                        */

                    } else{
                        //Resposta para ocorrência de erro :
                        printf("#Error : Localização Inválida.\n");
                        printf("#Voltando para a tabela...\n");
                    }

                loop_matriz = 1;

                break;

            case 4:
                //Voltar :

                loop_matriz = 1;

                break;
            
            default:
                //Resposta para ocorrência de erro :
                printf("#Error! Opção Inválida.\n");
                printf("#Voltando para a tabela...\n");

                loop_matriz = 1;

                break;
            }

        break;
        //  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -

    case 3:
        //Limpar Mapa :
        main();
        break;
        //  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -

    case 4: //Essa área é dedicada a uma pré-definição com todas as opções de barcos e habilidades : 
        //Pré-Definido :
            //Barco Horizontal :
                linha_bh = 2;
                coluna_bh = 'e';

                    //Tradução de Tabela Alfabetica para Matriz :
                    (coluna_bh < 97) ? (coluna_bh -= 65) : (coluna_bh -= 97);
                                            
                //Linha Superior : ...

                //Linha Central :
                matriz_barco_horizontal[linha_bh - 1][coluna_bh - 1] = BARCO; //Esquerda
                matriz_barco_horizontal[linha_bh - 1][coluna_bh] = BARCO; //#Ponto Central 
                matriz_barco_horizontal[linha_bh - 1][coluna_bh + 1] = BARCO; //Direita

                //Linha Inferior : ...
                

            
            //Barco Vertical :
                linha_bv = 8;
                coluna_bv = 'b';
                    //Tradução de Tabela Alfabetica para Matriz : 
                    (coluna_bv < 97) ? (coluna_bv -= 65) : (coluna_bv -= 97);
                    
                //Linha Superior : 
                matriz_barco_vertical[linha_bv - 2][coluna_bv] = BARCO; //Central

                //Linha Central :                        
                matriz_barco_vertical[linha_bv - 1][coluna_bv] = BARCO; //#Ponto Central 
                
                //Linha Inferior : 
                matriz_barco_vertical[linha_bv][coluna_bv] = BARCO; //Central

            

            
            //Barco Diagonal em Barra :
                linha_bd = 2;
                coluna_bd = 'i';
                    //Tradução de Tabela Alfabetica para Matriz : 
                    (coluna_bd < 97) ? (coluna_bd -= 65) : (coluna_bd -= 97);
                    
                //Linha Superior : 
                matriz_barco_diagonal[linha_bd - 2][coluna_bd + 1] = BARCO; //Central

                //Linha Central :                        
                matriz_barco_diagonal[linha_bd - 1][coluna_bd] = BARCO; //#Ponto Central 
                
                //Linha Inferior : 
                matriz_barco_diagonal[linha_bd][coluna_bd - 1] = BARCO; //Central
            


            //Barco Diagonal em Contra-Barra :
            int linha_bdc;
            char coluna_bdc;

                linha_bdc = 2;
                coluna_bdc = 'b';
                    //Tradução de Tabela Alfabetica para Matriz : 
                    (coluna_bdc < 97) ? (coluna_bdc -= 65) : (coluna_bdc -= 97);

                //Linha Superior : 
                matriz_barco_diagonal[linha_bdc][coluna_bdc + 1] = BARCO; //Central

                //Linha Central :                        
                matriz_barco_diagonal[linha_bdc - 1][coluna_bdc] = BARCO; //#Ponto Central 
                
                //Linha Inferior : 
                matriz_barco_diagonal[linha_bdc - 2][coluna_bdc - 1] = BARCO; //Central
                

            
            //Habilidade Cone :
                linha_cone = 9;
                coluna_cone = 'e';
                    //Tradução de Tabela Alfabetica para Matriz : 
                    (coluna_cone < 97) ? (coluna_cone -= 65) : (coluna_cone -= 97);

                //Linha Superior :
                matriz_cone[linha_cone - 2][coluna_cone] = CONE; //Centro

                //Linha Central :
                matriz_cone[linha_cone - 1][coluna_cone - 1] = CONE; //Esquerda
                matriz_cone[linha_cone - 1][coluna_cone] = CONE; //#Ponto Central 
                matriz_cone[linha_cone - 1][coluna_cone + 1] = CONE; //Direita

                //Linha Inferior :
                matriz_cone[linha_cone][coluna_cone - 2] = CONE; //Esquerda, Esquerda
                matriz_cone[linha_cone][coluna_cone - 1] = CONE; //Esquerda
                matriz_cone[linha_cone][coluna_cone] = CONE; //Centro
                matriz_cone[linha_cone][coluna_cone + 1] = CONE; //Direita
                matriz_cone[linha_cone][coluna_cone + 2] = CONE; //Direita, Direita
            


            //Habilidade Cruz :    
                linha_cruz = 5;
                coluna_cruz = 'e';
                    //Tradução de Tabela Alfabetica para Matriz : 
                    (coluna_cruz < 97) ? (coluna_cruz -= 65) : (coluna_cruz -= 97);

                //Linha Superior :
                matriz_cruz[linha_cruz - 2][coluna_cruz] = CRUZ; //Centro

                //Linha Central :
                matriz_cruz[linha_cruz - 1][coluna_cruz - 2] = CRUZ; //Esquerda, Esquerda
                matriz_cruz[linha_cruz - 1][coluna_cruz - 1] = CRUZ; //Esquerda
                matriz_cruz[linha_cruz - 1][coluna_cruz] = CRUZ; //#Ponto Central 
                matriz_cruz[linha_cruz - 1][coluna_cruz + 1] = CRUZ; //Direita
                matriz_cruz[linha_cruz - 1][coluna_cruz + 2] = CRUZ; //Direita, Direita

                //Linha Inferior :
                matriz_cruz[linha_cruz][coluna_cruz] = CRUZ; //Centro
                


            //Habilidade Octaedro :
                linha_octaedro = 8;
                coluna_octaedro = 'h';
                    //Tradução de Tabela Alfabetica para Matriz : 
                    (coluna_octaedro < 97) ? (coluna_octaedro -= 65) : (coluna_octaedro -= 97);

                //Linha Superior :
                matriz_octaedro[linha_octaedro - 2][coluna_octaedro] = OCTAEDRO; //Centro

                //Linha Central :
                matriz_octaedro[linha_octaedro - 1][coluna_octaedro - 1] = OCTAEDRO; //Esquerda
                matriz_octaedro[linha_octaedro - 1][coluna_octaedro] = OCTAEDRO; //#Ponto Central 
                matriz_octaedro[linha_octaedro - 1][coluna_octaedro + 1] = OCTAEDRO; //Direita

                //Linha Inferior :
                matriz_octaedro[linha_octaedro][coluna_octaedro] = OCTAEDRO; //Centro

        loop_matriz = 1;

        break;
        //  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
        
    case 5:
            //Informações : Essa área é responsável por apresentar os simbolos dos barcos e habilidades :
            printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n");
            printf("# # # # # # Informações :\n");
            printf("\n");
            printf("# Barcos = %d.\n", BARCO);
            printf("# Habilidades :\n");
            printf("~ ~ ~ 1. Cone = %d\n", CONE);
            printf("~ ~ ~ 2. Cruz = %d\n", CRUZ);
            printf("~ ~ ~ 3. Octaedro = %d\n", OCTAEDRO);
            printf("\n");
            
            loop_matriz = 1;

            break;
            //  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
        
    case 0:
        //Sair :
        printf("Saindo..\n");
        return 0;

        break;
        //  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
    
    default:
        //Resposta para ocorrência de erro :
        printf("#Error! Opção Inválida.\n");
        printf("#Voltando para a tabela...\n");

        loop_matriz = 1;
        
        break;
        }
    //Fim da Área de Opções de Menu Principal : - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    //Gerador de Tabelas (Alfabetica(Horizontal))----------------------------------------------------------------------------
        //Tabela Continua (Uso Multiplo).


        //Espaçamento, Prefixo das letras.
        printf("\n");
        printf("   | "); 
    

    //Alfabeto :
        for(int tratar_linhas = 0; tratar_linhas < (LINHA - 1); tratar_linhas++){
            
            //Alfaberto : Soma e exibe letras a partir da letra 'A', criando assim uma sequencia alfabetica.
            char Alfabeto = 'A';
            printf("%c ", Alfabeto + tratar_linhas);
        }
        printf("\n");


    //Traços :
        printf("-----"); //Traços : Traços fixos iniciis.
            for(int tratar_linhas = 0; tratar_linhas < (LINHA - 1); tratar_linhas++){
            printf("--");
            }
        printf("\n");
            /*
            Nota: É adicionado dois traços ("--") para cada letra, assim mantendo uma forma
                que acompanha o tamanho do alfabeto.
            */
    


    // Exibidor de Matriz : 
        for(int tratar_linhas = 0; tratar_linhas < (LINHA - 1); tratar_linhas++){

            //Tabela Numérica : 
                int numero = 1 + tratar_linhas;
                    /*
                    Nota: Soma a quantidade de linhas da matriz + 1,
                            assim gerando a tabela númerica vertical
                            com os números corretos. 
                    */ 

                    if(numero < 10){ //Caso o número seja uma unidade, ele adiciona um espaço a mais para enquadrar o tamanho.
                    printf(" %d | ", numero);

                    } else{ //Caso o número for um decimal, não será adicionado espaço algum.
                    printf("%d | ", numero);
                    }

            //Área de tratamento de Coluna de Matrizes.        
            for(int tratra_colunas = 0; tratra_colunas < COLUNA; tratra_colunas++){

                //Matriz Padrão : Sintese de valor à Linha e Coluna :

                    //Matriz Padrão também funciona como Matriz Principal.
                    matriz[tratar_linhas][tratra_colunas] = //Soma de Matrizes : Adesão de todas as Matrizes à principal.

                        // - Matrizes de Habilidades : 
                    (matriz_cone[tratar_linhas][tratra_colunas]) + 
                    (matriz_cruz[tratar_linhas][tratra_colunas]) +
                    (matriz_octaedro[tratar_linhas][tratra_colunas]) +

                        // - Matrizes de Barcos : 
                    (matriz_barco_horizontal[tratar_linhas][tratra_colunas]) +
                    (matriz_barco_vertical[tratar_linhas][tratra_colunas]) +
                    (matriz_barco_diagonal[tratar_linhas][tratra_colunas]);


                //Exibidor de Matriz Pradrão/Principal : 
                printf("%d ", matriz[tratar_linhas][tratra_colunas]);
            }
            printf("\n");
        }

        loop_matriz == 0; //Impedindo desastres de loops infinitos.

    }while(loop_matriz == 1); // Enquanto o loop_matriz for 1, haverá loops.
    

    return 0;
}