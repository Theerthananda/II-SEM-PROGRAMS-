#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int V, E;

// Edge structure
struct Edge {
    int u, v, weight;
};

struct Edge edges[MAX];

// Disjoint Set (Union-Find)
int parent[MAX];

// Find function
int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

// Union function
void unionSet(int u, int v) {
    int rootU = find(u);
    int rootV = find(v);
    parent[rootU] = rootV;
}

// Sort edges by weight (simple bubble sort)
void sortEdges() {
    for (int i = 0; i < E - 1; i++) {
        for (int j = 0; j < E - i - 1; j++) {
            if (edges[j].weight > edges[j + 1].weight) {
                struct Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

// Kruskal function
void kruskalMST() {
    int totalCost = 0;

    // Initialize parent
    for (int i = 0; i < V; i++)
        parent[i] = i;

    sortEdges();

    printf("\nEdge \tWeight\n");

    for (int i = 0; i < E; i++) {
        int u = edges[i].u;
        int v = edges[i].v;

        if (find(u) != find(v)) {
            printf("%d - %d \t%d\n", u, v, edges[i].weight);
            totalCost += edges[i].weight;
            unionSet(u, v);
        }
    }

    printf("Total Cost of MST = %d\n", totalCost);
}

int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter number of edges: ");
    scanf("%d", &E);

    printf("Enter edges %d edges:\n",E);

    for (int i = 0; i < E; i++) {
        printf("Enter edges (u v weight): ");
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].weight);
    }

    kruskalMST();

    return 0;
}