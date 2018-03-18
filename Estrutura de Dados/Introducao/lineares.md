# Estruturas de Dados Lineares

De forma geral, são estruturas de dados nas quais elementos de um mesmo tipo de dado estão organizados de maneira sequencial. Existem
diversas estruturas de dados lineares, nesse tópico falaremos das mais utilizadas em C++ para competições.

## Vetor estático

- É uma estrutura de dados que consiste em uma coleção de elementos, que podem ser identificados pelo seu índice
- Utilizado quando o tamanho do do input é mencionado no problema
- É sempre bom declarar o tamanho do vetor com espaços extras para evitar o acesso de memória indevido

- Operações típicas:
  - Acessar índices
  - Ordenação
  - Busca binária
  - Linear scan
 
### Declaração
```c++
int array[10]; // declaração de um vetor estático de inteiros com 10 posições
```

### Atribuição
```c++
array[2] = 30; // atribuição do valor 30 ao vetor no índice 2
```
```c++
int array[5] = {10, 20, 30, 40, 50}; // atribuição de valores pré-definidos no vetor
```

### Ordenação
```c++
sort(array, array+10); // ordena em ordem crescente
```

## Vetor dinâmico
- Tem as mesmas características do vetor estático, mas seu tamanho pode mudar de forma dinâmica
- Utilizado quando o tamanho do input não é informado
- Normalmente é inicializado com um tamanho para melhorar a performance

### Declaração
```c++
vector <int> v(10); // declaração de um vetor dinâmico de inteiros com 10 posições
```

### Adicionando elemento no final
```c++
v.push_back(1); // adiciona o elemento '1' no final do vetor
```

### Remoção do último elemento
```c++
v.pop_back(); // remove o último elemento do vetor
```

### Tamanho do vetor
```c++
int tamanho = v.size(); // retorna o tamanho do vetor
```

### Acesso ao início e ao fim
```c++
vector<int>::iterator inicio = v.begin(); // retorna o ponteiro para o início do vetor
vector<int>::iterator fim = v.end(); // retorna o ponteiro para o último elemento do vetor
```

### Ordenação
```c++
sort(v.begin(), v.end()); // ordena em ordem crescente
```

Mais detalhes em: [C++ Reference](http://www.cplusplus.com/reference/vector/vector/)

## Lista encadeada e duplamente encadeada



### Comparação de complexidade das operações

Operações | Lista encadeada  | Lista duplamente encadeada
--------- | ---------------  | --------------------------
Acesso aleatório  | O(n)     | O(n)
Inserção no final | O(1)     | O(1)
Remoção no final  | O(n)     | O(1)
Inserção no início| O(1)     | O(1)
Remoção no início | O(1)     | O(1)

## Análise comparativa de complexidade

Operações | Vetor estático | Lista | Fila | Pilha
--------- | -------------  | ----- | ---- | -----
Acesso    | O(1) | O(n) | O(n) | O(n) | O(n)
Pesquisa  | O(n) | O(n) | O(1) | O(n) | O(n)
Inserção  | O(n) | O(1) | O(1) | O(1) | O(1)
Remoção   | O(n) | O(1) | O(n) | O(1) | O(1)

Mais informações: [Big-O Cheat Sheet](http://bigocheatsheet.com/)
