# Estruturas de Dados Não Lineares

## Set
  - O Set é um container que armazena elementos únicos ordenadamente.
  - O valor dos elementos não pode ser modificado, mas é possível inserir ou removê-los.
  
    ### Declaração
    ```c++
    set <int> s; // declaração de um set de tipo inteiro
    ```
    ### Inserção
    Complexidade: O (*log* N)
    ```c++
    s.insert(1); // inserção do número inteiro '1' no set
    ```
    ### Remoção
    Complexidade: O (*log* N)
    ```c++
    s.erase(1); // remove o número inteiro '1' do set
    ```

## Map
  - O Map é um array generalizado que consiste em uma combinação de uma chave e um valor
  - A chave normalmente é utilizada para ordenação e identificação de algum elemento
  - São tipicamente implementados como Árvore Binária de Busca
  
  ### Declaração
  ```c++
  map <string, int> m; // declaração de um map com chave do tipo string e valor de tipo inteiro
  ```
  
  ### Inserção
  ```c++
  m.insert(pair<string, int>("J", 1)); // inserção de um par onde a chave é uma string e o valor um inteiro 
  ```  
  
  ### Remoção
  ```c++
  it = m.find('b');
  m.erase(it); // remove pelo iterator
  ```  
  ```c++
  m.erase('c'); // remove pela chave
  ```  
  ```c++
  it = m.find('e');
  m.erase (it, m.end() ); // remove pelo range
  ```  
  
  ### Acesso à chave e aos valores
  ```c++
  for (auto x : m) {
    cout << x.first << " " << x.second << "\n"; //imprime na tela todas as chaves e todos os valores do map
  }
  ``` 

## Fila de Prioridades
  - É implementada a partir da estrutura [Heap](https://www.geeksforgeeks.org/binary-heap/)
  - Por padrão, a fila de prioridades é ordenada em ordem decrescente

  ### Declaração
  ```c++
  priority_queue <int> q; //define uma fila de prioridades de números inteiros
  ``` 
  
  ### Inserção
  Complexidade: O (*log* N)
  ```c++
  q.push(1); //insere o elemento 1 na fila
  ``` 
  
  ### Remoção
  Complexidade: O (*log* N)
  ```c++
  q.pop(); //remove o primeiro elemento da fila (que é o maior)
  ``` 
  
  ### Acesso ao maior elemento
  ```c++
  q.top(); //retorna o maior elemento da fila
  ``` 

## Union Find
- Union Find é uma Estrutura de Dados que possui funções eficientes para:
  - Encontrar o set no qual o elemento pertence
  - Unir dois sets disjuntos em um único

- Inicialmente, cada elemento pertence a um set diferente
```c++
for(int i = 1; i <= n; i++) link[i] = i;
for(int i = 1; i <= n; i++) size[i] = 1;
``` 

- A função *find* retorna o elemento representativo de *x*
- Complexidade: O (*log* N)
```c++
int find(int x) {
  while (x != link[x]) x = link[x];
  return x;
}
``` 

- A função *same* verifica se os elementos *a* e *b* pertencem ao mesmo set
- Complexidade: O (*log* N)
```c++
bool same(int a, int b) {
  return find(a) == find(b);
}
```

- A função *unite* une os sets que contêm os elementos *a* e *b*
- Complexidade: O (*log* N)
```c++
void unite(int a, int b) {
  a = find(a);
  b = find(b);
  if(size[a] < size[b]) swap(a, b);
  size[a] += size[b];
  link[b] = a;
}
```

## Fenwick Tree

## Árvore Binária

## Grafos

## Segment Tree
