#include <stdio.h>
#include <limits.h>

#define V 6
#define E 9

struct Edge { int origem, destino, peso; };

void bellmanFord(struct Edge arestas[], int origem) {
    int dist[V];
    for (int i = 0; i < V; i++) dist[i] = INT_MAX;
    dist[origem] = 0;

    // V-1 iteracoes de relaxamento das arestas
    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = arestas[j].origem;
            int v = arestas[j].destino;
            int peso = arestas[j].peso;

            if (dist[u] != INT_MAX && dist[u] + peso < dist[v]) {
                dist[v] = dist[u] + peso;
            }
        }
    }

    int temCiclo = 0;
    for (int j = 0; j < E; j++) {
        int u = arestas[j].origem;
        int v = arestas[j].destino;
        int peso = arestas[j].peso;

        if (dist[u] != INT_MAX && dist[u] + peso < dist[v]) {
            temCiclo = 1;
            break;
        }
    }

    if (temCiclo) {
        printf("O grafo contem ciclo de peso negativo!\n");
    } else {
        char labels[] = {'A', 'B', 'C', 'D', 'E', 'F'};
        printf("Distancias minimas a partir de %c:\n", labels[origem]);
        for (int i = 0; i < V; i++) {
            if (dist[i] == INT_MAX) {
                printf("De %c ate %c = Infinito\n", labels[origem], labels[i]);
            } else {
                printf("De %c ate %c = %d\n", labels[origem], labels[i], dist[i]);
            }
        }
    }
}

int main() {
    struct Edge arestas[E] = {
        {0,1,4}, {0,2,2}, {1,2,-1}, {1,3,2},
        {2,3,3}, {2,4,2}, {3,5,2}, {4,3,-3}, {4,5,3}
    };
    bellmanFord(arestas, 0);
    return 0;
}