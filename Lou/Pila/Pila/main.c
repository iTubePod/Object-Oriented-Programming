//
//  main.c
//  Pila
//
//  Created by LourdesMG on 1/18/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#define TAM 20

int pila[TAM];
int tope = -1;

void push(int x);
int pop();
int top();
void imprimir();


int main (int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, World!\n");
    
    push(1);
    push(2);
    push(3);
    
    imprimir();
    
    int y = pop();
    
    printf("La pila despues de sacar un elemento (%d)\n",y);
    
    imprimir();
    
    
    return 0;
}


void push(int x)
{
    tope++;
    pila[tope] = x;
}

int pop()
{
    int t;
    t = pila[tope];
    tope--;
    
    return t;
}

int top()
{
    return pila[tope];
}

int isEmpty()
{
    if (tope == -1)
        return 1;
    return 0;
}

void imprimir()
{
    if (tope == -1)
        return;
    
    printf("%d <-tope\n", pila[tope]);
    
    for(int i=(tope-1); i>=0; i--)
        printf("%d\n",pila[i]);
    
}

