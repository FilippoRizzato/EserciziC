#include <stdlib.h>
#include <stdio.h>

int maggiore(int numeri, int maggiore)
{
    for(int i = 0; i < numeri; i++){
        if(numeri[i] > numeri[i + 1]){
            maggiore = numeri[i]; 
        }
    }
    return maggiore;
}
int minore(int numeri, int minore){
    for(int i = 0; i < numeri; i++){
        if(numeri[i] < numeri[i + 1]){
            minore = numeri[i];
        }
    }
}
int main(int argc, char *argv[])
{
    int numeri[10];
    int maggiore, minore;

    printf("Inserisci dei numeri");
    scanf("%d", numeri);
    printf("Il numero maggiore è %d" ,maggiore);
}