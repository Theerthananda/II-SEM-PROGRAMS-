#include <stdio.h>
#include <stdlib.h>

int a[10][10], i, j, n, e, u, v, cost;
int vis[10] = {0}, mincost = 0, ne = 0, src, min;

void matrix_print()
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("Enter number of nodes\n");
    scanf("%d",&n);

    printf("Enter number of edges\n");
    scanf("%d",&e);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]=9999;
        }
    }

    for(i=1;i<=e;i++)
    {
        printf("Enter the connection\n");
        scanf("%d%d",&u,&v);

        printf("Enter the cost\n");
        scanf("%d",&cost);

        a[u][v]=a[v][u]=cost;
    }

    printf("Adjacency Matrix is\n");
    matrix_print();

    printf("Enter the source\n");
    scanf("%d",&src);

    vis[src]=1;

    while(ne < n-1)
    {
        min = 9999;

        for(i=1;i<=n;i++)
        {
            if(vis[i]==1)
            {
                for(j=1;j<=n;j++)
                {
                    if(vis[j]==0 && a[i][j] < min)
                    {
                        min = a[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

    
        if(min == 9999)
        {
            printf("Graph is not connected\n");
            return 0;
        }

        vis[v] = 1;
        printf("%d to %d = %d\n", u, v, min);
        mincost += min;

        a[u][v] = a[v][u] = 9999;
        ne++;
    }

    printf("Total cost = %d\n", mincost);
}