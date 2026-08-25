#include <stdio.h>
#include <limits.h>

#define V 6

int distanciaMinima(int dist[], int visitado[]) {
    int min = INT_MAX, min_index = -1;
    for (int v = 0; v < V; v++) {
        if (!visitado[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void dijkstra(int grafo[V][V], int origem) {
    int dist[V], visitado[V];
    
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        visitado[i] = 0;
    }
    
    dist[origem] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = distanciaMinima(dist, visitado);
        if (u == -1 || dist[u] == INT_MAX) break; // Vértices restantes são inalcançáveis
        
        visitado[u] = 1;

        for (int v = 0; v < V; v++) {
            // Condição de relaxamento:
            if (!visitado[v] && grafo[u][v] != 0 && dist[u] != INT_MAX 
                && dist[u] + grafo[u][v] < dist[v]) {
                dist[v] = dist[u] + grafo[u][v];
            }
        }
    }

    for (int i = 0; i < V; i++) {
        if (dist[i] == INT_MAX) {
            printf("Distancia de %d ate %d = Infinito (inalcancavel)\n", origem, i);
        } else {
            printf("Distancia de %d ate %d = %d\n", origem, i, dist[i]);
        }
    }
}

int main() {
    // Matriz simétrica de adjacência (0 indica ausência de aresta direta)
    int grafo[V][V] = {
        { 0, 4, 2, 0, 0, 0 }, // Vértice 0
        { 4, 0, 1, 5, 0, 0 }, // Vértice 1
        { 2, 1, 0, 8, 10, 0 }, // Vértice 2
        { 0, 5, 8, 0, 2, 6 }, // Vértice 3
        { 0, 0, 10, 2, 0, 3 }, // Vértice 4
        { 0, 0, 0, 6, 3, 0 }  // Vértice 5
    };

    dijkstra(grafo, 0);

    return 0;
}