/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: 2018103815
 *
 * Created on 5 de Dezembro de 2018, 15:44
 */

#include <stdio.h>
#include <stdlib.h>

#include "listaCruzada.h"
#include "celula.h"

#define N 10
#define numElementos 15

/*
 * 
 */


int main(int argc, char** argv) {


    /* TIPO 1: ALOCACAO USUAL*/
    //    float** matriz = (float**) malloc(N * sizeof (float*));
    //
    //    for (int i = 0; i < N; i++) {
    //        matriz[i] = (float*) malloc(N * sizeof (float));
    //        for (int j = 0; j < N; j++) {
    //            matriz[i][j] = 0;
    //        }
    //    }


    /*TIPO2: CSR */

        float* vetorValores = (float*) malloc(numElementos * sizeof (float));
        float* vetorI = (float*) malloc(N * sizeof (float));
        float* vetorJ = (float*) malloc(numElementos * sizeof (float));


//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < (numElementos / 5); j++) {
//            
//        }
//    }


    /*TIPO 3: LISTAS CRUZADAS*/
    ListaCruzada* lista = listaCruzada_cria(N, N);

    //    Celula* celula = celula_cria(2, 1, 6.0);
    //    Celula* celula2 = celula_cria(1, 2, 9.0);
    //    Celula* celula3 = celula_cria(0, 1, 7.0);
    //    Celula* celula4 = celula_cria(1, 3, 2.0);
    //    Celula* celula5 = celula_cria(6, 1, 7.0);
    //    Celula* celula6 = celula_cria(8, 3, 7.0);
    //    Celula* celula7 = celula_cria(7, 5, 7.0);
    //
    //    lista = listaCruzada_insere(lista, celula);
    //    lista = listaCruzada_insere(lista, celula2);
    //    lista = listaCruzada_insere(lista, celula3);
    //    lista = listaCruzada_insere(lista, celula4);
    //    lista = listaCruzada_insere(lista, celula5);
    //    lista = listaCruzada_insere(lista, celula6);
    //    lista = listaCruzada_insere(lista, celula7);


//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < (numElementos / 5); j++) {
//            lista = listaCruzada_insere(lista, celula_cria(i, j, 1));
//        }
//    }


    //listaCruzada_imprime(lista);

    return (EXIT_SUCCESS);
}

