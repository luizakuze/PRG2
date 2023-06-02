## Analisador de preços de ações

### Introdução

A análise de séries numéricas busca identificar tendências na sequência de números. <br>
As variações dos valores de uma série podem parecer quase aleatórias, porém padrões podem ser identificados em diferentes intervalos de tempo. 

![img.png](https://cdn.discordapp.com/attachments/978456290428862516/1114308544515293224/image.png)

A linha vermelha mostra as cotações ao longo do tempo. <br>
Pode-se observar que existe uma variação acentuada, pois os preços caem em um certo período, e depois sobem um pouco adiante, e isso se repete de forma aparentemente aleatória. Se alguém pudesse estimar de quando em quando os preços caem (e quanto), e quando sobem, poderia fazer investimentos com maior chance de lucro. <br>
Para isso, esse investidor deveria buscar padrões de oscilação dos preços, por meio de análise do histórico de cotações dessa ação.

Um possível padrão nos preços seria identificar quantos dias o preço da ação foi menor ou igual ao preço de cada dia. <br>
Veja o exemplo a seguir para entender esse problema:

- Preços de cada dia: 100, 70, 75, 81, 86, 60, 62, 88
- Dias com preço menor ou igual: 1, 1, 2, 3, 4, 1, 2, 7

A quantidade de dias anteriores com preços menores é sempre pelo menos 1, pois ela inclui o próprio dia usado como referência.

Um padrão interessante a buscar com essa análise é calcular a probabilidade de haver N dias consecutivos de preços crescentes, sendo N um valor inteiro > 1. <br>
Com isso, um investidor pode estimar o risco de que uma ação possa cair, dado que seu preço subiu por um certo número de dias consecutivos. <br>
Se ele entender que esse risco está acima do aceitável, pode decidir vender a ação.

### Analisando o projeto

A análise de padrões em séries numéricas pode ser feita com um processo de identificação de probabilidade de dias consecutivos de valores ascendentes. <br> 
E para isso um pequeno programa pode ser criado, o qual deve apresentar o seguinte:
<br> <br>
Para cada dia da série, a quantidade de dias anteriores e consecutivos com preço ascendente <br>
As probabilidades de cada quantidade de dias com valores ascendentes <br>
Cada série numérica deve estar contida em um arquivo, cujas linhas têm este formato:<br>

```
dia/mes/ano valor
```

Exemplo:

```
05/11/2021 29.29
08/11/2021 29.48
09/11/2021 29.44
10/11/2021 30.79
```

O nome do arquivo da série numérica é informado no primeiro argumento de linha de comando.


### Objetivo 

Apresentar ao usuário a sequência de dias com valores ascendentes, e também as probabilidades de cada quantidade de dias com valores ascendentes.
