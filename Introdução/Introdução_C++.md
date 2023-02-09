# **Anotações aula2**

## Scanf de uma String
---
Colocar o tamanho da string no scanf, para não exceder o <br>
número de caracteres. **Exemplo:** para 32 caracteres.
```
printf("Nome: ");
scanf("%32s", nome);
```

## Diferenças C e C++ 
---
Char e String. <br> Existe o tipo "string" no C++
```
string nome, sobrenome, nomeCompleto;
```

## Output e Input
---
- **Cout** Console output. 
- **Cin** Console intput.
- **<< ou >>** Operador.

**OBS:** No tipo 'string' não pode ser utilizado os comandos de C puro, como o printf e o scanf. <br> Uma vez que é um tipo que pode ser declarado somente no C++.

## Extensão para códigos do C++
---
nome_do_arquivo.cpp

## Portabilidade com Quebra de Linha
---
**endl** possibilita a portabilidade do programa no lugar do **\n**. <br> Dá de rodar em um Windows ou em um LInux, pois a quebra de linha é diferente em cada sistema operacional.


## Comparação de String
---
A string tem o endereço dos caracteres. Pode comparar como uma variável qualquer. <br>
**Exemplo:** 'maçã' == string

## Getline x Cin
---
O getline pega a string até depois do espaço.
O Cin pega a string somente até o primeiro espaço.
