#include <stdio.h>
#include <stdlib.h>

void ler(int v[], int n)
{
    int i;
    printf("Escreva os elementos:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &v[i]);
    }
}
void imprimir(int v[], int n)
{
    int i;
    printf("Vetor:\n");
    for(i=0;i<n;i++){
        printf("%d\n", v[i]);
    }
}
void BubbleSort_inc(int v[], int n)
{
    int i,j,aux;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(v[j]>v[j+1])
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
}

void SelectionSort_inc(int v[], int n)
{
    int i,j,menor,aux=0;
    for (i=0; i<(n-1); i++)
    {
        menor=i;
        for (j=(i+1); j<n; j++)
        {
            if (v[j]<v[menor])
            {
                menor=j;
            }
        }

        if (i!=menor)
        {
            aux=v[i];
            v[i]=v[menor];
            v[menor]=aux;
        }
    }
}


int main()
{
    int caso1,caso2,caso3,n;
    printf("Escolha o metodo de ordenacao:\n");
    printf("1- Bubble Sort\n2- Selection Sort\n3- Insertion Sort\n");
    scanf("%d", &caso1);
    printf("Tamanho do vetor:\n");
    scanf("%d", &n);
    int v[n];

        switch (caso1)
        {
            case 1:
                printf("Crescente ou decrescente?\n");
                printf("1-Crescente\n2-Decrescente\n");
                scanf("%d", &caso2);
                switch (caso2)
                {
                    case 1:
                        printf("Com ou sem aritmetica?\n");
                        printf("1-Com\n2-Sem\n");
                        scanf("%d", &caso3);
                        switch (caso3)
                        {
                            case 1:
                                ler(v,n);
                                //BubbleSort_inc_art(v,n);
                                imprimir(v,n);
                                break;
                            case 2:
                                ler(v, n);
                                BubbleSort_inc(v,n);
                                imprimir(v,n);
                                break;
                        }
                    break;
                    case 2:
                        printf("Com ou sem aritmetica?\n");
                        printf("1-Com\n2-Sem\n");
                        scanf("%d", &caso3);
                        switch (caso3)
                        {
                            case 1:
                                ler(v,n);
                                //BubbleSort_dec_art(v,n);
                                imprimir(v,n);
                                break;
                            case 2:
                                ler(v, n);
                                //BubbleSort_dec(v,n);
                                imprimir(v,n);
                                break;
                        }
                    break;
                }

            case 2:
                printf("Crescente ou decrescente?\n");
                printf("1-Crescente\n2-Decrescente\n");
                scanf("%d", &caso2);
                switch (caso2)
                {
                    case 1:
                        printf("Com ou sem aritmetica?\n");
                        printf("1-Com\n2-Sem\n");
                        scanf("%d", &caso3);
                        switch (caso3)
                        {
                            case 1:
                                ler(v,n);
                                //SelectionSort_inc_art(v,n);
                                imprimir(v,n);
                                break;
                            case 2:
                                ler(v, n);
                                SelectionSort_inc(v,n);
                                imprimir(v,n);
                                break;
                        }
                    case 2:
                        printf("Com ou sem aritmetica?\n");
                        printf("1-Com\n2-Sem\n");
                        scanf("%d", &caso3);
                        switch (caso3)
                        {
                            case 1:
                                ler(v,n);
                                //SelectionSort_dec_art(v,n);
                                imprimir(v,n);
                                break;
                            case 2:
                                ler(v, n);
                                //SelectionSort_dec(v,n);
                                imprimir(v,n);
                                break;
                        }
                    break;
                }
            break;
        }
}

