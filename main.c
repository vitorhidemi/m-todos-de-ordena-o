#include <stdio.h>
#include <stdlib.h>

void aloc(int *v,int n)
{
    v=malloc(n*sizeof(int));
}

void malloc_verifica(int *v)
{
    if(v==NULL){
		printf("Memoria Insuficiente");
		exit (1);
	}
}

void ler(int *v, int n)
{
    int i;
    aloc(v,n);
    malloc_verifica(v);
    printf("Escreva os elementos:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", (v+i));
    }
}

void imprimir(int *v, int n)
{
    int i;
    printf("Vetor:\n");
    for(i=0;i<n;i++){
        printf("%d\n", *(v+i));
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

void BubbleSort_inc_art(int *v, int n)
{
    int i,j,aux;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (*(v+j)>*(v+j+1))
            {
                aux=*(v+j);
                *(v+j)=*(v+j+1);
                *(v+j+1)=aux;
            }
        }
    }
}

void BubbleSort_dec(int v[], int n)
{
    int i,j,aux;
    for (i=0;i<(n-1);i++)
    {
        for (j=0;j<(n-i-1);j++)
        {
            if (v[j]<v[j+1])
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
}

void BubbleSort_dec_art(int *v, int n)
{
    int i,j,aux;
    for (i=0;i<(n-1);i++)
    {
        for (j=0;j<(n-i-1);j++)
        {
            if (*(v+j)<*(v+j+1))
            {
                aux=*(v+j);
                *(v+j)=*(v+j+1);
                *(v+j+1)=aux;
            }
        }
    }
}

void SelectionSort_inc(int v[], int n)
{
    int i,j,min,aux=0;
    for (i=0; i<(n-1); i++)
    {
        min=i;
        for (j=(i+1); j<n; j++)
        {
            if (v[j]<v[min])
            {
                min=j;
            }
        }

        if (i!=min)
        {
            aux=v[i];
            v[i]=v[min];
            v[min]=aux;
        }
    }
}
void SelectionSort_inc_art(int *v, int n)
{
    int i,j,min,aux=0;
    for (i=0; i<(n-1); i++)
    {
        min=i;
        for (j=(i+1); j<n; j++)
        {
            if (*(v+j)<*(v+min))
            {
                min=j;
            }
        }

        if (i!=min)
        {
            aux=*(v+i);
            *(v+i)=*(v+min);
            *(v+min)=aux;
        }
    }
}

void SelectionSort_dec(int v[], int n)
{
    int i,j,min,aux=0;
    for (i=0; i<(n-1); i++)
    {
        min=i;
        for (j=(i+1); j<n; j++)
        {
            if (v[j]>v[min])
            {
                min=j;
            }
        }

        if (i!=min)
        {
            aux=v[i];
            v[i]=v[min];
            v[min]=aux;
        }
    }
}
void SelectionSort_dec_art(int *v, int n)
{
    int i,j,min,aux=0;
    for (i=0; i<(n-1); i++)
    {
        min=i;
        for (j=(i+1); j<n; j++)
        {
            if (*(v+j)>*(v+min))
            {
                min=j;
            }
        }

        if (i!=min)
        {
            aux=*(v+i);
            *(v+i)=*(v+min);
            *(v+min)=aux;
        }
    }
}

void InsertionSort_inc (int v[], int n)
{
   int i, aux, j;
   for (i=1;i<n;i++)
   {
       aux = v[i];
       j = i-1;

       while (j>=0 && v[j]>aux)
       {
           v[j+1] = v[j];
           j = j-1;
       }
       v[j+1] = aux;
   }
}

void InsertionSort_inc_art(int *v, int n)
{
    int i, aux, j;
    for (i=1;i<n;i++)
    {
        aux = *(v+i);
        j = i-1;

        while (j>=0 && *(v+j)>aux)
        {
            *(v+j+1) = *(v+j);
            j = j-1;
        }
        *(v+j+1) = aux;
    }
}

void InsertionSort_dec (int v[], int n)
{
   int i, aux, j;
   for (i=1;i<n;i++)
   {
       aux = v[i];
       j = i-1;

       while (j>=0 && v[j]<aux)
       {
           v[j+1] = v[j];
           j = j-1;
       }
       v[j+1] = aux;
   }
}

void InsertionSort_dec_art(int *v, int n)
{
    int i, aux, j;
    for (i=1;i<n;i++)
    {
        aux = *(v+i);
        j = i-1;

        while (j>=0 && *(v+j)<aux)
        {
            *(v+j+1) = *(v+j);
            j = j-1;
        }
        *(v+j+1) = aux;
    }
}

int BuscaBin(int *v, int n, int x)
{
    int i,m,f;
    i=0;
    f=n-1;
    while (i<=f)
    {
        m=(i+f)/2;
        if (x==*(v+m))
        {
            return 1;
        }
        else if (x<*(v+m))
        {
            f=m-1;
        }
        else
            i=m+1;
    }
    return 0;
}




int main()
{
    int met,cres,arit,n,b,x;
    printf("Escolha o metodo de ordenacao:\n");
    printf("1- Bubble Sort\n2- Selection Sort\n3- Insertion Sort\n");
    scanf("%d", &met);
    printf("Tamanho do vetor:\n");
    scanf("%d", &n);
    int v[n];
    ler(v,n);
    printf("Crescente ou decrescente?\n");
    printf("1-Crescente\n2-Decrescente\n");
    scanf("%d", &cres);
    printf("Com ou sem aritmetica?\n");
    printf("1-Com\n2-Sem\n");
    scanf("%d", &arit);
        switch (met)
        {
            case 1:
                if((cres==1)&&(arit==1)){
                    BubbleSort_inc_art(v,n);
                }
                else if ((cres==1)&&(arit==2)){
                    BubbleSort_inc(v,n);
                }
                else if ((cres==2)&&(arit==1)){
                    BubbleSort_dec_art(v,n);
                }
                else if ((cres==2)&&(arit==2)){
                    BubbleSort_dec(v,n);
                }
                break;
            case 2:
                if((cres==1)&&(arit==1)){
                    SelectionSort_inc_art(v,n);
                }
                else if ((cres==1)&&(arit==2)){
                    SelectionSort_inc(v,n);
                }
                else if ((cres==2)&&(arit==1)){
                    SelectionSort_dec_art(v,n);
                }
                else if ((cres==2)&&(arit==2)){
                    SelectionSort_dec(v,n);
                }
                break;

            case 3:
                if((cres==1)&&(arit==1)){
                    InsertionSort_inc_art(v,n);
                }
                else if ((cres==1)&&(arit==2)){
                    InsertionSort_inc(v,n);
                }
                else if ((cres==2)&&(arit==1)){
                    InsertionSort_dec_art(v,n);
                }
                else if ((cres==2)&&(arit==2)){
                    InsertionSort_dec(v,n);
                }
                break;


        }
    imprimir(v,n);
        printf("\nQuer fazer uma busca binaria?\n");
        printf("1-Sim\n2-Nao\n");
        scanf("%d", &b);
        if (b==1){
            printf("Qual elemento deseja buscar?\n");
            scanf("%d", &x);
            if (BuscaBin(v,n,x))
                printf("O elemento [%d] se encontra na vetor", x);
            else
                printf("O elemento nao se encontra no vetor");

}

