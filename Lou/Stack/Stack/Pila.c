//
//  Pila.c
//  Stack
//
//  Created by LourdesMG on 1/22/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include "Pila.h"


void creaPila()
{
    tope = -1; 
}

void push(int x)
{
    tope++;
    arrpila[tope] = x;
}

int pop()
{
    int r = arrpila[tope];
    tope--;
    return r;
}

int top()
{
    return arrpila[tope];
}

int isEmpty()
{
    if(tope == -1)
        return 1;
    return 0;
}

/*
int main (int argc, const char * argv[])
{
    
    // insert code here...
    printf("Hello, World!\n");
    push(3);
    printf("Adios\n");
    
    return 0;
}
*/