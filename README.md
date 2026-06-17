# QuickSort.cpp

Implementação do algoritmo de ordenação **Quick Sort** em C++, feita para fins didáticos.

## Descrição

O programa demonstra como o Quick Sort ordena um vetor de inteiros utilizando a estratégia de particionamento (divisão e conquista), escolhendo o primeiro elemento de cada sub-vetor como pivô. A lógica está dividida em três funções:

- `partition`: reorganiza o sub-vetor entre os índices `inicio` e `fim`, posicionando o pivô (primeiro elemento) em sua posição correta, de forma que todos os elementos menores fiquem à esquerda e os maiores (ou iguais) à direita. Retorna o índice final do pivô.
- `quickSort`: função recursiva que aplica `partition` para dividir o vetor e, em seguida, chama a si mesma para ordenar as partições à esquerda e à direita do pivô.
- `swap`: troca os valores de duas posições do vetor através de ponteiros.

No `main`, um vetor de exemplo é declarado, impresso antes da ordenação, ordenado pelo `quickSort` e impresso novamente para mostrar o resultado final.

## Como funciona o Quick Sort

1. **Escolha do pivô**: o primeiro elemento do sub-vetor é escolhido como pivô.
2. **Particionamento**: o vetor é percorrido do fim para o início, trocando elementos maiores ou iguais ao pivô para o lado direito, até que o pivô seja posicionado corretamente entre os elementos menores (à esquerda) e maiores ou iguais (à direita).
3. **Recursão**: o processo é repetido recursivamente para as partições à esquerda e à direita do pivô, até que cada sub-vetor tenha tamanho 0 ou 1.

Complexidade de tempo: **O(n log n)** em média e melhor caso; **O(n²)** no pior caso (quando o vetor já está ordenado ou inversamente ordenado, devido à escolha do primeiro elemento como pivô).
Complexidade de espaço: **O(log n)** em média, referente à pilha de recursão (ordenação in-place).

## Estrutura do código

| Função | Responsabilidade |
|---|---|
| `swap(int *a, int *b)` | Troca os valores apontados por `a` e `b`. |
| `partition(int *V, int inicio, int fim)` | Particiona o sub-vetor `V[inicio..fim]` em torno do pivô e retorna sua posição final. |
| `quickSort(int *V, int inicio, int fim)` | Ordena recursivamente o sub-vetor `V[inicio..fim]` usando particionamento. |

## Como compilar e executar

\`\`\`bash
g++ QuickSort.cpp -o quicksort
./quicksort
\`\`\`

## Saída esperada

\`\`\`
Vetor Original:
17|38|12|2|44|25|19|-4|30|10|
Vetor Ordenado:
-4|2|10|12|17|19|25|30|38|44|
\`\`\`

## Observações

- A escolha do pivô como o primeiro elemento (em vez de um pivô aleatório ou da mediana) torna o algoritmo mais simples, porém mais sujeito ao pior caso O(n²) em vetores já ordenados.
- O código foi escrito em estilo didático, com comentários em português explicando cada etapa do algoritmo.
- `main()` está sem tipo de retorno explícito (implícito `int` em compiladores mais antigos); em padrões C++ modernos, o recomendado é declarar `int main()`.

## Autor

Laura Farias — 12/05/2026
