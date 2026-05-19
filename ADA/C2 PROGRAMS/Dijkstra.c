// Dijkstra Algorithm using Functions (Directed Graph)

#include<stdio.h>

#define INF 9999

int a[10][10], d[10], vis[10], p[10];
int n, e, src;

// Function to initialize matrix
void initialize()
{
    int i, j;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == j)
                a[i][j] = 0;
            else
                a[i][j] = INF;
        }
    }
}

// Function to create graph
void createGraph()
{
    int i, u, v, cost;

    printf("Enter number of nodes:\n");
    scanf("%d", &n);

    printf("Enter number of edges:\n");
    scanf("%d", &e);

    initialize();

    for(i = 1; i <= e; i++)
    {
        printf("Enter the connection:\n");
        scanf("%d%d", &u, &v);

        printf("Enter the cost:\n");
        scanf("%d", &cost);

        // Directed graph
        a[u][v] = cost;
    }
}

// Function to initialize arrays
void initializeSource()
{
    int i;

    printf("Enter source vertex:\n");
    scanf("%d", &src);

    for(i = 1; i <= n; i++)
    {
        d[i] = a[src][i];
        p[i] = src;
        vis[i] = 0;
    }

    d[src] = 0;
    vis[src] = 1;
    p[src] = -1;
}

// Function to find minimum vertex
int findMin()
{
    int i, mini = INF, u = -1;

    for(i = 1; i <= n; i++)
    {
        if(vis[i] == 0 && d[i] < mini)
        {
            mini = d[i];
            u = i;
        }
    }

    return u;
}

// Dijkstra Function
void dijkstra()
{
    int i, u, count = 0, temp;

    while(count < n - 1)
    {
        u = findMin();

        if(u == -1)
            break;

        vis[u] = 1;

        for(i = 1; i <= n; i++)
        {
            if(vis[i] == 0)
            {
                temp = d[u] + a[u][i];

                if(temp < d[i])
                {
                    d[i] = temp;
                    p[i] = u;
                }
            }
        }

        count++;
    }
}

// Function to display result
void display()
{
    int i, j;

    printf("\nShortest Paths:\n");

    for(i = 1; i <= n; i++)
    {
        if(i != src)
        {
            printf("\nPath: %d", i);

            j = i;

            while(p[j] != -1)
            {
                printf(" <- %d", p[j]);
                j = p[j];
            }

            printf("\nCost = %d\n", d[i]);
        }
    }
}

// Main Function
int main()
{
    createGraph();
    initializeSource();
    dijkstra();
    display();

    return 0;
}

