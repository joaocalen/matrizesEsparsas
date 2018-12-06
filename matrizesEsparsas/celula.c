/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "celula.h"
#include <stdio.h>
#include <stdlib.h>

struct celula {
    int i, j;
    float conteudo;
};

Celula* celula_cria(int i, int j, float conteudo) {
    Celula* celula = (Celula*) malloc(sizeof (Celula));
    celula -> i = i;
    celula -> j = j;
    celula -> conteudo = conteudo;
    return celula;
}

Celula* celula_criaVazia() {
    return NULL;
}

int celula_Vazia(Celula* celula) {
    return (celula == NULL);
}

int celula_getI(Celula* celula) {
    if (!celula_Vazia(celula))
        return celula -> i;
    return 0;
}

int celula_getJ(Celula* celula) {
    if (!celula_Vazia(celula))
        return celula -> j;
    return 0;
}

float celula_getConteudo(Celula* celula) {
    if (!celula_Vazia(celula))
        return celula -> conteudo;
    return 0;
}
