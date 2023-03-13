## Listas

- Armazenados dinamicamente em memória, de forma a se organizarem em uma sequência. <br>
- Qualquer dado da lista pode ser acessado, independente da posição. <br>
- Cada dado armazenado possui referências tanto do seu sucessor quando do seu antecessor, então <br>
quando quiser acessar um dado do meio da lista, tem que ser ou pelo inicio ou final da lista.

### Aplicações

- Armazenar um conjunto de dados cuja quantidade não pode ser conhecida anteoriormente. Ex. Banco de dados <br>
- Armazenar dados cuja ordem em memória é modificada frequentemente.

### Biblioteca
```
#include <list> lista;
```

### Criar uma lista
```
// Lista que armazena strings
list <string> nomes;
```
### Comandos

- push_front: Add um dado ao início da lista;
- push_back: Add um dado ao final da lista;
- pop_front: Retira um dado de frente da lista; 
- pop_back: Retira um dado do final da lista.

```
lista.push_front("luiza");
lista.push_back("kuze");
lista.push_back("oi");

lista.pop_front(); // Tira a string "luiza"
lista.pop_back(); // Tira a string "oi"
```
- begin(): Início da lista;
- back(): Fim da lista;
- insert: Insere um dado em determinada posição;
- erase: Remove um dado ou  mais de determinada posição.
```
it = lista.begin();
it++;
// Add a string "ola mundo" na posição 2 da lista
lista.insert (it, "ola mundo";
```
- size: retorna o comprimento da lista;
- empty: retorna 'true' se a lista estiver vazia, e 'false' caso contrário.
```
cout << "Lista de strings tem comprimento=" << lista.size() << endl;

while (! lista.empty()) {
   cout << "String: " << lista.front() << endl;
   lista.pop_front(); 
}
```
- clear: Remove todos os dados da lista de uma vez.
```
lista.clear();
```
