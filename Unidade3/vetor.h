#ifndef PROG2_VETOR_H
#define PROG2_VETOR_H

struct VetorDinamico {
    // ???
};

// Operações do VetorDinamico


// Cria um VetorDinamico com capacidade inicial dada por
// MinSize
VetorDinamico vetor_cria();


//Destroi um VetorDinamico v
void vetor_destroi (VetorDinamico & v);

// Acrescenta um valor ao final do vetor
// Expande o vetor, caso necessário. A expansão
// aloca uma capacidade adicional dado por MinSize
void vetor_anexa(VetorDinamico & v, int valor);


#endif //PROG2_VETOR_H
