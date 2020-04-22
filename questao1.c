#include <stdio.h>
#include <math.h>
void main()
{
    int op, i, menu = 1;
    double mediaArit = 0, mediaPond = 0, desvio = 0, variancia = 0, valorMa, valorMe;
    double numeros[5], pesos[5], sub[5]; 
    double somaNum = 0, somaPeso = 0;

    while (menu != 0)
    {
        printf("\n\t selecione uma opcao:\n");
        printf("\t 1. digitar numeros\n");
        printf("\t 2. media aritmetica simples\n");
        printf("\t 3. media ponderada\n");
        printf("\t 4. desvio padrao\n");
        printf("\t 5. maior numero\n");
        printf("\t 6. menor numero\n");
        printf("\t 7. sair do programa\n");
        printf("\t");
        scanf("%d", &op);

        switch (op)
        {
        case 1:

            printf("\n\tdigite 5 numeros a seguir:\n");

            for (i = 0; i < 5; i++)
            {
                printf("\t");
                scanf("%lf", &numeros[i]);
            }

            break;

        case 2:
            
            somaNum = 0;

            for(i = 0; i < 5; i++)
            {
                somaNum = somaNum + numeros[i]; //somando todos os números que foram inseridos
            }

            mediaArit = somaNum/5;

            printf("\n\tmedia aritmetica simples = %.2lf", mediaArit);
            printf("\n");
            break;
        
        case 3:

            printf("\n\tinsira o peso de cada numero:\n");

            for(i = 0; i < 5; i++)
            {
                printf("\tpeso de %.2lf:    ", numeros[i]);
                scanf("%lf", &pesos[i]);
            }

            somaNum = 0;

            for (i = 0; i < 5; i++)
            {
                    somaNum = somaNum + (numeros[i] * pesos[i]); // somatória da multiplicação de todos os números por seus pesos
            }
            
            somaPeso = 0;

            for (i = 0; i < 5; i++)
            {
                somaPeso = somaPeso + pesos[i]; // somatória de todos os pesos
            }

            mediaPond = (somaNum)/(somaPeso);

            printf("\n\tmedia ponderada = %.2lf", mediaPond);
            printf("\n");
            break;

        case 4:

            somaNum = 0;

            for (i = 0; i < 5; i++)
            {
                somaNum = somaNum + numeros[i]; //somando todos os números que foram inseridos
            }

            mediaArit = somaNum / 5;

            for(i = 0; i < 5; i++)
            {
                sub[i] = ((numeros[i] - mediaArit) * (numeros[i] - mediaArit)); /* calcula o quadrado da diferença entre o número
                                                                                    e a média aritmética */
            }

            variancia = (sub[0] + sub[1] + sub[2] + sub[3] + sub[4])/5;

            desvio = sqrt(variancia); // desvio padrão é definido como a raiz quadrada da variância

            printf("\n\tdesvio padrao = %.2lf", desvio);
            printf("\n");
            break;

        case 5:

        valorMa = numeros[0]; // guardando o primeiro valor do vetor como maior

        for(i = 1; i < 5; i++)
        {
            if(numeros[i] > valorMa) // comparando um por um os valores dos outros vetores e obtendo o maior de dois a dois
            {
                valorMa = numeros[i];
            }
        }

        printf("\n\tmaior valor = %.2lf", valorMa);
        printf("\n");
        break;

        case 6:

            valorMe = numeros[0]; // primeiro valor é armazenado como o menor

            for (i = 1; i < 5; i++)
            {
                if (numeros[i] < valorMe) // comparação entre todos os valores para descobrir qual o menor
                {
                    valorMe = numeros[i]; // o menor número é sempre armazenado como novo valor da variável
                }
            }

            printf("\n\tmenor valor = %.2lf", valorMe);
            printf("\n");
            break;

        case 7:
            menu = 0; // quebra da condição inicial do 'while'
                        // saída do programa
            break;
        
        default:
        break;
        }
    }
}
