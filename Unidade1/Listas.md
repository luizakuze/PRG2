## Listas

- Armazenados dinamicamente em memória, de forma a se organizarem em uma sequência. 
- Qualquer dado da lista pode ser acessado, independente da posição.
- Cada dado armazenado possui referências tanto do seu sucessor quando do seu antecessor, então <br>
quando quiser acessar um dado do meio da lista, tem que ser ou pelo inicio ou final da lista.

### Aplicações

- Armazenar um conjunto de dados cuja quantidade não pode ser conhecida anteoriormente. 
- Quando tiver que retirar um dados do início (push_front) ou do meio, a lista é melhor que o vector. <br> Se tiver que somente alterar dados que chegam no final, o vector é melhor.
- Armazenar dados cuja ordem em memória é modificada frequentemente.
- Ex. Banco de dados e playlists de música. 

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
#### Algumas operações da lista precisam usar ITERADORES como parâmetros. Comandos como, por exemplo, o insert e o erase.
- begin(): Início da lista;
- back(): Fim da lista;
- insert: Insere um dado em determinada posição;
- erase: Remove um dado ou  mais de determinada posição.
```
// Lista com alguns valores iniciados
list <string> lista = {"luiza", "lulu", "luizinha"}

// Obtém o iterador do primeiro dado da lista
auto it = lista.begin();

// Incrementando o iterador
it++;

// Add a string "ola mundo" na posição 2 da lista
// Ficando na frente de "lulu"
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
