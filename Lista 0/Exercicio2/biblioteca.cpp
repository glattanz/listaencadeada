#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void imprime(int *v){
	
    for(int i=0;i<10;i++){
       printf("\nVetor [%d] de valor: %d", i, v[i]);
    }
    
    printf("\n");
}

void impar(int *v){
	
	printf("\nValores impares:\n");
    for(int i=0; i<10; i++){
        if( (v[i] % 2) != 0){
        	
			printf("%d\n", v[i]);
		} 
    }
    
    printf("\n");
}

void par(int *v){
	
	printf("\nValores pares:\n");
    for(int i=0; i<10; i++){
        if((v[i]%2)==0){
        	
        	printf("%d\n",v[i]);
		}
        
    }
    
    printf("\n");
}

