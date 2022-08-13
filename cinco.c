/*
Instituição: Fatec Carapicuíba
Professor: Ciro Cirne Trindade
Disciplina: Linguagem de Programação
Curso: Análise e Desenvolvimento de Sistemas - Manhã
------------------------------------------------------------
1º Exercício para nota - Ponteiros
Grupo:


▄▄▄█████▓ ▄▄▄      ▓█████▄  ██▓ ███▄    █  ██░ ██  ▒█████    ██████ 
▓  ██▒ ▓▒▒████▄    ▒██▀ ██▌▓██▒ ██ ▀█   █ ▓██░ ██▒▒██▒  ██▒▒██    ▒ 
▒ ▓██░ ▒░▒██  ▀█▄  ░██   █▌▒██▒▓██  ▀█ ██▒▒██▀▀██░▒██░  ██▒░ ▓██▄   
░ ▓██▓ ░ ░██▄▄▄▄██ ░▓█▄   ▌░██░▓██▒  ▐▌██▒░▓█ ░██ ▒██   ██░  ▒   ██▒
  ▒██▒ ░  ▓█   ▓██▒░▒████▓ ░██░▒██░   ▓██░░▓█▒░██▓░ ████▓▒░▒██████▒▒
  ▒ ░░    ▒▒   ▓▒█░ ▒▒▓  ▒ ░▓  ░ ▒░   ▒ ▒  ▒ ░░▒░▒░ ▒░▒░▒░ ▒ ▒▓▒ ▒ ░
    ░      ▒   ▒▒ ░ ░ ▒  ▒  ▒ ░░ ░░   ░ ▒░ ▒ ░▒░ ░  ░ ▒ ▒░ ░ ░▒  ░ ░
  ░        ░   ▒    ░ ░  ░  ▒ ░   ░   ░ ░  ░  ░░ ░░ ░ ░ ▒  ░  ░  ░  
               ░  ░   ░     ░           ░  ░  ░  ░    ░ ░        ░  
                    ░                                               

Autores:
Enzo G Mendes
Charles M Junior
João Victor H Palma
Daniel A França
*/

#include <stdlib.h>
#include <stdio.h>

void positions(int n, int d[], int * first_zero, int * first_five, int * last_five);

int main () {
    int n = 0, fz, ff, lf;
    printf("Informe quantos digitos decimais tem o numero (2 - 1000): ");
    
    //Restrição: 2 ≤ N ≤ 1000 
    while (n < 2 || n > 1000) {
        scanf("%d", &n);
    }

    int d[n];
    positions(n, d, &fz, &ff, &lf);

    //Caso não seja possível obter um número divisível por 5
    if (fz == -1 && ff == -1 && lf == -1) {
        printf("-1\n");
        return 0;
    }

    // Usado para verificar o vetor armazenado pela função
    /*
    for (int v = 0; v < n; v++) {
        printf("%d ", d[v]);
    } */ 

    //Usado para verificar o retorno das posições pela função
    /*
    printf("\n%d", fz);
    printf("\n%d", ff);
    printf("\n%d\n", lf);  */

    //Condições para a troca de posições no vetor
    if( d[n-1] < 5) {
                
        for (int i = 0; i < n-1; i++) {
            if(d[i] == 0) {
                d[i] = d[n-1];
                d[n-1] = 0; 
                for(int i = 0; i < n; i++)
                    printf("%d ", d[i]);
                return 0;
            }
        }
        
        for (int j = n-1; j > 0; j--) {
            if(d[j] == 5) {
                int aux = d[j];
                d[j] = d[n-1];
                d[n-1] = aux;
                for(int j = 0; j < n; j++)
                    printf("%d ", d[j]);
                return 0;
            }
        }
    }
        
    for (int k = 0; k < n-1; k++)  {
        if(d[k] == 0 || d[k] == 5) {
            int aux = d[k];
            d[k] = d[n-1];
            d[n-1] = aux;
            for(int k = 0; k < n; k++)
                printf("%d ", d[k]);
            return 0;
        }
    }        
}

void positions(int n, int d[], int * first_zero, int * first_five, int * last_five){
    int i;
    
    //Def. como NULL, para poder diferenciar caso não contenha o número divisível por 5
    *first_zero = -1;
    *first_five = -1;
    *last_five = -1;
    
    
    //Def. de n e d[]
    printf("\nInforme os digitos decimais (0 - 9), separados por um espaco em branco:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &d[i]);
    }

    
    //Def. de first_zero
    for (i = n; i >= 0; i--) {
        if (d[i] == 0) {
            *first_zero = i;
        } 
    }

    
    //Def. de first_five
    for (i = n; i >= 0; i--) {
        if (d[i] == 5) {
            *first_five = i;
        } 
    }

    
    //Def. de last_five
    for (i = 0; i < n; i++) {
        if (d[i] == 5) {
            *last_five = i;
        }         
    }   
}



