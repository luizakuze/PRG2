## Alocação de Memória

- **Estática** <br>
O compilador sabe quanta memória cada tipo de dados precisa, e por isso reserva a quantidade adequada para cada variável.

- **Dinâmica** <br>
Não se sabe a quantidade de dados que serão aramzenados.


![Captura de tela de 2023-05-10 10-33-54](https://github.com/luizakuze/Prog2/assets/111708035/7d9206fe-7afc-4d13-b230-d8fecb98a397)


As variáveis são guardadas na pilha (Stack). O que tem aqui: Parâmetros de funções e variáveis.

No Heap se faz a alocação dinâmica. -> Aqui o progamador tem controle.


Anotação: 

- "1<<20"
Significa que vai voltar 20 posições do num.

- bzero(mem, size);
Escreve zeros no mem, qt size.

Área de memória não está alocada, mensagem:

O próprio processador é quem dispara esse erro. O prórpio Linux aqui decide qual a máxima de memória da pilha.

Por que as funções não podem chamar outras funções, pode cair nesse erro. Pois cada chamada de função precisa alocar mais memória ("StackOverflow")

![Captura de tela de 2023-05-10 10-44-35](https://github.com/luizakuze/Prog2/assets/111708035/b22d319e-ab80-4607-aae1-bc52ac123e3b)

O heap aloca mais memória 

![Captura de tela de 2023-05-10 10-51-09](https://github.com/luizakuze/Prog2/assets/111708035/aea42518-a640-42f3-8ee2-1e5ee58516db)

### Como funciona para alocar memória dinamicamente

HEAP

![Captura de tela de 2023-05-10 10-52-17](https://github.com/luizakuze/Prog2/assets/111708035/dda8053b-2ee2-41b2-b771-4f0abbe4d516)

STACK

![Captura de tela de 2023-05-10 10-53-51](https://github.com/luizakuze/Prog2/assets/111708035/80dd8bb4-ae05-4702-a11f-6cb7f161b193)



Não é possível realocar a memória, expandir ela. Somente criar outro espaço e copiar todos os elementos p esse novo espaço q deve ter mais memória disponível.


### Sintaxe Ponteiros
int * v = new int[10] -----> área do heap
int w[10] ------> área da pilha



---

### Revisão

- **Em C++**

int x; ---> usual.
int * p = new int; ---> criando dinamicamente (new é aloque memória dinâmicamente na quantidade de dados necessária).

- **Em C**

int * = (int*)malloc(sizeof(int));

- **Em C++**

int v[10];
int * pv = new int[10]; ---> dinamicamente.

- **Em C**

int * = (int*)malloc(10*sizeof(int));

Forma dinâmica:
- Aloca memória
- Inicializa  aárea de memória se tiver a instrução

