## Anotações projeto - tabelas hash

- Tabela não irá expandir.
- Chave vai ser do tipo string.
- Valor pode ser de qualquer tipo.

[link_moodle](https://moodle.ifsc.edu.br/mod/book/view.php?id=713837&chapterid=112260)

### Função Hash
Tem os seguintes requisitidos:
- Ser leve computacionalmente.
- Espalhar uniformemente os índices entre todos os possíveis valores de saída. 

Para calcular a posição, pode ser usada a seguinte fórmula:
```
hN(k)= k mod N
```
Onde **mod**, significa o resto da divisão e **K** um int.

- Exemplificando em uma função:
```
unsigned int hash(const string &  chave, unsigned int N) {
  unsigned int total = 0;

  for (auto & c: chave) total += c;

  return total % N;
}
```

- Outro exemplo: <br>
string s = "ABC" ----> em ASCII 65 = A, 66 = B e 67 = C <br>
Sendo N = 32, <br>
(65 + 66 + 67) = 198 ---> 198 mod 32 = 6 <br> <br>

Essa não é uma boa solução, pois causa muitas colisões em uma parte da tabela. <br>

- **A solução mais simples:**
```
unsigned int hash_simples(const string & chave, int N) {
    unsigned int soma = 0;

    for (auto & c: chave) {
      // desloca 8 bits p esquerda do valor anterior da soma
      soma = ((soma << 8) + c) % N; 
    }
    return soma % N;  
}
```
- A **Fletcher32** também é uma boa opção, um algoritmo que já existe.

---

### Tratamento de Colisão
Colisão é quando o hash é calculado e a posição calculada é a mesma para a chave. <br>
__"Acontece quando duas chaves diferentes tem o mesmo índice da tabela."__ <br>

- **Criptografia hash** = Utilziada para gerar chaves eletrônicas, assinaturas digitais.

- **Abordagem escolhida** = Ao invés de guardar um par de chave e valor, guardar em uma lista.
Consequências -> Busca linear para encontrar o dado adicional, pq agra vai ter uma lista e não diretamente o dado. Aqui, é  visível a necessidade de uma boa função hash, já que os dados tem que ser bem separados para não ficar uma lista muito grande em uma única coluna da tabela (muito custoso para percorrer essa coluna).

Poderia ser a lista ou o vector, mas a lista otimiza o código. Último dado que o usuário acessar, vai para o início da tabela hash.Algunas dados são mais utilizados que outros.


---

### Limitações até agora

- Limitação do tipo da chave.
- Expansão da tabela.
- Se torna ineficiente com muitos dados.

### Primeiro, questão da expansão da tabela

- **Fator de Carga:** Tamanho / número de linhas

num de linhas -> buckets


Quando passar o fator de carga, expande a tabela.

Se olhar na biblioteca do C++, tem um tópico "buckets" da "unordened_map".
(return load_factor)
