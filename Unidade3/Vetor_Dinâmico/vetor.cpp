#include "vetor.h"
#include <stdexcept>

namespace prg2 {

    // Faz a soma circular de pos e offset, conseiderando que a capacidade é dada por cap (incremento circular)
    // Retorna a posição calculada
    // Se quando chamar a função não dar o parâmetro offset, inicializa como 1
    uint32_t soma_circular (uint32_t pos, uint32_t cap, uint32_t offset = 1) {
        pos += offset;
        if (pos >= cap) return pos - cap;
        return pos;
    }

    // Faz a subtração circular de pos e offset, conseiderando que a capacidade é dada por cap (incremento circular)
    // Retorna a posição calculada
    uint32_t subtracao_circular (uint32_t pos, uint32_t cap, uint32_t offset = 1) {
        // uint32_t não preve números negativos!!
        if (offset > pos) return cap + pos - offset;
        return pos - offset;
    }

    VetorDinamico vetor_cria() {
        VetorDinamico v;

        v.len = 0;
        v.capacidade = MinSize;
        v.mem = new int[MinSize];
        v.inicio = 0;
        v.fim = 0;

        return v;
    }

    void vetor_destroi(VetorDinamico &v) {
        // Libera área de memória para não ocorrer vazamento de memória
        delete[] v.mem;

        // Vetor não pode ser reutilizado
        // nullptr = ponteiro nulo, dá erro (falha de segmentação)
        v.mem = nullptr;
        v.len = 0;
        v.capacidade = 0;
    }

    void vetor_expande(VetorDinamico & v) {
        // alocar nova área de memória (auto == int *)
        auto ptr = new int[v.capacidade + MinSize];

        // copiar os dados da área anterior para a nova área
        for (int pos = 0; pos < v.len; pos++) {
            int k = soma_circular(pos, v.capacidade, v.inicio);
            ptr[pos] = v.mem[k];
        }

        // liberar a área anterior
        // vetor_destroi(v) não pode ser utilizado pq deleta tdo o vetor
        // aqui, queremos zerar apenas v.mem
        delete[] v.mem;

        // usar nova área (atribuí-la a v.mem)
        v.mem = ptr;

        // ajusra os indicadores de inicio e fim
        v.inicio = 0;
        v.fim = v.len;

        // alterar v.capacidade
        v.capacidade += MinSize;
    }

    void vetor_anexa(VetorDinamico &v, int valor) {
        //O vetor deve ser expandido, caso esteja cheio
        if (v.len == v.capacidade) vetor_expande(v);

        // Armazena dado na primeira posição livre (fim)
        v.mem[v.fim] = valor;
        v.fim = soma_circular(v.fim, v.capacidade);
        v.len++;
    }

    // Já existe uma biblioteca em C++ q já faz algo parecido!!
    void vetor_insere(VetorDinamico &v, int valor) {
        vetor_insere(v, 0, valor);
    }

    void vetor_insere(VetorDinamico &v, int pos, int valor) {
        // Teste de consistência
        if(pos > v.len) {
            throw std::invalid_argument("posicao invalida");
        }

        // Se a última posição "livre" for igual a posição inicial
        if (v.fim == v.inicio) vetor_expande(v);

        for (int j = v.len; j > pos; j--) {
            int k = soma_circular(j, v.capacidade, v.inicio);
            int m = soma_circular(j-1, v.capacidade, v.inicio);
            v.mem[m] = v.mem[k];
        }

        // Coloca o novo valor na pos
        pos = soma_circular(pos, v.capacidade, v.inicio);
        v.mem[pos] = valor;
        v.len++;
        v.fim = soma_circular(v.fim, v.capacidade);
    }

    int &vetor_frente(VetorDinamico &v) {
        if (v.len == 0) {
            throw std::invalid_argument("vetor vazio");
        }
        return v.mem[v.inicio];
    }

    int &vetor_atras(VetorDinamico &v) {
        if (v.len == 0) {
            throw std::invalid_argument("vetor vazio");
        }
        uint32_t ultimo = subtracao_circular(v.fim, v.capacidade); // pos ultimo dado
//        if (v.fim > 0) ultimo = v.fim-1;
//        else ultimo = v.len-1;

        return v.mem[ultimo];
    }

    void vetor_remove_inicio(VetorDinamico &v) {
        if (v.len == 0) {
            throw std::invalid_argument("posicao invalida");
        }

        v.inicio = soma_circular(v.inicio, v.capacidade);
        v.len--;
    }

    void vetor_remove_fim(VetorDinamico &v) {
        if (v.len == 0) {
            throw std::invalid_argument("vetor vazio");
        }
        // "dado removido"
        v.fim = subtracao_circular(v.fim, v.capacidade);
        v.len--;
    }

    void vetor_remove(VetorDinamico &v, int pos) {
        if (pos >= v.len) {
            throw std::invalid_argument("posicao invalida");
        }

        // Move os dados da frente da posicao
        for (int j = pos+1; j < v.len; j++) {
            int k = soma_circular(j, v.capacidade, v.inicio);
            int m = soma_circular(j-1, v.capacidade, v.inicio);
            v.mem[m] = v.mem[k];
        }

        v.len--;
        v.fim = subtracao_circular(v.fim, v.capacidade);
    }

    bool vetor_vazio(const VetorDinamico &v) {
        return v.len == 0;
    }

    int &vetor_obtem(VetorDinamico &v, int pos) {
        // testa se pos é válida, e dispara exceção
        if (v.len <= pos) {
            throw std::invalid_argument("posicao invalida");
        }
        // Ajustar pos de acordo com o deslocamento
        pos = soma_circular(pos, v.capacidade, v.inicio);
//        pos += v.inicio;
//        if (pos >= v.capacidade) {
//            pos -= v.capacidade;
//        }

        return v.mem[pos];
    }

//    const int &vetor_obtem(const VetorDinamico &v, int pos) {
//
//    }

    int vetor_tamanho(const VetorDinamico &v) {
        return v.len;
    }

    int vetor_capacidade(const VetorDinamico &v) {
        return v.capacidade;
    }

    void vetor_limpa(VetorDinamico &v) {
        v.len = 0;
        v.inicio = 0;
        v.fim = 0;
    }

    void vetor_ordena(VetorDinamico &v) {

    }

    void vetor_inverte(VetorDinamico &v) {

    }

    void vetor_unicos(VetorDinamico &v) {

    }

    void vetor_expande(VetorDinamico &v, int capacidade) {

    }

    void vetor_contrai(VetorDinamico &v) {

    }


}