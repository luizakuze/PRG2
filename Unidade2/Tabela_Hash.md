### Tabela Hash

#### Anotações
- Remover elementos duplicados
- Hash = "espalhamento"
- Cada dado tem uma chave única
- unordered_map x unordered_set

#### Funcionamento 

Como a tebala associa 2 valores, esses valores podem ser de qqr tipo, então a declaração é a seguinte:

```
unordered_map<string,int> tab;
```
Nesse exemplo, a **string** é a chave (quem vai localizar dados) 
e o **int** é o dado procurado.


### Para percorrer cada dado 

```
for (auto & dado: tab) {
}
```

Esse auto resume é isso: "pair<string,int>"

OU

auto it= tab.begin(); it =tab.end(); it++) {
cout << it->first << ": " << it->second;
}
