
#include "listaDupla.h"
#include "celula.h"

struct listaduplaCelula {
    ListaDupla* prox, ant;
    Celula* celula;
};

struct listadupla {
    ListaDuplaCelula* prim, ult;
    int tamI, tamJ;
};

