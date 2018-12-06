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

    typedef struct listaCruzada ListaCruzada;

    typedef struct listaCruzadaCelula ListaCruzadaCelula;

    ListaCruzada* listaCruzada_cria(int i, int j);

    ListaCruzada* listaCruzada_insere(ListaCruzada* lista, Celula* celula);

    Celula* listaCruzada_retira(ListaCruzada* lista, int i, int j);

    ListaCruzada* listaCruzada_libera(ListaCruzada* lista);

    void listaCruzada_imprime(ListaCruzada* lista);
    
    ListaCruzada* listaCruzada_insereLinha(ListaCruzada* lista, ListaCruzadaCelula* celula);
    
    ListaCruzada* listaCruzada_insereColuna(ListaCruzada* lista, ListaCruzadaCelula* celula);



#ifdef __cplusplus
}
#endif

#endif /* LISTADUPLA_H */

