## Projeto 2 - descobrir rotas em um mapa

### Objetivo
Listar a melhor rota possível entre duas cidades de um mapa. 

Seu programa deve mostrar a melhor rota possível entre duas cidades. <br> <br> A rota deve ser apresentada de forma a mostrar a sequência de cidades desde a origem até o destino, e a distância total do trajeto. <br> <br>  As cidades devem ser informadas via teclado, e o resultado deve ser apresentado na tela.


### Descrição 
Supondo que exista um mapa, como ele pode ser representado no programa, de forma a facilitar a descoberta de caminhos? <br> <br> Uma ideia é representar um mapa como sendo uma tabela que informe cada par de localidades e a distância entre elas. <br> <br> Por exemplo, veja este mapa com alguns municípios próximos de Florianópolis:

| Município 1  | Município 2	| Distância (km) |
|------------------------| --- |----------------|
| Florianópolis          | São José	| 19             | 
| Florianópolis	         | Biguaçu	| 24             |
| São José	              | Biguaçu	| 20 |               
| São José	              | Palhoça	| 6 |                
| São José	              | São Pedro de Alcântara |	22 |
| Biguaçu                |	Antônio Carlos             |	17 |
| São Pedro de Alcântara	 | Antônio Carlos	| 10             |

Uma vez existindo essa tabela, como será que um programa poderia calcular uma rota entre duas cidades quaisquer?  <br> <br> 
Basicamente, ele precisa usar um algoritmo de busca no mapa. O algoritmo SPF, criado por Djikstra, pode ser utilizado nesse projeto.
