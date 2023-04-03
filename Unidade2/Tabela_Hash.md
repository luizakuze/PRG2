## Tabela Hash

É uma estrutura de dado associativa, ou seja, o posição do dado depende do seu valor. <br> Pode ser chamada de tabela de dispersão. <br> _"Hash"_ significa "espalhamento". Cada dado tem uma chave que permite acessar esse dado, não podem existir chaves duplicadas.

### Necessidades

- Procure por elementos dentro de um grande conjunto de dados
- Encontre elementos duplicados em um conjunto de dados
- Armazene e obtenha rapidamente elementos de um grande conjunto de dados

- Cada dado tem uma chave única
- unordered_map x unordered_set

### Funcionamento

Uma consulta é feita por meio da chave do dado procurado. Uma função chamda "função hash" calcula um número a partir de sua chave. Esse número é usado para acessar um "bucket", uma ṕosição de um vetor que é onde há os dados armazenados. Obtem-se então o dado procurado durante a consulta. <br> <br> A grande vantagem da tabela é que o cálculo da posição pela função hash é muito eficiente (rápida), e assim se localiza o dado muito rapidamente.

### Implementações

- unordered_map: É de fato uma **tabela hash**, em que os dados são armazenados com sua chave e valor. A chave é utilizada para acessar o dado.
- unordered_set: É um **conjunto**, em que só contém dados com valores únicos. É utilizado quando surge a necessidade de verificar a duplicação de dados.

### Biblioteca 

```
#include <unordered_map>
#include <unordered_set>
```
### Criar uma tabela hash
```
// Chave com tipo string e dado com valor inteiro
unordered_map<string,int> tab;
```
### Criar um conjunto
```
// Conjunto que armazena dados do tipo string
unordered_set<string> conj;
```
### Para percorrer cada dado 
```
for (auto & dado: tab) {
  cout << dado.first << ' '<< dado.second;
}
```
Utilizar o "auto" deixa o código limpo e legível, o que acontece é o seguinte:
```
for (pair<string,int> & dado: tab) {
  cout << dado.first << ' ' << dado.second; 
}
```
Uma terceira forma, não usual e não tão recomendada
```
auto it= tab.begin(); it =tab.end(); it++) {
cout << it->first << ": " << it->second;
}
```
### Comandos

- **count:** Verifica quantas vezes apareceu o dado.

Exemplo utilizando tabela hash:
```
  // Lê um par de valores de um arquivo
  // esse par é composto pelo nome de um produto e de sua quantidade
  while (arq >> produto >> qtde) {
  
    // se chave (nome do produto) já existe na tabela (ou seja, já tiver no conjunto desse dado)
    if (totais.count(produto) > 0) {
    
      // acessa o valor a ela associado, e a ele soma o número lido do arquivo
      totais[produto] += qtde;
      
    } else {
    
      // senão armazena o número lido, associando-o a esse produto
      totais[produto] = qtde;
    }
  }
```
