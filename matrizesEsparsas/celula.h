/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   celula.h
 * Author: 2018103815
 *
 * Created on 5 de Dezembro de 2018, 15:49
 */

#ifndef CELULA_H
#define CELULA_H

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct celula Celula;
    
    Celula* celula_criaVazia();
    
    Celula* celula_cria(int i, int j, float conteudo);
    
    int celula_Vazia(Celula* celula);
    
    int celula_getI(Celula* celula);
    
    int celula_getJ(Celula* celula);
    
    float celula_getConteudo(Celula* celula);  


#ifdef __cplusplus
}
#endif

#endif /* CELULA_H */