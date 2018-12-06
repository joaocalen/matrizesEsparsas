
#include <stdlib.h>
#include <stdio.h>

#include "listaCruzada.h"
#include "celula.h"

struct listaCruzadaCelula {
    ListaCruzadaCelula* proxCol;
    ListaCruzadaCelula* proxLin;
    Celula* celula;
};

struct listaCruzada {
    ListaCruzadaCelula** linha;
    ListaCruzadaCelula** coluna;
    int tamI, tamJ;
};

ListaCruzada* listaCruzada_cria(int i, int j) {
    ListaCruzada* lista = (ListaCruzada*) malloc(sizeof (ListaCruzada));
    lista -> tamI = i;
    lista -> tamJ = j;
    lista -> linha = (ListaCruzadaCelula**) malloc(i * sizeof (ListaCruzada*));
    lista -> coluna = (ListaCruzadaCelula**) malloc(j * sizeof (ListaCruzada*));
    int aux;
    for (aux = 0; aux < i; aux++) {
        (lista -> linha)[aux] = (ListaCruzadaCelula*) malloc(sizeof (ListaCruzadaCelula));
        (lista -> linha)[aux] ->celula = NULL;
        (lista -> linha)[aux] ->proxLin = NULL;
        (lista -> linha)[aux] ->proxCol = NULL;
        if (aux < j) {
            (lista -> coluna)[aux] = (ListaCruzadaCelula*) malloc(sizeof (ListaCruzadaCelula));
            (lista -> coluna)[aux] -> celula = NULL;
            (lista -> coluna)[aux] -> proxLin = NULL;
            (lista -> coluna)[aux] -> proxCol = NULL;
        }
    }
    for (aux; aux < j; aux++) {
        (lista -> coluna)[aux] = (ListaCruzadaCelula*) malloc(sizeof (ListaCruzadaCelula));
        (lista -> coluna)[aux] -> celula = NULL;
        (lista -> coluna)[aux] -> proxLin = NULL;
        (lista -> coluna)[aux] -> proxCol = NULL;
    }
    return lista;
}

ListaCruzada* listaCruzada_insere(ListaCruzada* lista, Celula* celula) {
    ListaCruzadaCelula* nova = (ListaCruzadaCelula*) malloc(sizeof (ListaCruzadaCelula));
    nova ->celula = celula;
    lista = listaCruzada_insereLinha(lista, nova);
    lista = listaCruzada_insereColuna(lista, nova);
    return lista;
}

ListaCruzada* listaCruzada_insereLinha(ListaCruzada* lista, ListaCruzadaCelula* nova) {
    if ((lista->linha)[celula_getI(nova->celula)] ->proxLin == NULL) {
        nova ->proxLin = NULL;
        (lista -> linha)[celula_getI(nova->celula)] ->proxLin = nova;
        return lista;
    }
    ListaCruzadaCelula* aux = (lista-> linha)[celula_getI(nova->celula)] ->proxLin;
    ListaCruzadaCelula* ant = NULL;

    while (aux != NULL && celula_getJ(aux -> celula) < celula_getJ(nova -> celula)) {
        ant = aux;
        aux = aux ->proxLin;
    }

    if (aux == NULL) {
        ant ->proxLin = nova;
        nova ->proxLin = NULL;
    } else {
        ant -> proxLin = nova;
        nova ->proxLin = aux;
    }
    return lista;
}

ListaCruzada* listaCruzada_insereColuna(ListaCruzada* lista, ListaCruzadaCelula* nova) {
    if ((lista->coluna)[celula_getJ(nova-> celula)] ->proxCol == NULL) {
        nova ->proxCol = NULL;
        (lista -> coluna)[celula_getJ(nova->celula)] ->proxLin = nova;
        return lista;
    }
    ListaCruzadaCelula* aux = (lista-> coluna)[celula_getI(nova->celula)] -> proxCol;
    ListaCruzadaCelula* ant = NULL;

    while (aux != NULL && celula_getI(aux -> celula) < celula_getI(nova-> celula)) {
        ant = aux;
        aux = aux ->proxCol;
    }

    if (aux == NULL) {
        ant ->proxCol = nova;
        nova ->proxCol = NULL;
    } else {
        ant -> proxCol = nova;
        nova ->proxCol = aux;
    }
    return lista;
}

void listaCruzada_imprime(ListaCruzada* lista) {
    for (int i = 0; i < lista->tamI; i++) {
        ListaCruzadaCelula* aux = (lista->linha)[i] ->proxLin;
        for (int j = 0; j < lista->tamJ; j++) {
            if (aux != NULL && celula_getJ(aux->celula) == j) {
                printf("%.2f ", celula_getConteudo(aux->celula));
                aux = aux ->proxLin;
            } else {
                printf("0.00 ");
            }
        }
        printf("\n");
    }
}