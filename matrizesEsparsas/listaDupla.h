/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaDupla.h
 * Author: 2018103815
 *
 * Created on 5 de Dezembro de 2018, 15:46
 */

#ifndef LISTADUPLA_H
#define LISTADUPLA_H

#include "celula.h"


#ifdef __cplusplus
extern "C" {
#endif

    typedef struct listadupla ListaDupla;

    typedef struct listaduplaCelula ListaDuplaCelula;

    ListaDupla* listaDupla_criaVazia();

    ListaDupla* listaDupla_cria();

    void insere(ListaDupla* lista, Celula* celula);

    Celula* retira(ListaDupla* lista, int i, int j);

    ListaDupla* libera(ListaDupla* lista);

    void imprime(ListaDupla* lista);



#ifdef __cplusplus
}
#endif

#endif /* LISTADUPLA_H */

