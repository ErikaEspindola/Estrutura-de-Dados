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
  ### Acesso ao início e ao fim
  ```c++
  vector<int>::iterator inicio = v.begin(); // retorna o ponteiro para o início do vetor
  vector<int>::iterator fim = v.end(); // retorna o ponteiro para o último elemento do vetor
  ```

  ### Inserção de elementos
    #### No fim
    Complexidade: O(1)
    ```c++
    v.push_back(1); // adiciona o elemento '1' no final do vetor
    ```
    #### No início
    Complexidade: O(n)
    ```c++
    v.insert(v.begin(), 1); // adiciona o elemento '1' no início do vetor
    ```
    #### No índice
    Complexidade: O(n)
    ```c++
    v.insert(v.begin() + index, 1); // adiciona o elemento '1' no índice do vetor
    ```

  ### Remoção de elementos
    #### No fim
    Complexidade: O(1)
    ```c++
    v.pop_back(); // remove o último elemento do vetor
    ```
    #### No início
    Complexidade: O(n)
    ```c++
    v.erase(v.begin()); // remove o primeiro elemento do vetor
    ```
    #### No índice
    Complexidade: O(n)
    ```c++
    v.erase(v.begin() + index);  // remove o elemento no índice do vetor
    ```     

  ### Tamanho do vetor
  ```c++
  int tamanho = v.size(); // retorna o tamanho do vetor
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

## Deque
- Praticamente o mesmo propósito do vetor dinâmico (vector)
- Operações eficientes de inserir e remover elementos do início

  ### Declaração
  ```c++
  deque <int> d;
  ```
  ### Inserção de elementos
    #### No fim
    Complexidade: O(1)
    ```c++
    d.push_back(1); // insere o elemento '1' no fim do deque
    ```
    #### No início
    Complexidade: O(1)
    ```c++
    d.push_front(1); // insere o elemento '1' no início do deque
    ```
    #### No índice
    Complexidade: O(n)
    ```c++
    d.insert(d.begin() + index, 1); // insere o elemento '1' no índice do deque
    ```
    
  ### Remoção de elementos
    #### No fim
    Complexidade: O(1)
    ```c++
    d.pop_back(); // remove o elemento do fim do deque
    ```
    #### No início
    Complexidade: O(1)
    ```c++
    d.pop_front(); // remove o elemento do início do deque
    ```
    #### No índice
    Complexidade: O(n)
    ```c++
    d.erase(d.begin() + index); // remove o elemento do índice do deque
    ```
## Pilha
- Utilizada para operações LIFO (Last In First Out), ou seja, o último a entrar é o primeiro a sair

  ### Declaração
  ```c++
  stack <int> s;
  ```
  ### Inserção de elementos
  Complexidade: O(1)
  ```c++
  s.push(20); // insere o valor '20' na pilha 
  ```
  ### Remoção de elementos
  Complexidade: O(1)
  ```c++
  s.pop(); // remove o elemento do topo da pilha 
  ```
  ### Acessar elemento do topo
  Complexidade: O(1)
  ```c++
  int top = s.top(); // retorna o elemento do topo da pilha
  ``` 
## Fila
- Utilizada para operações FIFO (First In First Out), ou seja, o primeiro a entrar é o primeiro a sair

  ### Declaração
  ```c++
  queue <int> q;
  ```
  ### Inserção de elementos
  Complexidade: O(1)
  ```c++
  q.push(12); // insere o valor '12' na fila 
  ```
  ### Remoção de elementos
  Complexidade: O(1)
  ```c++
  q.pop(); // remove o primeiro elemento da fila
  ```
  ### Acessar elemento do início e do fim
  Complexidade: O(1)
  ```c++
  int inicio = q.front(); // retorna o primeiro elemento da fila
  int fim = q.back(); // retorna o último elemento da fila
  ```

## Análise comparativa de complexidade

Mais informações: [Big-O Cheat Sheet](http://bigocheatsheet.com/)
