# Unidade I //Video1

- Àrvores;
- Àrvores binárias;
- Àrvore estritamente binaria;
- Àrvore binária completa;
- Àrvores binárias em linguagem C.

# Àrvores são um caso particular de grafos: "só existe um caminho não existe caminho alternativo".
-   Grafos conexo T em que existe um e somente um caminho entre qualquer par de vértices de T.
Um subgrafo acíclico de um grafo é denomindado subárvore.

# Àrvores
- São estruturas eficiêntes para realizar pesquisa.
-   Acesso direto;
-   Acesso sequêncial;
-   Fácil inserção/remoção de dados;
-   Boa taxa de utilização de memória;
-   Ùtil para memórias primaria e secundaria;
-   Custo beneficio considerando os atributos anteriores;
-   Hash table x Àrvores(Pesquisa vs Inserção).

# Especialização -> Àrvores binárias //Aula 2
- Definição: conjunto finito de elementos T = {R, E, D}
    Pode ser vazio, T = 0 //pode ser vazio
    Três subconjuntos disjuntos:
    Raiz(R);
    Subárvore binaria Esquerda(E);
    Subárvore binária Direita(D).

# Àrvore TA //Exemplo
- Ta ={Ra, Ea, Da}
- Ra = {A}
- Ea = Tb
- Da = Tc

# Alguns termos utilizados para os vértices:
- Raiz é o nó inicial, não possui um nó pai.
Considere o nó v com uma subárvore cuja raiz é w.
    diz-se que v é pai de w
    diz-se que w é filho de v
Dois nós que possuem o mesmo pai são ditos irmãos;
Um nó sem filhos é chamado de folha.
Ancestral e descedente;
Caminho na árvore: descer e subir.

# Nivel de um nó
- Nivel da raiz é N0 = 0
- Nível de um nó F é igual ao nível de seu pai P mais o valor 1
                Nf = Np + 1
- Altura da árvore
    È igual ao valor do maior nível de todos os nós.

# Àrvores Estritamente Binárias
- Estrutura nó;
    Dado, pai, esquerda, direita.

Definição: todo nó não folha, deve conter os dois filhos
números de nós = (2*f) -1

onde f é o número de folhas

# CONSIDERAÇÕES FINAIS

- Nesta unidade, foi apresentada ao aluno um nova estrutura de dados a árvore binária. ela lembra muito um grafo, porém essas duas estruturas se diferem pelos seguintes motivos.
- 1) O grafo pode não ter nehuma aresta e contém no mínimo um único vértice.
- 2) Uma árvore pode ser vazia e todos os nós podem ser de no máximo grau 3, sendo que cada nó tem um único pai e dois filhos.

- Vimos duas formas de apresentar essa poderosa estrutura pelo uso de vetores.
No primeirro modelo o vetor vai sendo preechido na primeira posição da váriavel.
A segunda implementação possui uma abordagem focada em indexar os nós dentro do vetor, posicionando-os de acordo com a sua ascendência e descendência.
A importância da árvore binária e da sua representação indexada ficará clara na próxima unidade, quando trataremos dos mais usuais métodos de pesquisa em memoria.





