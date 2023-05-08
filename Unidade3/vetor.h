#ifndef PROG2_VETOR_H
#define PROG2_VETOR_H

// Qual a quantidae de posições que vai expandir o vetor
const int MniSize = 8;

struct VetorDinamico {
    // ???
};

// Operações do VetorDinamico

// Cria um VetorDinamico com capacidade inicial dada por
// MinSize
VetorDinamico vetor_cria();

//Destroi um VetorDinamico v (destruidor)
void vetor_destroi (VetorDinamico & v);

// Acrescenta um valor ao final do vetor
// Expande o vetor, caso necessário. A expansão
// aloca uma capacidade adicional dado por MinSize
void vetor_anexa(VetorDinamico & v, int valor);

// Insere um valor no início do vetor
// Expande o vetor, caso necessário. A expansão
// aloca uma capacidade adicional dado por MinSize
void vetor_insere(VetorDinamico & v, int valor);

// Insere um valor na posição pos do vetor
// Expande o vetor, caso necessário. A expansão
// aloca uma capacidade adicional dado por MinSize
// DIspara exceção se pos > tamanho do vetor
void vetor_insere(VetorDinamico & v, int pos, int valor);

//Acessa um dado que está na posição pos do vetor
// Obtém uma referência ao dado,
// Se pos > tamanho-1, dispara exceção
// int& é uma referência
int& vetor_obtem(VetorDinamico & v, int pos);

// Remove um dado da posição pos do vetor
// Se pos > tamanho-1, dispara exceção
void vetor_remove(VetorDinamico & v, int pos);

// Obtem o tamanho do vetor
int vetor_tamanho(const VetorDinamico & v);

// Esvazia o vetor
void vetor_limpa(VetorDinamico & v);

// Ordena o vetor
void vetor_ordena(VetorDinamico & v);

// Inverte o vetor
void vetor_inverte(VetorDinamico & v);

// Remove dados contíguos duplicados
void vetor_unicos(VetorDinamico & v);

// (resize de um vector)
// Expande capacidade do vetor
// A nova capacidade será >= capacidade solicitada
// A capacidade deve ser maior que a capacidade atual, senão dispara
// exceção
void vetor_expande(VetorDinamico & v, int capacidade);

// Contrai o vetor para caber exatamente os dados atuais
void vetor_contrai(VetorDinamico & v);



#endif //PROG2_VETOR_H
